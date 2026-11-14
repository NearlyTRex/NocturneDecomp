// Name: core_carved.cpp_CCarved_isGrabbable_FUN_0042bd50
// Address: 0042bd50
// Address Range: [[0042bd50, 0042bd80]]
// Convention: __cdecl
// Signature: int __cdecl core_carved_cpp_CCarved_isGrabbable_FUN_0042bd50(CCarved *this_ptr,CDemonActor *grabber)

#include "nocturne.h"

int __cdecl core_carved_cpp_CCarved_isGrabbable_FUN_0042bd50(CCarved *this_ptr,CDemonActor *grabber)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(grabber,"?CTentacle" + 1);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = core_charactr_cpp_CCharacter_isGrabbable_FUN_00431430((CCharacter *)this_ptr,grabber);
  return iVar1;
}
