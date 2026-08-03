// Name: core_bodypart.cpp_CBodyPart_getAllowedMeleeAttackTypes_FUN_00417ef0
// Address: 00417ef0
// Address Range: [[00417ef0, 00417f09]]
// Convention: __cdecl
// Signature: int __cdecl core_bodypart_cpp_CBodyPart_getAllowedMeleeAttackTypes_FUN_00417ef0(CBodyPart *this_ptr)

#include "nocturne.h"

int __cdecl core_bodypart_cpp_CBodyPart_getAllowedMeleeAttackTypes_FUN_00417ef0(CBodyPart *this_ptr)

{
  int iVar1;
  
  if (this_ptr->render_in_background != 0) {
    return 0;
  }
  iVar1 = core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040b200(&this_ptr->base);
  return iVar1;
}
