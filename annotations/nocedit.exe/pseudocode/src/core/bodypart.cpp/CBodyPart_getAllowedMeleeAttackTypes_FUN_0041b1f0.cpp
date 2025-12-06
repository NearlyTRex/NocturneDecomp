// Name: core_bodypart.cpp_CBodyPart_getAllowedMeleeAttackTypes_FUN_0041b1f0
// Address: 0041b1f0
// Address Range: [[0041b1f0, 0041b209]]
// Convention: __cdecl
// Signature: int core_bodypart.cpp_CBodyPart_getAllowedMeleeAttackTypes_FUN_0041b1f0(CBodyPart * this_ptr)

#include "nocturne.h"

int __cdecl core_bodypart_cpp_CBodyPart_getAllowedMeleeAttackTypes_FUN_0041b1f0(CBodyPart *this_ptr)

{
  int iVar1;
  
  if (*(int *)this_ptr->field1_0x158 != 0) {
    return 0;
  }
  iVar1 = core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0(&this_ptr->base_actor);
  return iVar1;
}
