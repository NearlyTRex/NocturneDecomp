// Name: core_demnfolk.cpp_CDemnfolk_isGrabbable_FUN_00458ec0
// Address: 00458ec0
// Address Range: [[00458ec0, 00458ef0]]
// Convention: __cdecl
// Signature: int __cdecl core_demnfolk_cpp_CDemnfolk_isGrabbable_FUN_00458ec0(CDemnfolk *this_ptr,CDemonActor *grabber)

#include "nocturne.h"

int __cdecl core_demnfolk_cpp_CDemnfolk_isGrabbable_FUN_00458ec0(CDemnfolk *this_ptr,CDemonActor *grabber)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c790(grabber,"?CTentacle" + 1);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = core_enemy_cpp_CEnemy_isGrabbable_FUN_0048a200(&this_ptr->base,grabber);
  return iVar1;
}
