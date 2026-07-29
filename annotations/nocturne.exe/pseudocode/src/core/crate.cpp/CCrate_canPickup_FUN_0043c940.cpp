// Name: core_crate.cpp_CCrate_canPickup_FUN_0043c940
// Address: 0043c940
// Address Range: [[0043c940, 0043c95b]]
// Convention: __cdecl
// Signature: int __cdecl core_crate_cpp_CCrate_canPickup_FUN_0043c940(CCrate *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_crate_cpp_CCrate_canPickup_FUN_0043c940(CCrate *this_ptr,CDemonActor *picker)

{
  int iVar1;
  int iVar2;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(picker,"CHero");
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = 4;
  }
  return iVar2;
}
