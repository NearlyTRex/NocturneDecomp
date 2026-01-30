// Name: core_gasmask.cpp_CGasMask_FUN_004e5d70
// Address: 004e5d70
// Address Range: [[004e5d70, 004e5d8f]]
// Convention: __cdecl
// Signature: int __cdecl core_gasmask_cpp_CGasMask_FUN_004e5d70(void)

#include "nocturne.h"

/* Signature: byte actors_other_gasmask.cpp_CGasMask_FUN_004e5d70(byte param_1,
   uint param_2) */

int __cdecl core_gasmask_cpp_CGasMask_FUN_004e5d70(void)

{
  int iVar1;
  int iVar2;
  CDemonActor *in_stack_00000008;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000008,"CHero");
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = 2;
  }
  return iVar2;
}
