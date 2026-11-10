// Name: core_hero.cpp_CHero_isGrabbable_FUN_004ce9d0
// Address: 004ce9d0
// Address Range: [[004ce9d0, 004ce9ff]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_isGrabbable_FUN_004ce9d0(CHero *this_ptr,CDemonActor *grabber)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_isGrabbable_FUN_004ce9d0(CHero *this_ptr,CDemonActor *grabber)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0(grabber,g_CBasicEnemyClassInfo.name_hash);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x11344) != 0)) && (*(int *)(iVar1 + 0x11344) == 2)) {
    return 0;
  }
  return 1;
}
