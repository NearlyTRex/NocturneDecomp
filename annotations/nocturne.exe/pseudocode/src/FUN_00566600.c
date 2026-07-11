// Name: FUN_00566600
// Address: 00566600
// Address Range: [[00566600, 00566632]]
// Convention: unknown
// Signature: int FUN_00566600(char *param_1,int param_2)

#include "nocturne.h"

int FUN_00566600(char *param_1,int param_2)

{
  *param_1 = (char)((longlong)param_2 / 10) + '0';
  param_1[2] = '\0';
  param_1[1] = (char)((longlong)param_2 % 10) + '0';
  return param_2 / 10;
}
