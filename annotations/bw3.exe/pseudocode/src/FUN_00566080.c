// Name: FUN_00566080
// Address: 00566080
// Address Range: [[00566080, 00566130]]
// Convention: unknown
// Signature: undefined4 FUN_00566080(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00566080(uint param_1)

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
  
  FUN_005a28f0(auStack_c0,0,0xc0);
  iStack_b0 = _DAT_01c6b5a8 << 0x10;
  iStack_ac = _DAT_01c6b5ac << 0x10;
  iStack_80 = _DAT_01c6b5b0 << 0x10;
  iStack_4c = _DAT_01c6b5b4 << 0x10;
  uStack_b8 = _DAT_0060683c;
  uStack_88 = _DAT_0060683c;
  uStack_58 = _DAT_0060683c;
  uStack_28 = _DAT_0060683c;
  _DAT_01c6b5c0 = param_1;
  iStack_7c = iStack_ac;
  iStack_50 = iStack_80;
  iStack_20 = iStack_b0;
  iStack_1c = iStack_4c;
  FUN_00565c10(auStack_c0,4,0x10);
  return 1;
}
