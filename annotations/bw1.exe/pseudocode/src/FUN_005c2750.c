// Name: FUN_005c2750
// Address: 005c2750
// Address Range: [[005c2750, 005c2782]]
// Convention: unknown
// Signature: int FUN_005c2750(char *param_1,int param_2)

#include "nocturne.h"

int FUN_005c2750(char *param_1,int param_2)

{
  *param_1 = (char)((longlong)param_2 / 10) + '0';
  param_1[2] = '\0';
  param_1[1] = (char)((longlong)param_2 % 10) + '0';
  return param_2 / 10;
}
