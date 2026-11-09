// Name: core_boxactor.cpp_CBoxActor_canPickup_FUN_00422c30
// Address: 00422c30
// Address Range: [[00422c30, 00422c5e]]
// Convention: __cdecl
// Signature: int __cdecl core_boxactor_cpp_CBoxActor_canPickup_FUN_00422c30(CBoxActor *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_boxactor_cpp_CBoxActor_canPickup_FUN_00422c30(CBoxActor *this_ptr,CDemonActor *picker)

{
  int iVar1;
  
  if (*(int *)&this_ptr->field_0x314 != 3) {
    iVar1 = core_actor_cpp_FUN_0040c550(picker,"?CHero" + 1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return *(int *)&this_ptr->field_0x314;
}
