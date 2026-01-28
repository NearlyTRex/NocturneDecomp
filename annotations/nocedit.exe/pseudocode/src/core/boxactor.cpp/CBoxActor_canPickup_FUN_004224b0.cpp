// Name: core_boxactor.cpp_CBoxActor_canPickup_FUN_004224b0
// Address: 004224b0
// Address Range: [[004224b0, 004224de]]
// Convention: __cdecl
// Signature: int __cdecl core_boxactor_cpp_CBoxActor_canPickup_FUN_004224b0(CBoxActor *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl
core_boxactor_cpp_CBoxActor_canPickup_FUN_004224b0(CBoxActor *this_ptr,CDemonActor *picker)

{
  int iVar1;
  
  if (this_ptr->pickup_type != 3) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(picker,"CHero");
    if (iVar1 == 0) {
      return 0;
    }
  }
  return this_ptr->pickup_type;
}
