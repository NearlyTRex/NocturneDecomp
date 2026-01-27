// Name: core_fire.cpp_CFireEffect_FUN_004c8e40
// Address: 004c8e40
// Address Range: [[004c8e40, 004c8e9d]]
// Convention: __cdecl
// Signature: int core_fire.cpp_CFireEffect_FUN_004c8e40(CFireEffect * this_ptr)

#include "nocturne.h"

int __cdecl core_fire_cpp_CFireEffect_FUN_004c8e40(CFireEffect *this_ptr)

{
  char *pcVar1;
  CExplosion *pCVar2;
  
  pCVar2 = g_ExplosionActiveListHead;
  core_fire_cpp_CToss_create_FUN_004c3ee0(g_TossPool + (int)g_ExplosionActiveListHead);
  pcVar1 = g_ExplosionActiveListHead->unk;
  g_ExplosionActiveListHead = (CExplosion *)(pcVar1 + 1);
  if ((int)(pcVar1 + 1) < 0x14) {
    return (int)pCVar2;
  }
  g_ExplosionActiveListHead = (CExplosion *)0x0;
  return (int)pCVar2;
}
