// Name: FUN_0059ced0
// Address: 0059ced0
// Address Range: [[0059ced0, 0059cff8]]
// Convention: unknown
// Signature: void FUN_0059ced0(int param_1)

#include "nocturne.h"

void FUN_0059ced0(int param_1)

{
  float *pfVar1;
  int iVar2;
  byte bVar3;
  float afStackY_1030 [1006];
  byte auStack_70 [40];
  float fStack_48;
  float afStack_44 [4];
  uint uStack_34;
  float afStack_30 [4];
  float afStack_20 [5];
  
  bVar3 = 0;
  if ((uint *)(param_1 + 0x6e4) != (uint *)(param_1 + 0x30)) {
    *(uint *)(param_1 + 0x6e4) = *(uint *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x6e8) = *(uint *)(param_1 + 0x34);
    *(uint *)(param_1 + 0x6ec) = *(uint *)(param_1 + 0x38);
  }
  *(uint *)(param_1 + 0x6e4) = 0x3ec90fdb;
  FUN_00408d70(param_1,&DAT_0265370c);
  afStack_44[2] = afStack_20[2];
  afStack_44[(uint)bVar3 * -2 + 3] = afStack_20[(uint)bVar3 * -2 + 3];
  afStack_44[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
       afStack_20[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
  if ((float *)(param_1 + 0x6d8) != afStack_44 + 2) {
    *(float *)(param_1 + 0x6d8) = afStack_44[2];
    *(float *)(param_1 + 0x6dc) = afStack_44[3];
    *(uint *)(param_1 + 0x6e0) = uStack_34;
  }
  FUN_00449280(auStack_70,param_1 + 0x6e4);
  afStack_30[0] = -0.05;
  afStack_30[2] = 0.8;
  afStack_30[1] = -0.8;
  FUN_00449530(auStack_70,afStack_44 + 5);
  pfVar1 = (float *)(param_1 + 0x6d8);
  afStack_30[3] = fStack_48;
  afStack_20[(uint)bVar3 * -2] = afStack_44[(uint)bVar3 * -2];
  afStack_20[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       afStack_44[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  *pfVar1 = *pfVar1 + afStack_30[3];
  *(float *)(param_1 + 0x6dc) = *(float *)(param_1 + 0x6dc) + afStack_20[0];
  *(float *)(param_1 + 0x6e0) = *(float *)(param_1 + 0x6e0) + afStack_20[1];
  iVar2 = *(int *)(param_1 + 0x704);
  if ((float *)(iVar2 + 4) != pfVar1) {
    *(float *)(iVar2 + 4) = *pfVar1;
    *(uint *)(iVar2 + 8) = *(uint *)(param_1 + 0x6dc);
    *(uint *)(iVar2 + 0xc) = *(uint *)(param_1 + 0x6e0);
  }
  FUN_00449280(*(int *)(param_1 + 0x704) + 0x10,param_1 + 0x6e4);
  return;
}
