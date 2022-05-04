
#include "TXLib.h"

struct MZStack
    {
    int *MPGData = NULL;

    int MPGSize = 0;

    int MaxMPGSize = 0;
    };

void InitStack (MZStack* DBM, int Size);
void PushStack (MZStack* DBM, int Elem);
int  PopStack (MZStack* DBM);
void PrintStack (MZStack* DBM);
int Sum (MZStack* DBM);
int Sub (MZStack* DBM);
int Multy (MZStack* DBM);

int main()
    {
    MZStack DBM = {};

    InitStack (&DBM, 10);

    PrintStack (&DBM);

    int CMDP = 0;

    char CMD [100] = "";

    while (0 < 1)
        {
        scanf ("%s", CMD);

        if (strcmp (CMD, "Push") == 0)
            {
            scanf ("%d", &CMDP);

            PushStack (&DBM , CMDP);
            }

        if (strcmp (CMD, "Sum") == 0)
            {
            Sum (&DBM);

            PrintStack (&DBM);
            }

        if (strcmp (CMD, "Sub") == 0)
            {
            Sub (&DBM);

            PrintStack (&DBM);
            }

        if (strcmp (CMD, "Multy") == 0)
            {
            Multy (&DBM);

            PrintStack (&DBM);
            }

        if (strcmp (CMD, "Exit") == 0)
            {
            break;
            }
        }

    printf ("Out1 = %d\n", PopStack (&DBM));
    //printf ("Out2 = %d\n", PopStack (&DBM));

    PrintStack (&DBM);
    //printf ("Out2 = %d\n", PopStack (&DBM));
    //printf ("Out3 = %d\n", PopStack (&DBM));
    //printf ("Out4 = %d\n", PopStack (&DBM));
    //printf ("Out5 = %d\n", PopStack (&DBM));

    }

void InitStack (MZStack* DBM, int Size)
    {
    DBM->MPGData = new int [Size];

    DBM->MaxMPGSize = Size;
    }

void PushStack (MZStack* DBM, int Elem)
    {
    if (DBM->MPGSize >= DBM->MaxMPGSize)
        {

        while (!GetAsyncKeyState (VK_LEFT))
            {
            $g printf ("Идет Штирлец по улице, Видит: Лужа ! Думает: 'А по х*й', и наступает, стоит в луже и думает: 'все таки по колено'\n");
            }

        return;
        }

    DBM->MPGData [DBM->MPGSize] = Elem;

    DBM->MPGSize = DBM->MPGSize + 1;
    }

int PopStack (MZStack* DBM)
    {
    if (DBM->MPGSize < 1)
        {
        txMessageBox ("ЕчЬуыыфпуИщч");

        return 0;
        }

    DBM->MPGSize = DBM->MPGSize - 1;

    return DBM->MPGData [DBM->MPGSize];
    }

void PrintStack (MZStack* DBM)
    {
    if (DBM->MPGSize < 0)
        {
        txMessageBox ("Алаховая трубка");
        }

    for (int i = 0; i < DBM->MPGSize; i ++)
        {
        printf ("DBM->MPGData [%d] = %d\n", i, DBM->MPGData [i]);
        }
    }

int Sum (MZStack* DBM)
    {
    int Sum  = PopStack (DBM) + PopStack (DBM);

    PushStack (DBM, Sum);

    return Sum;
    }

int Sub (MZStack* DBM)
    {
    int Sub  = PopStack (DBM) - PopStack (DBM);

    PushStack (DBM, Sub);

    return Sub;
    }

int Multy (MZStack* DBM)
    {
    int Multy  = PopStack (DBM) * PopStack (DBM);

    PushStack (DBM, Multy);

    return Multy;
    }

//MZ - Mishanya Zasranets
//MPG - Mishanya Poluchit V Glaz
//DBM - Davayte Bit Mishanyu



