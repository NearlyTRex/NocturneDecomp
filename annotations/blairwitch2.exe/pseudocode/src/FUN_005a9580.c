// Name: FUN_005a9580
// Address: 005a9580
// Address Range: [[005a9580, 005a976d]]
// Convention: unknown
// Signature: void FUN_005a9580(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a9580(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  uint auStackY_1030 [998];
  uint *puVar7;
  byte *puVar8;
  byte auStack_84 [4];
  uint uStack_80;
  int iStack_50;
  int iStack_4c;
  uint uStack_48;
  uint auStack_44 [5];
  uint auStack_30 [3];
  uint auStack_24 [5];
  float fStack_10;
  float fStack_c;
  
  bVar6 = 0;
  iVar4 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x17c))(param_1);
  fVar3 = _DAT_006006ac;
  if (iVar4 == 0) {
    return;
  }
  iVar4 = *(int *)(param_1 + 0x10a78);
  fVar1 = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
  fVar2 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
  if (SQRT(fVar2 * fVar2 + fVar1 * fVar1) <= _DAT_006006ac) {
    FUN_00423850(param_1,iVar4 + 0x20);
    iVar4 = param_1 + 0x2b4;
    FUN_00503620(iVar4,5,1);
    iVar5 = FUN_005035c0(iVar4);
    if ((((*(int *)(iVar5 + 0x24) != 5) ||
         (fStack_10 = (float)FUN_00503e60(iVar4), fStack_c = fStack_10, fStack_10 < _DAT_006006b0))
        || (_DAT_006006b4 < fStack_10)) || (*(int *)(param_1 + 0x113d0) != 0)) {
      if (*(int *)(param_1 + 0x1185c) < 3) {
        return;
      }
    }
    else {
      *(int *)(param_1 + 0x1185c) = *(int *)(param_1 + 0x1185c) + 1;
      FUN_00591530(&DAT_0265370c,*(int *)(param_1 + 0x11854) * 0x30 + param_1 + 0x1134);
      puVar7 = auStack_44 + 5;
      auStack_30[0] = uStack_48;
      auStack_44[(uint)bVar6 * -2 + 6] = auStack_44[(uint)bVar6 * -2];
      auStack_44[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
           auStack_44[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      FUN_00408d70(param_1,puVar7);
      puVar8 = auStack_84;
      auStack_24[0] = auStack_44[2];
      auStack_44[(uint)bVar6 * -2 + 9] = auStack_44[(uint)bVar6 * -2 + 3];
      auStack_44[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
           auStack_44[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
      FUN_004222d0(puVar8);
      uStack_80 = 0x41200000;
      iStack_50 = param_1;
      iStack_4c = param_1;
      FUN_00488110(param_1,auStack_44 + 8,0x3f800000,auStack_84);
      if (*(int *)(param_1 + 0x1185c) < 3) {
        return;
      }
    }
    *(uint *)(param_1 + 0x1185c) = 0;
    *(uint *)(param_1 + 0x11858) = 0;
    FUN_0059d7f0(param_1 + 0x10af8,"SleepComplete","Alert");
    FUN_0059d8e0(param_1 + 0x10af8,"Sleep");
    return;
  }
  *(uint *)(param_1 + 0x11398) = 0;
  *(float *)(param_1 + 0x11394) = fVar3;
  FUN_0059dcb0(param_1 + 0x10af8,0x3f000000);
  FUN_0059d8e0(param_1 + 0x10af8,"Chasing");
  return;
}
