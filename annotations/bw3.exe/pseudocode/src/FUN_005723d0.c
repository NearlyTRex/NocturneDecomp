// Name: FUN_005723d0
// Address: 005723d0
// Address Range: [[005723d0, 005724d3]]
// Convention: unknown
// Signature: void FUN_005723d0(int *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005723d0(int *param_1)

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
  if (_DAT_02cfd8bc == 0) {
    return;
  }
  FUN_0046d1c0(DAT_005f2afc);
  local_38 = local_2c;
  (&stack0xffffffcc)[(uint)bVar2 * 0xfffffffe] =
       (float)*(uint *)(&stack0xffffffd8 + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffd0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffdc + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  local_20 = 0x40800;
  local_18 = 0;
  local_1c = FUN_004d09b0(0x01D5B8A8,0,0x40800);
  iVar1 = local_18;
  fVar3 = (float10)local_34 * (float10)_DAT_005d6e14;
  fVar4 = (float10)local_30 * (float10)_DAT_005d6e14;
  FUN_005a3120();
  FUN_005a3120();
  local_14 = (int)ROUND(fVar3);
  uVar5 = FUN_005a3120();
  local_1c = (int)uVar5 + (int)((ulonglong)uVar5 >> 0x20);
  local_14 = (int)ROUND(fVar4);
  local_18 = (iVar1 + local_14) - *param_1;
  FUN_0046cb70(DAT_005f2afc,&stack0xffffffe0);
  FUN_004d0910(0x01D5B8A8);
  FUN_0046cb90(DAT_005f2afc,&stack0xffffffc8);
  return;
}
