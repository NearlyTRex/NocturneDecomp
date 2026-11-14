// Name: core_smiley.cpp_CSmiley_archive_FUN_0056cd90
// Address: 0056cd90
// Address Range: [[0056cd90, 0056cdeb]]
// Convention: __cdecl
// Signature: void __cdecl core_smiley_cpp_CSmiley_archive_FUN_0056cd90(CSmiley *this_ptr)

#include "nocturne.h"

void __cdecl core_smiley_cpp_CSmiley_archive_FUN_0056cd90(CSmiley *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_004a0520(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&(this_ptr->base).speed,"speed");
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040b7f0(model_ptr,"modelName");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->guard_distance,"guardDistance");
  core_actor_cpp_archiveMotionState_FUN_0040b870(&model_ptr->base,"motion state");
  return;
}
