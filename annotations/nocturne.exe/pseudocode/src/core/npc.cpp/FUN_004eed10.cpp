// Name: core_npc.cpp_FUN_004eed10
// Address: 004eed10
// Address Range: [[004eed10, 004eedb4]]
// Convention: __cdecl
// Signature: void __cdecl core_npc_cpp_FUN_004eed10(CNPC *this_ptr)

#include "nocturne.h"

void __cdecl core_npc_cpp_FUN_004eed10(CNPC *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  if (INT_005be074 < 2) {
    core_actor_cpp_CDemonActor_archive_FUN_0040d2d0((CDemonActor *)this_ptr);
    core_actor_cpp_archiveFloat_FUN_0040c880(&(this_ptr->base).hit_points,"hitPoints");
    return;
  }
  core_charactr_cpp_CCharacter_archive_FUN_004244b0(&this_ptr->base);
  if (2 < INT_005be074) {
    model_ptr = &(this_ptr->base).model;
    core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80(model_ptr,"modelName");
    core_actor_cpp_archiveMotionState_FUN_0040cb00
              (&model_ptr->motion_controller,"motion state");
  }
  if (3 < INT_005be074) {
    core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->shoot_me,"shootMe");
  }
  if (INT_005be074 < 5) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->pool_me,"poolMe");
  return;
}
