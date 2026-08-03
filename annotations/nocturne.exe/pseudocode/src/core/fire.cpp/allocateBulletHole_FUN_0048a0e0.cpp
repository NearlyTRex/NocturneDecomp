// Name: core_fire.cpp_allocateBulletHole_FUN_0048a0e0
// Address: 0048a0e0
// Address Range: [[0048a0e0, 0048a126]]
// Convention: __cdecl
// Signature: CBulletHole * __cdecl core_fire_cpp_allocateBulletHole_FUN_0048a0e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBulletHole * __cdecl core_fire_cpp_allocateBulletHole_FUN_0048a0e0(void)

{
  CBulletHole *pCVar1;
  int iVar2;
  
  iVar2 = _DAT_01c20144 + 1;
  pCVar1 = g_CBulletHole_ARRAY_01c20148 + _DAT_01c20144;
  if (0xff < iVar2) {
    iVar2 = 0;
  }
  _DAT_01c20140 = _DAT_01c20140 + 1;
  if (0x100 < _DAT_01c20140) {
    _DAT_01c20140 = 0x100;
  }
  _DAT_01c20144 = iVar2;
  return pCVar1;
}
