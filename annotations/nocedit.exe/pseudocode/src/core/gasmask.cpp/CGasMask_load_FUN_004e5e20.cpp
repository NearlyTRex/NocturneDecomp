// Name: core_gasmask.cpp_CGasMask_load_FUN_004e5e20
// Address: 004e5e20
// Address Range: [[004e5e20, 004e5e44]]
// Convention: __cdecl
// Signature: void __cdecl core_gasmask_cpp_CGasMask_load_FUN_004e5e20(void)

#include "nocturne.h"

/* Signature: byte actors_other_gasmask.cpp_CGasMask_load(CGasMask* param_1) */

void __cdecl core_gasmask_cpp_CGasMask_load_FUN_004e5e20(void)

{
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c1c0(in_stack_00000004);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b8f0
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),"modelName");
  return;
}
