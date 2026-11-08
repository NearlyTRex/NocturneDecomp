// Name: FUN_0057e150
// Address: 0057e150
// Address Range: [[0057e150, 0057e174]]
// Convention: unknown
// Signature: int FUN_0057e150(int *param_1,int *param_2)

#include "nocturne.h"

int FUN_0057e150(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  *param_2 = param_1[4];
  param_1[1] = 0;
  (**(code **)(*param_1 + 0x14))(param_1);
  return iVar1;
}
