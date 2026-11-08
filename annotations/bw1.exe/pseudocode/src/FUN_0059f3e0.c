// Name: FUN_0059f3e0
// Address: 0059f3e0
// Address Range: [[0059f3e0, 0059f4e3]]
// Convention: unknown
// Signature: void FUN_0059f3e0(int *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0059f3e0(int *param_1)

{
  int iVar1;
  byte bVar2;
  float10 fVar3;
  float10 fVar4;
  ulonglong uVar5;
  float afStackY_1020 [1015];
  uint local_38;
  float local_34;
  float local_30;
  uint local_2c;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar2 = 0;
  if (_DAT_02c8ae6c == 0) {
    return;
  }
  FUN_00483ae0(DAT_00612560);
  local_38 = local_2c;
  (&stack0xffffffcc)[(uint)bVar2 * 0xfffffffe] =
       (float)*(uint *)(&stack0xffffffd8 + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffd0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffdc + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  local_20 = 0x40800;
  local_18 = 0;
  local_1c = FUN_004e8020(0x01D06940,0,0x40800);
  iVar1 = local_18;
  fVar3 = (float10)local_34 * (float10)_DAT_005f88a5;
  fVar4 = (float10)local_30 * (float10)_DAT_005f88a5;
  FUN_005c03a0();
  FUN_005c03a0();
  local_14 = (int)ROUND(fVar3);
  uVar5 = FUN_005c03a0();
  local_1c = (int)uVar5 + (int)((ulonglong)uVar5 >> 0x20);
  local_14 = (int)ROUND(fVar4);
  local_18 = (iVar1 + local_14) - *param_1;
  FUN_00483490(DAT_00612560,&stack0xffffffe0);
  FUN_004e7f80(0x01D06940);
  FUN_004834b0(DAT_00612560,&stack0xffffffc8);
  return;
}
