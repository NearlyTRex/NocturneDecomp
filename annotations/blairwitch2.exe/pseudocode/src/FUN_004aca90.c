// Name: FUN_004aca90
// Address: 004aca90
// Address Range: [[004aca90, 004acc1b]]
// Convention: unknown
// Signature: int FUN_004aca90(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004aca90(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float10 fVar7;
  uint uVar8;
  float fStack_50;
  uint auStack_4c [6];
  uint auStack_34 [6];
  ulonglong uStack_1c;
  
  bVar6 = 0;
  if (*(int *)(0x01D182F0 + 0x1008) != 0) {
    iVar3 = FUN_004ace60();
    *(uint *)(param_1 + 0x2b8) = *(uint *)(iVar3 + 0x2b8);
    FUN_004accb0();
  }
  FUN_004089d0();
  uVar8 = 0;
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1,0);
  puVar4 = auStack_4c;
  puVar5 = auStack_34;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  iVar3 = FUN_0041a840(CONCAT44(uVar8,auStack_34));
  if (iVar3 != 0) {
    FUN_0044fcc0(param_1 + 0x2e0,*(uint *)(param_1 + 0x2dc),0xffffffff);
    if (*(char *)(param_1 + 0x4e0) != '\0') {
      iVar1 = *(int *)(param_1 + 0x2b8);
      if (iVar1 < 0x4400c000) {
        fStack_50 = 201.0;
      }
      else if (iVar1 < 0x44e10000) {
        fStack_50 = 0.0;
        uStack_1c = __BITCAST_DOUBLE(CONCAT44(uStack_1c._4_4_,(uint)uStack_1c));
      }
      else if (iVar1 < 0x44ed8000) {
        fStack_50 = *(float *)(param_1 + 0x2b8) + _DAT_005d6ccd;
        uStack_1c = __BITCAST_DOUBLE(CONCAT44(uStack_1c._4_4_,(uint)uStack_1c));
      }
      else if (iVar1 < 0x44fa0000) {
        fStack_50 = 100.0;
        uStack_1c = __BITCAST_DOUBLE(CONCAT44(uStack_1c._4_4_,(uint)uStack_1c));
      }
      else {
        fVar2 = (*(float *)(param_1 + 0x2b8) + _DAT_005d6ca5) * (float)_DAT_005d6ca9;
        uStack_1c = (double)FUN_005b84d0((double)(fVar2 * _DAT_005d6cb1));
        fVar7 = (float10)fVar2 - (float10)uStack_1c * (float10)_DAT_005d6cb9;
        fStack_50 = (float)fVar7;
        if ((float10)_DAT_005d6cc1 < fVar7) {
          fStack_50 = _DAT_005d6cc5 - fStack_50;
        }
        fStack_50 = fStack_50 + _DAT_005d6cc9;
      }
      FUN_0044fcc0(param_1 + 0x468,fStack_50,0xffffffff);
      FUN_00408a10();
      return iVar3;
    }
  }
  FUN_00408a10();
  return iVar3;
}
