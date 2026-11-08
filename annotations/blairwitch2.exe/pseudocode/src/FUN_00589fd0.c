// Name: FUN_00589fd0
// Address: 00589fd0
// Address Range: [[00589fd0, 0058a1ff]]
// Convention: unknown
// Signature: void FUN_00589fd0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00589fd0(int param_1)

{
  int iVar1;
  float *pfVar2;
  byte bVar3;
  float afStack_1060 [1043];
  float fStack_14;
  
  bVar3 = 0;
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0xe8))();
  afStack_1060[(uint)bVar3 * -2 + 0x3fb] = afStack_1060[(uint)bVar3 * -2 + 0x401];
  afStack_1060[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x3fc] =
       afStack_1060[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x402];
  FUN_00408d70();
  _DAT_01cb5604 = 1;
  afStack_1060[0x3fd] = afStack_1060[0x403];
  afStack_1060[(uint)bVar3 * -2 + 0x3fe] = afStack_1060[(uint)bVar3 * -2 + 0x404];
  afStack_1060[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x3ff] =
       afStack_1060[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x405];
  _DAT_01cb560c = 1;
  pfVar2 = (float *)(param_1 + 0x34 + (uint)bVar3 * -8);
  afStack_1060[0x406] = *(float *)(param_1 + 0x30);
  afStack_1060[(uint)bVar3 * -2 + 0x407] = *pfVar2;
  afStack_1060[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x408] = pfVar2[(uint)bVar3 * -2 + 1];
  afStack_1060[0x406] = afStack_1060[0x406] + _DAT_005ee532;
  FUN_00449280();
  afStack_1060[0x40f] = 0.0;
  afStack_1060[0x410] = 0.0;
  afStack_1060[0x411] = 1.0;
  FUN_00449530();
  afStack_1060[0x40c] = afStack_1060[0x409];
  afStack_1060[(uint)bVar3 * -2 + 0x40d] = afStack_1060[(uint)bVar3 * -2 + 0x40a];
  afStack_1060[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x40e] =
       afStack_1060[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x40b];
  afStack_1060[0x3fd] = afStack_1060[0x3fd] + afStack_1060[0x40c];
  afStack_1060[0x3fe] = afStack_1060[0x3fe] + afStack_1060[0x40d];
  afStack_1060[0x3ff] = afStack_1060[0x3ff] + afStack_1060[0x40e];
  if (&stack0x00000000 != (byte *)0x1cb39c0) {
    _DAT_01cb3954 = afStack_1060[0x3fd];
    _DAT_01cb3958 = afStack_1060[0x3fe];
    _DAT_01cb395c = afStack_1060[0x3ff];
  }
  FUN_00449280();
  _DAT_01cb3a90 = 0x42000000;
  _DAT_01cb3988 = 0x42000000;
  _DAT_01cb5620 = 1;
  fStack_14 = 1.0;
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x9c))();
  iVar1 = FUN_0040c8f0();
  if ((iVar1 != 0) &&
     (afStack_1060[0x412] = *(float *)(iVar1 + 0x2437c), afStack_1060[0x412] < _DAT_005ee536)) {
    fStack_14 = afStack_1060[0x412] * _DAT_005ee53a;
  }
  FUN_0044d570();
  if (*(int *)(0x01CB6900 + 0x264) == 0) {
    return;
  }
  FUN_00448810();
  _DAT_02661f78 = 0x8000;
  DAT_02661f58 = 0x20;
  FUN_00448860();
  _DAT_02661f5c = 0;
  FUN_005306b0();
  return;
}
