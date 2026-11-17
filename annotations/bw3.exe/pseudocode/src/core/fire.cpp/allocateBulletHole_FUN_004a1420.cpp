// Name: core_fire.cpp_allocateBulletHole_FUN_004a1420
// Address: 004a1420
// Address Range: [[004a1420, 004a145b]]
// Convention: __cdecl
// Signature: CBulletHole * __cdecl core_fire_cpp_allocateBulletHole_FUN_004a1420(void)

#include "nocturne.h"

CBulletHole * __cdecl core_fire_cpp_allocateBulletHole_FUN_004a1420(void)

{
  CBulletHole *pCVar1;
  int iVar2;
  
  iVar2 = g_INT_01c8aea4 + 1;
  pCVar1 = g_CBulletHole_ARRAY_01c8aea8 + g_INT_01c8aea4;
  if (0xff < iVar2) {
    iVar2 = 0;
  }
  g_INT_01c8aea0 = g_INT_01c8aea0 + 1;
  if (0x100 < g_INT_01c8aea0) {
    g_INT_01c8aea0 = 0x100;
  }
  g_INT_01c8aea4 = iVar2;
  return pCVar1;
}
