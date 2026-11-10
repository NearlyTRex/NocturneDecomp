// Name: core_npc.cpp_CNPC_archive_FUN_00531bf0
// Address: 00531bf0
// Address Range: [[00531bf0, 00531cb5]]
// Convention: __cdecl
// Signature: void __cdecl core_npc_cpp_CNPC_archive_FUN_00531bf0(CNPC *this_ptr)

#include "nocturne.h"

void __cdecl core_npc_cpp_CNPC_archive_FUN_00531bf0(CNPC *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  if (g_CNPCClassVersion < 2) {
    core_actor_cpp_CDemonActor_archive_FUN_0040c040((CDemonActor *)this_ptr);
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&(this_ptr->base).hit_points,"hitPoints");
    return;
  }
  core_charactr_cpp_CCharacter_archive_FUN_0042c7f0(&this_ptr->base);
  if (2 < g_CNPCClassVersion) {
    model_ptr = &(this_ptr->base).model;
    core_actor_cpp_archiveDeformableModelInstance_FUN_0040b7f0(model_ptr,"modelName");
    core_actor_cpp_archiveMotionState_FUN_0040b870(&model_ptr->base,"motion state");
  }
  if (3 < g_CNPCClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x1faac,"shootMe");
  }
  if (4 < g_CNPCClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x1fab0,"poolMe");
  }
  if (g_CNPCClassVersion < 6) {
    return;
  }
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x1fab4,"speed");
  return;
}
