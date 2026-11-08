// Name: FUN_005a1da0
// Address: 005a1da0
// Address Range: [[005a1da0, 005a1dc4]]
// Convention: unknown
// Signature: int FUN_005a1da0(int *param_1,int *param_2)

#include "nocturne.h"

int FUN_005a1da0(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  *param_2 = param_1[4];
  param_1[1] = 0;
  (**(code **)(*param_1 + 0x14))(param_1);
  return iVar1;
}
