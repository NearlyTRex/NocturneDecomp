// Name: core_fire.cpp_allocateBulletHole_FUN_0049c120
// Address: 0049c120
// Address Range: [[0049c120, 0049c166]]
// Convention: __cdecl
// Signature: undefined * __cdecl core_fire_cpp_allocateBulletHole_FUN_0049c120(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * __cdecl core_fire_cpp_allocateBulletHole_FUN_0049c120(void)

{
  int iVar1;
  
  iVar1 = _DAT_01c558e4 * 0x3c;
  _DAT_01c558e4 = _DAT_01c558e4 + 1;
  if (0xff < _DAT_01c558e4) {
    _DAT_01c558e4 = 0;
  }
  _DAT_01c558e0 = _DAT_01c558e0 + 1;
  if (0x100 < _DAT_01c558e0) {
    _DAT_01c558e0 = 0x100;
  }
  return &DAT_01c558e8 + iVar1;
}
