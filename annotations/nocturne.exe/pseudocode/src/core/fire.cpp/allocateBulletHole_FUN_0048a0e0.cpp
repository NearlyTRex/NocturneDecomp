// Name: core_fire.cpp_allocateBulletHole_FUN_0048a0e0
// Address: 0048a0e0
// Address Range: [[0048a0e0, 0048a126]]
// Convention: __cdecl
// Signature: undefined * __cdecl core_fire_cpp_allocateBulletHole_FUN_0048a0e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * __cdecl core_fire_cpp_allocateBulletHole_FUN_0048a0e0(void)

{
  int iVar1;
  
  iVar1 = _DAT_01c20144 * 0x3c;
  _DAT_01c20144 = _DAT_01c20144 + 1;
  if (0xff < _DAT_01c20144) {
    _DAT_01c20144 = 0;
  }
  _DAT_01c20140 = _DAT_01c20140 + 1;
  if (0x100 < _DAT_01c20140) {
    _DAT_01c20140 = 0x100;
  }
  return &DAT_01c20148 + iVar1;
}
