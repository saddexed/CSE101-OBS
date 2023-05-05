#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

void typwrt(char txt[2000]) {
    for (int i = 0; i<=strlen(txt); i++) {
        printf("%c", txt[i]);
        Sleep(10);
    }
}

void redir() {
    printf("\n\n");
    for (int i = 99998; i >= 10000; i -= 2) {
    printf("\rRedirecting to Main Menu in %ds...", i/25000);
    }
    main();
}

void acc_sts() {
    /*rand() % (18392 + 1 - 3162) + 3162*/
    printf("----------------------------------------Account Status----------------------------------------\n");
    char txt[500] = "\nUserID           : 82734622\nClient Name      : Shawn Dex\nMember Since     : 19-03-2014\nAccount Balance  : $18934\nIssued Card No. : 9835-3957-2284-7145";
    typwrt(txt);
    redir();

}

void acc_opn() {
    char a[50];
    printf("----------------------------------------Open Account----------------------------------------\n\n");
    printf("Enter Name      : "); fflush(stdout); fgets(a,20,stdin);
    printf(""); fflush(stdout); fgets(a,20,stdin);
    printf("Enter Aadhar No.: "); fflush(stdout); fgets(a,20,stdin);
    printf("Enter Username  : "); fflush(stdout); fgets(a,20,stdin);
    printf(""); fflush(stdout); fgets(a,20,stdin);
    printf("Enter Password  : "); fflush(stdout); fgets(a,20,stdin);
    printf("Confirm Password: "); fflush(stdout); fgets(a,20,stdin);
    printf("\n");
    for (int i = 0; i <= 200000; i++){
        printf("\rAccount Creation In Progress %d%% ", i/2000);
    }
    printf("\n\nAccount Creation Sucessful!");
    redir();
}

void che_pwd() {
    char o[25],n[25],c[25];
    printf("----------------------------------------Change Password----------------------------------------\n\n");
    printf(""); fflush(stdout); fgets(o,20,stdin);
    printf("Enter Old Password  : "); fflush(stdout); fgets(o,20,stdin);
    printf("Enter New Password  : "); fflush(stdout); fgets(n,20,stdin);
    if (strcmp(o, n) == 0) {
        printf("New Password cannot be the Old Password. Redirecting to Menu in 3s...");
        Sleep(3000);
        main();
    }
    printf("Confirm New Password: "); fflush(stdout); fgets(c,20,stdin);
    if (strcmp(n, c) != 0) {
        printf("Confirm Passwords don't match. Redirecting to Menu in 3s...");
        Sleep(3000);
        main();
    }
    printf("\nPassword Changed Sucessfully!");
    redir();
}

void pye_mgt() {
    printf("----------------------------------------Payee Management----------------------------------------\n");
    char txt[500] = "Current Recurring Payees:\n\n     Name    |   Amount  |   Frequency   |   Last Paid On    \n-------------------------------------------------------------\n    Sarah    |  200$     |    Monthly    |    27/03/2023     \n    Liam     |  100$     |    Monthly    |    02/03/2023     \n    John     |  69$      |    One Time   |    05/01/2023     \n  Insurance  |  299.99$  |  Half-Yearly  |    19/03/2023     ";
    typwrt(txt);

}

void viw_sts() {
    printf("----------------------------------------View Statement----------------------------------------");
    char txt[1500] = "\nShowing Last 10 Transactions:\n\n Sl.No. |    Status    |   Amount   |   Transaction ID   |    Payment Method    |    Time & Date    \n-----------------------------------------------------------------------------------------------------\n   01   |     PAID     |   29.95$   |  CashApp/98507234  |     UPI/CashApp      |  20:35 21/2/2023\n   02   |     PAID     |   18.00$   |  CashApp/98370957  |     UPI/CashApp      |  10:49 20/2/2023\n   03   |     PAID     |   05.35$   |  CashApp/12804776  |     UPI/CashApp      |  14:53 20/2/2023\n   04   |     PAID     |   04.63$   |    GPay/66302844   |    UPI/GooglePay     |  16:45 19/2/2023\n   05   |     PAID     |   19.90$   |    GPay/74173911   |    UPI/GooglePay     |  19:26 17/2/2023\n   06   |    FAILED    |   19.90$   |  CashApp/32055623  |     UPI/CashApp      |  19:24 17/2/2023\n   07   |     PAID     |   82.12$   |     JP/87513987    |     DEBIT *2914      |  11:57 16/2/2023\n   08   |     PAID     |   61.05$   |     JP/45383209    |     DEBIT *2914      |  15:11 14/2/2023\n   09   |     PAID     |   11.11$   |  CashApp/45383209  |     UPI/CashApp      |  19:23 12/2/2023\n   10   |     PAID     |   53.47$   |     JP/98507234    |     DEBIT *2914      |  20:42 11/2/2023\n";
    typwrt(txt);
    redir();
}

void main() {
    system("cls");
    printf("----------------------------------------ASX-BANK----------------------------------------\n");
    char txt[500] = "Welcome to ASX-BANK. Following options are available:\n\n1: Account Status\n2: Account Opening\n3: Change Password\n4: Payee Management\n5: View Statement\n6. Exit\n\nPlease input your desired option : ";
    typwrt(txt);
    int module;
    scanf("%d", &module);
    system("cls");
    switch (module) {
        case 1: acc_sts(); break;
        case 2: acc_opn(); break;
        case 3: che_pwd(); break;
        case 4: pye_mgt(); break;
        case 5: viw_sts(); break;
        case 6: break; 
    }
}
