// Name: core_bodypart.cpp_CBodyPart_getAllowedMeleeAttackTypes_FUN_0041af30
// Address: 0041af30
// Address Range: [[0041af30, 0041af49]]
// Convention: __cdecl
// Signature: int __cdecl core_bodypart_cpp_CBodyPart_getAllowedMeleeAttackTypes_FUN_0041af30(CBodyPart *this_ptr)

#include "nocturne.h"

int __cdecl core_bodypart_cpp_CBodyPart_getAllowedMeleeAttackTypes_FUN_0041af30(CBodyPart *this_ptr)

{
  int iVar1;
  
  if (*(int *)&this_ptr->field_0x158 != 0) {
    return 0;
  }
  iVar1 = core_actor_cpp_FUN_00409d70(this_ptr);
  return iVar1;
}
