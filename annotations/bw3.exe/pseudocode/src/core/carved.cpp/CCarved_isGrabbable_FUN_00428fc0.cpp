// Name: core_carved.cpp_CCarved_isGrabbable_FUN_00428fc0
// Address: 00428fc0
// Address Range: [[00428fc0, 00428ff0]]
// Convention: __cdecl
// Signature: int __cdecl core_carved_cpp_CCarved_isGrabbable_FUN_00428fc0(CCarved *this_ptr,CDemonActor *grabber)

#include "nocturne.h"

int __cdecl core_carved_cpp_CCarved_isGrabbable_FUN_00428fc0(CCarved *this_ptr,CDemonActor *grabber)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c790(grabber,"?CTentacle" + 1);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = core_enemy_cpp_CEnemy_isGrabbable_FUN_0048a200(&this_ptr->base,grabber);
  return iVar1;
}
