// Name: core_boxactor.cpp_CBoxActor_canPickup_FUN_004200a0
// Address: 004200a0
// Address Range: [[004200a0, 004200e2]]
// Convention: __cdecl
// Signature: int __cdecl core_boxactor_cpp_CBoxActor_canPickup_FUN_004200a0(CBoxActor *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_boxactor_cpp_CBoxActor_canPickup_FUN_004200a0(CBoxActor *this_ptr,CDemonActor *picker)

{
  int iVar1;
  
  if (this_ptr->pickup_type == BOX_PICKUP_CARRY) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c790(picker,"CHero");
    if (iVar1 != 0) {
      return 0;
    }
  }
  else {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c790(picker,"?CHero" + 1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return this_ptr->pickup_type;
}
