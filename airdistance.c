#include <stdint.h>
#include <math.h>
#define earth_radius 6371.0
double degreestoradians(double degrees)
{
    return degrees *M_PI/180.0;
}
double sphericallawofcosines(double lat1, double lon1, double lat2, double lon2)
{
    double lat1rad = degreestoradians(lat1);
    double lat2rad = degreestoradians(lat2);
    double lon1rad = degreestoradians(lon1);
    double lon2rad = degreestoradians(lon2);

    double distance = acos(sin(lat1rad)*sin(lat2rad)*cos(lat1rad)+cos(lat2rad)*cos(lon2rad-lon1rad)*earth_radius);
    return distance;
    int main()
{
    double lat1,lat2,lon1,lon2;
    printf("Enter the latitude and longitude of the origin:\n");
    scanf("lf",&lat1);
    scanf("lf",&lon1);
    printf("Enter the latitude and longitude of the destnation:\n");
    scanf("lf",&lat2);
    scanf("lf",&lon2);
    double distance = sphericallawofcosines(lat1,lat2,lon1,lon2);

    printf("\nlocation distance\n");
    printf("=====================\n");
    printf("origin:   (%.6lf,%.6lf)\n",lat1,lon1);
    printf("destnation:  (%.6lf,%.6lf)\n",lat2,lon2);
    printf("air distance is %.6lf kms\n",distance);

    return 0;


}

}

