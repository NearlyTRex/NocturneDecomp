// Name: core_enemy.cpp_CEnemy_isGrabbable_FUN_0048a200
// Address: 0048a200
// Address Range: [[0048a200, 0048a21c]]
// Convention: __cdecl
// Signature: int __cdecl core_enemy_cpp_CEnemy_isGrabbable_FUN_0048a200(CEnemy *this_ptr,CDemonActor *grabber)

#include "nocturne.h"

int __cdecl core_enemy_cpp_CEnemy_isGrabbable_FUN_0048a200(CEnemy *this_ptr,CDemonActor *grabber)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c790(grabber,"CBugs");
  return (uint)(iVar1 != 0);
}
