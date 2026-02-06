// Name: core_gasmask.cpp_CGasMask_canPickup_FUN_004e5d70
// Address: 004e5d70
// Address Range: [[004e5d70, 004e5d8f]]
// Convention: __cdecl
// Signature: int __cdecl core_gasmask_cpp_CGasMask_canPickup_FUN_004e5d70(CGasMask *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_gasmask_cpp_CGasMask_canPickup_FUN_004e5d70(CGasMask *this_ptr,CDemonActor *picker)

{
  int iVar1;
  int iVar2;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(picker,"CHero");
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = 2;
  }
  return iVar2;
}
