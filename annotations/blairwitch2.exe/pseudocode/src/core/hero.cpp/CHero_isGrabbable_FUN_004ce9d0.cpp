// Name: core_hero.cpp_CHero_isGrabbable_FUN_004ce9d0
// Address: 004ce9d0
// Address Range: [[004ce9d0, 004ce9ff]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_isGrabbable_FUN_004ce9d0(CHero *this_ptr,CDemonActor *grabber)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_isGrabbable_FUN_004ce9d0(CHero *this_ptr,CDemonActor *grabber)

{
  int iVar1;
  CDemonActor *pCVar2;
  
  pCVar2 = (CBasicEnemy *)core_actor_cpp_castToClassHash_FUN_0040c8f0(grabber,g_CBasicEnemyClassInfo.name_hash);
  if (((pCVar2 != (CDemonActor *)0x0) &&
      (iVar1 = *(int *)&pCVar2[0x65].particle_systems[3].field_0x20, iVar1 != 0)) && (iVar1 == 2)) {
    return 0;
  }
  return 1;
}
