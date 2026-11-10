// Name: core_bodypart.cpp_CBodyPart_getAllowedMeleeAttackTypes_FUN_00417ab0
// Address: 00417ab0
// Address Range: [[00417ab0, 00417ac9]]
// Convention: __cdecl
// Signature: int __cdecl core_bodypart_cpp_CBodyPart_getAllowedMeleeAttackTypes_FUN_00417ab0(CBodyPart *this_ptr)

#include "nocturne.h"

int __cdecl core_bodypart_cpp_CBodyPart_getAllowedMeleeAttackTypes_FUN_00417ab0(CBodyPart *this_ptr)

{
  int iVar1;
  
  if (this_ptr->render_in_background != 0) {
    return 0;
  }
  iVar1 = core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_00409f20(&this_ptr->base);
  return iVar1;
}
