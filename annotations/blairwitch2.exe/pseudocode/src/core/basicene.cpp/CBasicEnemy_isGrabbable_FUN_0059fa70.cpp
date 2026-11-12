// Name: core_basicene.cpp_CBasicEnemy_isGrabbable_FUN_0059fa70
// Address: 0059fa70
// Address Range: [[0059fa70, 0059fadc]]
// Convention: __cdecl
// Signature: int __cdecl core_basicene_cpp_CBasicEnemy_isGrabbable_FUN_0059fa70(CBasicEnemy *this_ptr,CDemonActor *grabber)

#include "nocturne.h"

int __cdecl core_basicene_cpp_CBasicEnemy_isGrabbable_FUN_0059fa70(CBasicEnemy *this_ptr,CDemonActor *grabber)

{
  uint uVar1;
  CDemonActor *pCVar2;
  
  if ((CBasicEnemy *)grabber == this_ptr) {
    return (uint)grabber ^ (uint)this_ptr;
  }
  pCVar2 = (CBasicEnemy *)core_actor_cpp_castToClassHash_FUN_0040c8f0(grabber,g_CBasicEnemyClassInfo.name_hash);
  if (pCVar2 != (CDemonActor *)0x0) {
    uVar1 = *(uint *)&pCVar2[0x65].particle_systems[3].field_0x20;
    if (uVar1 == 0) {
      return 0;
    }
    if (uVar1 < 2) {
      pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                         ((CDemonActor *)this_ptr,g_CDogClassInfo.name_hash);
      if (pCVar2 != (CDemonActor *)0x0) {
        return 0;
      }
    }
    else if (uVar1 != 2) {
      return 1;
    }
    return 1;
  }
  return 1;
}
