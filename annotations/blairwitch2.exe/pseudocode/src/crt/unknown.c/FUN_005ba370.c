// Name: crt_unknown.c_FUN_005ba370
// Address: 005ba370
// Address Range: [[005ba370, 005ba3a2]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005ba370(char *param_1,int param_2)

#include "nocturne.h"

int FUN_005ba370(char *param_1,int param_2)

{
  *param_1 = (char)((longlong)param_2 / 10) + '0';
  param_1[2] = '\0';
  param_1[1] = (char)((longlong)param_2 % 10) + '0';
  return param_2 / 10;
}
