// Name: core_fire.cpp_allocateBulletHole_FUN_004b4ac0
// Address: 004b4ac0
// Address Range: [[004b4ac0, 004b4b06]]
// Convention: __cdecl
// Signature: CBulletHole * __cdecl core_fire_cpp_allocateBulletHole_FUN_004b4ac0(void)

#include "nocturne.h"

CBulletHole * __cdecl core_fire_cpp_allocateBulletHole_FUN_004b4ac0(void)

{
  CBulletHole *pCVar1;
  int iVar2;
  
  iVar2 = g_INT_01c6eaa4 + 1;
  pCVar1 = g_CBulletHole_ARRAY_01c6eaa8 + g_INT_01c6eaa4;
  if (0xff < iVar2) {
    iVar2 = 0;
  }
  g_INT_01c6eaa0 = g_INT_01c6eaa0 + 1;
  if (0x100 < g_INT_01c6eaa0) {
    g_INT_01c6eaa0 = 0x100;
  }
  g_INT_01c6eaa4 = iVar2;
  return pCVar1;
}
