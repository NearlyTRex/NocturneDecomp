// Name: core_bird.cpp_CBird_archive_FUN_00415780
// Address: 00415780
// Address Range: [[00415780, 00415820]]
// Convention: __cdecl
// Signature: void __cdecl core_bird_cpp_CBird_archive_FUN_00415780(CBird *this_ptr)

#include "nocturne.h"

void __cdecl core_bird_cpp_CBird_archive_FUN_00415780(CBird *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  if (1 < g_CBirdClassVersion) {
    core_charactr_cpp_CCharacter_archive_FUN_0042c7f0(&this_ptr->base);
    return;
  }
  core_actor_cpp_CDemonActor_archive_FUN_0040c040((CDemonActor *)this_ptr);
  model_ptr = &(this_ptr->base).model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040b7f0(model_ptr,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040b870(&model_ptr->base,"motion state");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&(this_ptr->base).hit_points,"hitPoints");
  core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->shoot_me,"shootMe");
  core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->pool_me,"poolMe");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->speed,"speed");
  core_charactr_cpp_CCharacter_archive_FUN_0042c7f0(&this_ptr->base);
  return;
}
