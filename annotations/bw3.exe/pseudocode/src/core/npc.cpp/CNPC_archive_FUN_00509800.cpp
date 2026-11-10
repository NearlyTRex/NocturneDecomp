// Name: core_npc.cpp_CNPC_archive_FUN_00509800
// Address: 00509800
// Address Range: [[00509800, 005098ff]]
// Convention: __cdecl
// Signature: void __cdecl core_npc_cpp_CNPC_archive_FUN_00509800(CNPC *this_ptr)

#include "nocturne.h"

void __cdecl core_npc_cpp_CNPC_archive_FUN_00509800(CNPC *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  if (g_CNPCClassVersion < 2) {
    core_actor_cpp_CDemonActor_archive_FUN_0040c280((CDemonActor *)this_ptr);
    core_actor_cpp_archiveFloat_FUN_0040b830(&(this_ptr->base).hit_points,"hitPoints");
    return;
  }
  core_charactr_cpp_CCharacter_archive_FUN_0042b450(&this_ptr->base);
  if (2 < g_CNPCClassVersion) {
    model_ptr = &(this_ptr->base).model;
    core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30(model_ptr,"modelName");
    core_actor_cpp_archiveMotionState_FUN_0040bab0(&model_ptr->base,"motion state");
  }
  if (3 < g_CNPCClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0x206a8,"shootMe");
  }
  if (4 < g_CNPCClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0x206ac,"poolMe");
  }
  if (5 < g_CNPCClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x206b0,"speed");
  }
  if (6 < g_CNPCClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x206c4,"fadeTime");
  }
  if (g_CNPCClassVersion < 8) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0x206bc,"startOpc");
  return;
}
