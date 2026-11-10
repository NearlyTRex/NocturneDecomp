// Name: core_crate.cpp_CCrate_canPickup_FUN_00445d10
// Address: 00445d10
// Address Range: [[00445d10, 00445d2b]]
// Convention: __cdecl
// Signature: int __cdecl core_crate_cpp_CCrate_canPickup_FUN_00445d10(CCrate *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_crate_cpp_CCrate_canPickup_FUN_00445d10(CCrate *this_ptr,CDemonActor *picker)

{
  int iVar1;
  int iVar2;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c790(picker,"?CHero" + 1);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = 4;
  }
  return iVar2;
}
