// Name: FUN_00409f20
// Address: 00409f20
// Address Range: [[00409f20, 0040a046]]
// Convention: unknown
// Signature: uint FUN_00409f20(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00409f20(int param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_1010 [1001];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar5 = 0;
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
  puVar3 = (uint *)&stack0xffffffc0;
  puVar4 = &stack0xffffffa8;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  fStack_28 = fStack_4c - fStack_58;
  fStack_24 = fStack_48 - fStack_54;
  fStack_20 = fStack_44 - fStack_50;
  fStack_1c = fStack_4c - fStack_58;
  *(uint *)((int)&stack0xffffffe8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffdc + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffffec + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffe0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  uVar2 = 0;
  if ((((fStack_1c < 1.0) && (fStack_18 < 1.0)) && ((float)_DAT_005ca66e < fStack_14)) &&
     (((fStack_14 < (float)_DAT_005ca676 && (fStack_1c < fStack_14)) && (fStack_18 < fStack_14)))) {
    uVar2 = 2;
  }
  if (((fStack_1c < 1.0) && (fStack_18 < 1.0)) &&
     ((1.0 < fStack_14 &&
      (((fStack_14 < (float)_DAT_005ca66e && (fStack_1c < fStack_14)) && (fStack_18 < fStack_14)))))
     ) {
    uVar2 = uVar2 | 4;
  }
  return uVar2;
}
