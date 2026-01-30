// Name: core_boxactor.cpp_CLightActor_FUN_004234e0
// Address: 004234e0
// Address Range: [[004234e0, 0042358b]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CLightActor_FUN_004234e0(void)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CLightActor_FUN_004234e0(void)

{
  CBoxActor *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_boxactor_cpp_CBoxActor_getPropertyList_FUN_004226e0(in_stack_00000004,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e670(in_stack_00000008);
  if (*(int *)in_stack_00000004[1].base.actor_name == 0) {
    core_actor_cpp_CActorPropertyList_FUN_0040e260(in_stack_00000008);
    core_actor_cpp_CActorPropertyList_FUN_0040e260(in_stack_00000008);
    core_actor_cpp_CActorPropertyList_FUN_0040e670(in_stack_00000008);
    core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  return;
}
