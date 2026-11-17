// Name: core_fire.cpp_allocateBulletHole_FUN_0049c120
// Address: 0049c120
// Address Range: [[0049c120, 0049c166]]
// Convention: __cdecl
// Signature: CBulletHole * __cdecl core_fire_cpp_allocateBulletHole_FUN_0049c120(void)

#include "nocturne.h"

CBulletHole * __cdecl core_fire_cpp_allocateBulletHole_FUN_0049c120(void)

{
  CBulletHole *pCVar1;
  int iVar2;
  
  iVar2 = g_INT_01c558e4 + 1;
  pCVar1 = g_CBulletHole_ARRAY_01c558e8 + g_INT_01c558e4;
  if (0xff < iVar2) {
    iVar2 = 0;
  }
  g_INT_01c558e0 = g_INT_01c558e0 + 1;
  if (0x100 < g_INT_01c558e0) {
    g_INT_01c558e0 = 0x100;
  }
  g_INT_01c558e4 = iVar2;
  return pCVar1;
}
