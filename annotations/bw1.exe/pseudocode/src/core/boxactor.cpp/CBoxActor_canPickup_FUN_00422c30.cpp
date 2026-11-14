// Name: core_boxactor.cpp_CBoxActor_canPickup_FUN_00422c30
// Address: 00422c30
// Address Range: [[00422c30, 00422c5e]]
// Convention: __cdecl
// Signature: int __cdecl core_boxactor_cpp_CBoxActor_canPickup_FUN_00422c30(CBoxActor *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_boxactor_cpp_CBoxActor_canPickup_FUN_00422c30(CBoxActor *this_ptr,CDemonActor *picker)

{
  int iVar1;
  
  if (this_ptr->pickup_type != BOX_PICKUP_CARRY) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(picker,"?CHero" + 1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return this_ptr->pickup_type;
}
