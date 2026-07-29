// Name: core_gasmask.cpp_CGasMask_canPickup_FUN_004a8a80
// Address: 004a8a80
// Address Range: [[004a8a80, 004a8a9f]]
// Convention: __cdecl
// Signature: int __cdecl core_gasmask_cpp_CGasMask_canPickup_FUN_004a8a80(CGasMask *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_gasmask_cpp_CGasMask_canPickup_FUN_004a8a80(CGasMask *this_ptr,CDemonActor *picker)

{
  int iVar1;
  int iVar2;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(picker,"CHero");
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = 2;
  }
  return iVar2;
}
