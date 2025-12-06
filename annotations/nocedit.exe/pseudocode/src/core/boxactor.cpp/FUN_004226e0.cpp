// Name: core_boxactor.cpp_FUN_004226e0
// Address: 004226e0
// Address Range: [[004226e0, 004228d1]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_FUN_004226e0()

#include "nocturne.h"

/* Signature: byte actors_other_boxactor.cpp_FUN_004226e0(uint param_1, uint
   param_2) */

void core_boxactor_cpp_FUN_004226e0(void)

{
  CKeyFramedModel *pCVar1;
  CDemonActor *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(in_stack_00000004,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e3b0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e1a0(in_stack_00000008);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
  if (1 < pCVar1->frame_count) {
    core_actor_cpp_CActorPropertyList_FUN_0040e1a0(in_stack_00000008);
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e260(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e2d0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e2d0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e640(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  if (in_stack_00000004[2].field7_0x6c != 0) {
    core_actor_cpp_CActorPropertyList_FUN_0040e350(in_stack_00000008);
    core_actor_cpp_CActorPropertyList_FUN_0040e2d0(in_stack_00000008);
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e300(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e480(in_stack_00000008);
  if ((in_stack_00000004[2].health != 0) && (in_stack_00000004[2].health != 1)) {
    core_actor_cpp_CActorPropertyList_FUN_0040e6a0(in_stack_00000008);
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  return;
}
