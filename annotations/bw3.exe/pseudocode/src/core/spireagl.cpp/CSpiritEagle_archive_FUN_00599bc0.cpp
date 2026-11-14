// Name: core_spireagl.cpp_CSpiritEagle_archive_FUN_00599bc0
// Address: 00599bc0
// Address Range: [[00599bc0, 00599c77]]
// Convention: __cdecl
// Signature: void __cdecl core_spireagl_cpp_CSpiritEagle_archive_FUN_00599bc0(CSpiritEagle *this_ptr)

#include "nocturne.h"

void __cdecl core_spireagl_cpp_CSpiritEagle_archive_FUN_00599bc0(CSpiritEagle *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c280((CDemonActor *)this_ptr);
  model_ptr = &(this_ptr->base).model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30(model_ptr,"?modelName" + 1);
  core_actor_cpp_archiveMotionState_FUN_0040bab0(&model_ptr->base,"motion state");
  core_actor_cpp_archiveFloat_FUN_0040b830(&(this_ptr->base).hit_points,"hitPoints");
  core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->shoot_me,"shootMe");
  core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->pool_me,"poolMe");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->speed,"speed");
  if (g_CSpiritEagleClassVersion < 2) {
    core_charactr_cpp_CCharacter_archive_FUN_0042b450(&this_ptr->base);
    return;
  }
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->morph_time,"morphTime");
  core_charactr_cpp_CCharacter_archive_FUN_0042b450(&this_ptr->base);
  return;
}
