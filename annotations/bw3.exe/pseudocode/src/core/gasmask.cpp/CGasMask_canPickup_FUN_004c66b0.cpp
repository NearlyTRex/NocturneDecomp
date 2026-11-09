// Name: core_gasmask.cpp_CGasMask_canPickup_FUN_004c66b0
// Address: 004c66b0
// Address Range: [[004c66b0, 004c66cf]]
// Convention: __cdecl
// Signature: int __cdecl core_gasmask_cpp_CGasMask_canPickup_FUN_004c66b0(CGasMask *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_gasmask_cpp_CGasMask_canPickup_FUN_004c66b0(CGasMask *this_ptr,CDemonActor *picker)

{
  int iVar1;
  int iVar2;
  
  iVar1 = core_actor_cpp_FUN_0040c790(picker,"CHero");
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = 2;
  }
  return iVar2;
}
