// Name: FUN_0057b860
// Address: 0057b860
// Address Range: [[0057b860, 0057b963]]
// Convention: unknown
// Signature: void FUN_0057b860(int *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0057b860(int *param_1)

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
  if (_DAT_02653650 == 0) {
    return;
  }
  FUN_0046b5e0(DAT_0060b280);
  local_38 = local_2c;
  (&stack0xffffffcc)[(uint)bVar2 * 0xfffffffe] =
       (float)*(uint *)(&stack0xffffffd8 + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffd0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffdc + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  local_20 = 0x40800;
  local_18 = 0;
  local_1c = FUN_004cb7a0(0x01CEDD88,0,0x40800);
  iVar1 = local_18;
  fVar3 = (float10)local_34 * (float10)_DAT_005ed549;
  fVar4 = (float10)local_30 * (float10)_DAT_005ed549;
  FUN_005b7ff0();
  FUN_005b7ff0();
  local_14 = (int)ROUND(fVar3);
  uVar5 = FUN_005b7ff0();
  local_1c = (int)uVar5 + (int)((ulonglong)uVar5 >> 0x20);
  local_14 = (int)ROUND(fVar4);
  local_18 = (iVar1 + local_14) - *param_1;
  FUN_0046af90(DAT_0060b280,&stack0xffffffe0);
  FUN_004cb700(0x01CEDD88);
  FUN_0046afb0(DAT_0060b280,&stack0xffffffc8);
  return;
}
