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
  
  iVar2 = g_BulletHoleAllocIndex + 1;
  pCVar1 = g_BulletHolePool + g_BulletHoleAllocIndex;
  if (0xff < iVar2) {
    iVar2 = 0;
  }
  g_BulletHoleActiveCount = g_BulletHoleActiveCount + 1;
  if (0x100 < g_BulletHoleActiveCount) {
    g_BulletHoleActiveCount = 0x100;
  }
  g_BulletHoleAllocIndex = iVar2;
  return pCVar1;
}
