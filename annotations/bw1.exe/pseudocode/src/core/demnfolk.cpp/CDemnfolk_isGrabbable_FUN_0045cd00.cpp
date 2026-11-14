// Name: core_demnfolk.cpp_CDemnfolk_isGrabbable_FUN_0045cd00
// Address: 0045cd00
// Address Range: [[0045cd00, 0045cd30]]
// Convention: __cdecl
// Signature: int __cdecl core_demnfolk_cpp_CDemnfolk_isGrabbable_FUN_0045cd00(CDemnfolk *this_ptr,CDemonActor *grabber)

#include "nocturne.h"

int __cdecl core_demnfolk_cpp_CDemnfolk_isGrabbable_FUN_0045cd00(CDemnfolk *this_ptr,CDemonActor *grabber)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(grabber,"?CTentacle" + 1);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = core_charactr_cpp_CCharacter_isGrabbable_FUN_00431430((CCharacter *)this_ptr,grabber);
  return iVar1;
}
