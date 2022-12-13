#greedy 0-1 knapsack

n2 <- c(100,1000,2000,5000,6000 , 7000 , 8000 , 10000 , 12000 , 16000, 18000, 20000 , 22000);
time2 <- c(0.002,0.002,0.002,0.002,0.002,0.002,0.002,0.004, 0.006,0.007, 0.011, 0.014 , 0.015);
plot(n2,time2, type = "o", col ="red");

#dynamic programming 0-1 knapsack

n <- c(500, 1000 , 2000 , 4000 , 6000 , 8000 , 10000)
time <- c(0.012, 0.044, 0.215, 0.425, 2.068, 3.511, 5.271)
plot(n,time, type = "o", col ="red");
lines(n, time , col = "blue")

#Branch and bound 0-1 knapsack

n2 <- c(30,50,70,100)
time2 <- c(0.009, 0.04, 14.568, 81.015)
plot(n,time, type = "o", col ="red");
