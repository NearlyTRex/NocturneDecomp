// Name: FUN_005827b0
// Address: 005827b0
// Address Range: [[005827b0, 00582860]]
// Convention: unknown
// Signature: undefined4 FUN_005827b0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005827b0(uint param_1)

{
  byte auStack_c0 [8];
  uint uStack_b8;
  int iStack_b0;
  int iStack_ac;
  uint uStack_88;
  int iStack_80;
  int iStack_7c;
  uint uStack_58;
  int iStack_50;
  int iStack_4c;
  uint uStack_28;
  int iStack_20;
  int iStack_1c;
  
  FUN_005bfb70(auStack_c0,0,0xc0);
  iStack_b0 = _DAT_01c4f008 << 0x10;
  iStack_ac = _DAT_01c4f00c << 0x10;
  iStack_80 = _DAT_01c4f010 << 0x10;
  iStack_4c = _DAT_01c4f014 << 0x10;
  uStack_b8 = _DAT_006258dc;
  uStack_88 = _DAT_006258dc;
  uStack_58 = _DAT_006258dc;
  uStack_28 = _DAT_006258dc;
  _DAT_01c4f020 = param_1;
  iStack_7c = iStack_ac;
  iStack_50 = iStack_80;
  iStack_20 = iStack_b0;
  iStack_1c = iStack_4c;
  FUN_00582340(auStack_c0,4,0x10);
  return 1;
}
