// Name: FUN_005a5640
// Address: 005a5640
// Address Range: [[005a5640, 005a5672]]
// Convention: unknown
// Signature: int FUN_005a5640(char *param_1,int param_2)

#include "nocturne.h"

int FUN_005a5640(char *param_1,int param_2)

{
  *param_1 = (char)((longlong)param_2 / 10) + '0';
  param_1[2] = '\0';
  param_1[1] = (char)((longlong)param_2 % 10) + '0';
  return param_2 / 10;
}
