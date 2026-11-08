// Name: FUN_005adb20
// Address: 005adb20
// Address Range: [[005adb20, 005add4f]]
// Convention: unknown
// Signature: void FUN_005adb20(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005adb20(int param_1)

{
  int iVar1;
  float *pfVar2;
  byte bVar3;
  float afStack_1060 [1043];
  float fStack_14;
  
  bVar3 = 0;
  (**(code **)(*(int *)(param_1 + 0x154) + 0xe0))();
  afStack_1060[(uint)bVar3 * -2 + 0x3fb] = afStack_1060[(uint)bVar3 * -2 + 0x401];
  afStack_1060[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x3fc] =
       afStack_1060[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x402];
  FUN_00408b40();
  _DAT_01cce098 = 1;
  afStack_1060[0x3fd] = afStack_1060[0x403];
  afStack_1060[(uint)bVar3 * -2 + 0x3fe] = afStack_1060[(uint)bVar3 * -2 + 0x404];
  afStack_1060[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x3ff] =
       afStack_1060[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x405];
  _DAT_01cce0a0 = 1;
  pfVar2 = (float *)(param_1 + 0x34 + (uint)bVar3 * -8);
  afStack_1060[0x406] = *(float *)(param_1 + 0x30);
  afStack_1060[(uint)bVar3 * -2 + 0x407] = *pfVar2;
  afStack_1060[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x408] = pfVar2[(uint)bVar3 * -2 + 1];
  afStack_1060[0x406] = afStack_1060[0x406] + _DAT_005f990a;
  FUN_0045f3e0();
  afStack_1060[0x40f] = 0.0;
  afStack_1060[0x410] = 0.0;
  afStack_1060[0x411] = 1.0;
  FUN_0045f690();
  afStack_1060[0x40c] = afStack_1060[0x409];
  afStack_1060[(uint)bVar3 * -2 + 0x40d] = afStack_1060[(uint)bVar3 * -2 + 0x40a];
  afStack_1060[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x40e] =
       afStack_1060[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x40b];
  afStack_1060[0x3fd] = afStack_1060[0x3fd] + afStack_1060[0x40c];
  afStack_1060[0x3fe] = afStack_1060[0x3fe] + afStack_1060[0x40d];
  afStack_1060[0x3ff] = afStack_1060[0x3ff] + afStack_1060[0x40e];
  if (&stack0x00000000 != (byte *)0x1ccc454) {
    _DAT_01ccc3e8 = afStack_1060[0x3fd];
    _DAT_01ccc3ec = afStack_1060[0x3fe];
    _DAT_01ccc3f0 = afStack_1060[0x3ff];
  }
  FUN_0045f3e0();
  _DAT_01ccc524 = 0x42000000;
  _DAT_01ccc41c = 0x42000000;
  _DAT_01cce0b4 = 1;
  fStack_14 = 1.0;
  (**(code **)(*(int *)(param_1 + 0x154) + 0x94))();
  iVar1 = FUN_0040c600();
  if ((iVar1 != 0) &&
     (afStack_1060[0x412] = *(float *)(iVar1 + 0x1fae8), afStack_1060[0x412] < _DAT_005f990e)) {
    fStack_14 = afStack_1060[0x412] * _DAT_005f9912;
  }
  FUN_00465da0();
  if (*(int *)(0x01CCF390 + 0x264) == 0) {
    return;
  }
  FUN_0045e970();
  _DAT_02c997b0 = 0x8000;
  DAT_02c99790 = 0x20;
  FUN_0045e9c0();
  _DAT_02c99794 = 0;
  FUN_00551960();
  return;
}
