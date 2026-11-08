// Name: FUN_004e5570
// Address: 004e5570
// Address Range: [[004e5570, 004e55fb]]
// Convention: unknown
// Signature: void FUN_004e5570(int param_1,undefined4 *param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e5570(int param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0040cc60(0,3);
  uVar2 = 0x01E82168;
  *(uint *)(param_1 + 0x14) = uVar1;
  *(uint *)(param_1 + 4) = *param_2;
  uVar2 = FUN_005562c0(uVar2,param_2,0);
  *(uint *)(param_1 + 8) = uVar2;
  *(uint *)(param_1 + 0xc) = param_2[2];
  *(uint *)(param_1 + 0x18) = 0;
  *(float *)(param_1 + 8) = *(float *)(param_1 + 8) + _DAT_005e40cd;
  *(int *)(param_1 + 0x1c) = (int)ROUND(*(float *)(param_1 + 4) * _DAT_006016a8);
  *(int *)(param_1 + 0x20) = (int)ROUND(*(float *)(param_1 + 8) * _DAT_006016a8);
  *(int *)(param_1 + 0x24) = (int)ROUND(*(float *)(param_1 + 0xc) * _DAT_006016a8);
  *(uint *)(param_1 + 0x10) = param_3;
  return;
}
