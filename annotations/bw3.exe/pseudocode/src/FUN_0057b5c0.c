// Name: FUN_0057b5c0
// Address: 0057b5c0
// Address Range: [[0057b5c0, 0057b7ef]]
// Convention: unknown
// Signature: void FUN_0057b5c0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0057b5c0(int param_1)

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
  FUN_00408b80();
  _DAT_01d20014 = 1;
  afStack_1060[0x3fd] = afStack_1060[0x403];
  afStack_1060[(uint)bVar3 * -2 + 0x3fe] = afStack_1060[(uint)bVar3 * -2 + 0x404];
  afStack_1060[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x3ff] =
       afStack_1060[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x405];
  _DAT_01d2001c = 1;
  pfVar2 = (float *)(param_1 + 0x34 + (uint)bVar3 * -8);
  afStack_1060[0x406] = *(float *)(param_1 + 0x30);
  afStack_1060[(uint)bVar3 * -2 + 0x407] = *pfVar2;
  afStack_1060[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x408] = pfVar2[(uint)bVar3 * -2 + 1];
  afStack_1060[0x406] = afStack_1060[0x406] + _DAT_005d78d3;
  FUN_0045b550();
  afStack_1060[0x40f] = 0.0;
  afStack_1060[0x410] = 0.0;
  afStack_1060[0x411] = 1.0;
  FUN_0045b800();
  afStack_1060[0x40c] = afStack_1060[0x409];
  afStack_1060[(uint)bVar3 * -2 + 0x40d] = afStack_1060[(uint)bVar3 * -2 + 0x40a];
  afStack_1060[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x40e] =
       afStack_1060[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x40b];
  afStack_1060[0x3fd] = afStack_1060[0x3fd] + afStack_1060[0x40c];
  afStack_1060[0x3fe] = afStack_1060[0x3fe] + afStack_1060[0x40d];
  afStack_1060[0x3ff] = afStack_1060[0x3ff] + afStack_1060[0x40e];
  if (&stack0x00000000 != (byte *)0x1d1e3d0) {
    _DAT_01d1e364 = afStack_1060[0x3fd];
    _DAT_01d1e368 = afStack_1060[0x3fe];
    _DAT_01d1e36c = afStack_1060[0x3ff];
  }
  FUN_0045b550();
  _DAT_01d1e4a0 = 0x42000000;
  _DAT_01d1e398 = 0x42000000;
  _DAT_01d20030 = 1;
  fStack_14 = 1.0;
  (**(code **)(*(int *)(param_1 + 0x154) + 0x94))();
  iVar1 = FUN_0040c840();
  if ((iVar1 != 0) &&
     (afStack_1060[0x412] = *(float *)(iVar1 + 0x206e8), afStack_1060[0x412] < _DAT_005d78d7)) {
    fStack_14 = afStack_1060[0x412] * _DAT_005d78db;
  }
  FUN_0045fab0();
  if (*(int *)(0x01D2130C + 0x26c) == 0) {
    return;
  }
  FUN_0045aae0();
  _DAT_02d0c190 = 0x8000;
  DAT_02d0c170 = 0x20;
  FUN_0045ab30();
  _DAT_02d0c174 = 0;
  FUN_005372f0();
  return;
}
