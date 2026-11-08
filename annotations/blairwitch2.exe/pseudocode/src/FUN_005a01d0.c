// Name: FUN_005a01d0
// Address: 005a01d0
// Address Range: [[005a01d0, 005a023f]]
// Convention: unknown
// Signature: void FUN_005a01d0(int param_1,undefined4 *param_2)

#include "nocturne.h"

void FUN_005a01d0(int param_1,uint *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00503860(param_1 + 0x2b4);
  iVar3 = FUN_00502f10(iVar2,param_2 + 1,1);
  param_2[9] = iVar3;
  param_2[10] = *(uint *)(iVar2 + 0x1c8c + iVar3 * 0x118);
  fVar1 = *(float *)(iVar2 + 0x1c48 + param_2[9] * 0x118);
  *param_2 = 0;
  param_2[0xd] = 0;
  param_2[0xc] = (float)(int)param_2[10] / fVar1;
  return;
}
