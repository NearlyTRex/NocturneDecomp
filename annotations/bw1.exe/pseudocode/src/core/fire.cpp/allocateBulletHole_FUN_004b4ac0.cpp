// Name: core_fire.cpp_allocateBulletHole_FUN_004b4ac0
// Address: 004b4ac0
// Address Range: [[004b4ac0, 004b4b06]]
// Convention: __cdecl
// Signature: CBulletHole * __cdecl core_fire_cpp_allocateBulletHole_FUN_004b4ac0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBulletHole * __cdecl core_fire_cpp_allocateBulletHole_FUN_004b4ac0(void)

{
  int iVar1;
  
  iVar1 = _DAT_01c6eaa4 * 0x3c;
  _DAT_01c6eaa4 = _DAT_01c6eaa4 + 1;
  if (0xff < _DAT_01c6eaa4) {
    _DAT_01c6eaa4 = 0;
  }
  _DAT_01c6eaa0 = _DAT_01c6eaa0 + 1;
  if (0x100 < _DAT_01c6eaa0) {
    _DAT_01c6eaa0 = 0x100;
  }
  return (CBulletHole *)(&DAT_01c6eaa8 + iVar1);
}
