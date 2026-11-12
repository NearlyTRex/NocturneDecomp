// Name: core_hotdemon.cpp_CHotDemon_archive_FUN_004d4330
// Address: 004d4330
// Address Range: [[004d4330, 004d4380]]
// Convention: __cdecl
// Signature: void __cdecl core_hotdemon_cpp_CHotDemon_archive_FUN_004d4330(CHotDemon *this_ptr)

#include "nocturne.h"

void __cdecl core_hotdemon_cpp_CHotDemon_archive_FUN_004d4330(CHotDemon *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&(this_ptr->base).speed,"?speed" + 1);
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0(model_ptr,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040bb60(&model_ptr->base,"motion state");
  return;
}
