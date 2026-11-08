// Name: FUN_004c5a40
// Address: 004c5a40
// Address Range: [[004c5a40, 004c5bcb]]
// Convention: unknown
// Signature: int FUN_004c5a40(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004c5a40(int param_1)

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
  if (*(int *)(0x01D2C900 + 0x1008) != 0) {
    iVar3 = FUN_004c5e10();
    *(uint *)(param_1 + 0x15c) = *(uint *)(iVar3 + 0x15c);
    FUN_004c5c60();
  }
  FUN_004087b0();
  uVar8 = 0;
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
  puVar4 = auStack_4c;
  puVar5 = auStack_34;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  iVar3 = FUN_004207b0(CONCAT44(uVar8,auStack_34));
  if (iVar3 != 0) {
    FUN_004688a0(param_1 + 0x184,*(uint *)(param_1 + 0x180),0xffffffff);
    if (*(char *)(param_1 + 900) != '\0') {
      iVar1 = *(int *)(param_1 + 0x15c);
      if (iVar1 < 0x4400c000) {
        fStack_50 = 201.0;
      }
      else if (iVar1 < 0x44e10000) {
        fStack_50 = 0.0;
        uStack_1c = __BITCAST_DOUBLE(CONCAT44(uStack_1c._4_4_,(uint)uStack_1c));
      }
      else if (iVar1 < 0x44ed8000) {
        fStack_50 = *(float *)(param_1 + 0x15c) + _DAT_005e0d46;
        uStack_1c = __BITCAST_DOUBLE(CONCAT44(uStack_1c._4_4_,(uint)uStack_1c));
      }
      else if (iVar1 < 0x44fa0000) {
        fStack_50 = 100.0;
        uStack_1c = __BITCAST_DOUBLE(CONCAT44(uStack_1c._4_4_,(uint)uStack_1c));
      }
      else {
        fVar2 = (*(float *)(param_1 + 0x15c) + _DAT_005e0d1e) * (float)_DAT_005e0d22;
        uStack_1c = (double)FUN_005c0880((double)(fVar2 * _DAT_005e0d2a));
        fVar7 = (float10)fVar2 - (float10)uStack_1c * (float10)_DAT_005e0d32;
        fStack_50 = (float)fVar7;
        if ((float10)_DAT_005e0d3a < fVar7) {
          fStack_50 = _DAT_005e0d3e - fStack_50;
        }
        fStack_50 = fStack_50 + _DAT_005e0d42;
      }
      FUN_004688a0(param_1 + 0x30c,fStack_50,0xffffffff);
      FUN_004087f0();
      return iVar3;
    }
  }
  FUN_004087f0();
  return iVar3;
}
