printf("You are at or below your average daily use (%.3lf GB/day).\n", remaining_daily_use);
        
printf("You can use up to %.3lf GB/day and stay below your data plan limit.\n", remaining_daily_use);
    } 
else
 {
        
printf("You have already met your limit for this month. Looks like you're getting some overage charges...\n");
    }

    
return 0;
}
