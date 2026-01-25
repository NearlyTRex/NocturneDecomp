// Name: core_batman.cpp_CBatman_FUN_00417cb0
// Address: 00417cb0
// Address Range: [[00417cb0, 00417cce]]
// Convention: __cdecl
// Signature: int core_batman.cpp_CBatman_FUN_00417cb0(CBatman * this_ptr)

#include "nocturne.h"

int __cdecl core_batman_cpp_CBatman_FUN_00417cb0(CBatman *this_ptr)

{
  int iVar1;
  SCollisionInfo *in_stack_00000008;
  
  if (this_ptr->mist_state != 0) {
    return 0;
  }
  iVar1 = core_charactr_cpp_CCharacter_hasCollision_FUN_0042bc20
                    ((CCharacter *)this_ptr,in_stack_00000008);
  return iVar1;
}
