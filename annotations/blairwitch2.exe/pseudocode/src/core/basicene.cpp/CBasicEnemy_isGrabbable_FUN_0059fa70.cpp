// Name: core_basicene.cpp_CBasicEnemy_isGrabbable_FUN_0059fa70
// Address: 0059fa70
// Address Range: [[0059fa70, 0059fadc]]
// Convention: __cdecl
// Signature: int __cdecl core_basicene_cpp_CBasicEnemy_isGrabbable_FUN_0059fa70(CBasicEnemy *this_ptr,CDemonActor *grabber)

#include "nocturne.h"

int __cdecl core_basicene_cpp_CBasicEnemy_isGrabbable_FUN_0059fa70(CBasicEnemy *this_ptr,CDemonActor *grabber)

{
  uint uVar1;
  int iVar2;
  
  if (grabber == (CDemonActor *)this_ptr) {
    return (uint)grabber ^ (uint)this_ptr;
  }
  iVar2 = core_actor_cpp_castToClassHash_FUN_0040c8f0(grabber,g_CBasicEnemyClassInfo.name_hash);
  if (iVar2 != 0) {
    uVar1 = *(uint *)(iVar2 + 0x11344);
    if (uVar1 == 0) {
      return 0;
    }
    if (uVar1 < 2) {
      iVar2 = core_actor_cpp_castToClassHash_FUN_0040c8f0(this_ptr,g_CDogClassInfo.name_hash);
      if (iVar2 != 0) {
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
