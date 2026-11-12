// Name: core_smiley.cpp_CSmiley_archive_FUN_0054a710
// Address: 0054a710
// Address Range: [[0054a710, 0054a76b]]
// Convention: __cdecl
// Signature: void __cdecl core_smiley_cpp_CSmiley_archive_FUN_0054a710(CSmiley *this_ptr)

#include "nocturne.h"

void __cdecl core_smiley_cpp_CSmiley_archive_FUN_0054a710(CSmiley *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&(this_ptr->base).speed,"speed");
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0(model_ptr,"modelName");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->guard_distance,"guardDistance");
  core_actor_cpp_archiveMotionState_FUN_0040bb60(&model_ptr->base,"motion state");
  return;
}
