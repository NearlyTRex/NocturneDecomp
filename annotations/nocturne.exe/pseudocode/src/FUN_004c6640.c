// Name: FUN_004c6640
// Address: 004c6640
// Address Range: [[004c6640, 004c66ef]]
// Convention: unknown
// Signature: undefined4 FUN_004c6640(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004c6640(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  
  iVar3 = param_1 + 0x150;
  iVar1 = FUN_00454530(iVar3);
  iVar1 = *(int *)(iVar1 + 0x10c);
  iVar2 = FUN_00454530(iVar3);
  local_14 = *(int *)(iVar2 + 0x100) + -1;
  fVar5 = (float10)local_14 * (float10)*(float *)(param_1 + 0x2d4);
  FUN_00563a30(iVar3);
  local_18 = (int)ROUND(fVar5);
  iVar3 = FUN_00454530();
  piVar4 = (int *)((*(int *)(param_1 + 0x40c) + *(int *)(iVar3 + 0x104) * local_18) * 0xc + iVar1);
  local_24 = (float)*piVar4 * _DAT_0059fc28;
  local_20 = (float)piVar4[1] * _DAT_0059fc28;
  local_1c = (float)piVar4[2] * _DAT_0059fc28;
  FUN_0040a240(param_1,param_2,&local_24);
  return param_2;
}
