// Name: core_gasmask.cpp_CGasMask_FUN_004e5d70
// Address: 004e5d70
// Address Range: [[004e5d70, 004e5d8f]]
// Convention: unknown
// Signature: undefined core_gasmask.cpp_CGasMask_FUN_004e5d70()

#include "nocturne.h"

/* Signature: byte actors_other_gasmask.cpp_CGasMask_FUN_004e5d70(byte param_1,
   uint param_2) */

int core_gasmask_cpp_CGasMask_FUN_004e5d70(void)

{
  int iVar1;
  CDemonActor *in_stack_00000008;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000008,"CHero");
  if (iVar1 != 0) {
    iVar1 = 2;
  }
  return iVar1;
}
