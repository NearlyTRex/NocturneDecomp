// Name: core_npc.cpp_CNPC_archive_FUN_00544ba0
// Address: 00544ba0
// Address Range: [[00544ba0, 00544c44]]
// Convention: __cdecl
// Signature: void __cdecl core_npc_cpp_CNPC_archive_FUN_00544ba0(CNPC *this_ptr)

#include "nocturne.h"

void __cdecl core_npc_cpp_CNPC_archive_FUN_00544ba0(CNPC *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  if (g_CNPCClassVersion < 2) {
    core_actor_cpp_CDemonActor_archive_FUN_0040c1c0((CDemonActor *)this_ptr);
    core_actor_cpp_archiveFloat_FUN_0040b770(&(this_ptr->base).hit_points,"hitPoints");
    return;
  }
  core_charactr_cpp_CCharacter_archive_FUN_004283a0(&this_ptr->base);
  if (2 < g_CNPCClassVersion) {
    model_ptr = &(this_ptr->base).model;
    core_actor_cpp_archiveDeformableModelInstance_FUN_0040b970(model_ptr,"modelName");
    core_actor_cpp_archiveMotionState_FUN_0040b9f0
              (&model_ptr->motion_controller,"motion state");
  }
  if (3 < g_CNPCClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->shoot_me,"shootMe");
  }
  if (g_CNPCClassVersion < 5) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->pool_me,"poolMe");
  return;
}
