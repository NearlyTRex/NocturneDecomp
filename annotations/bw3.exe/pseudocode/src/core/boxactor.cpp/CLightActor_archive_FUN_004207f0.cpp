// Name: core_boxactor.cpp_CLightActor_archive_FUN_004207f0
// Address: 004207f0
// Address Range: [[004207f0, 004208c9]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CLightActor_archive_FUN_004207f0(CLightActor *this_ptr)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CLightActor_archive_FUN_004207f0(CLightActor *this_ptr)

{
  float fStack_c;
  
  core_boxactor_cpp_CBoxActor_archive_FUN_0041fb90(&this_ptr->base);
  core_actor_cpp_archiveInteger_FUN_0040b8b0
            ((int *)&this_ptr->light_actor_type,"lightType");
  if (this_ptr->light_actor_type == LIGHT_TYPE_CUSTOM) {
    core_actor_cpp_archiveVector_FUN_0040b400(&this_ptr->blight_pos,"bLightPos");
    core_actor_cpp_archiveOrientation_FUN_0040b4a0(&this_ptr->light_orient,"lightOrient");
    if (DAT_007df9b8 == 1) {
      core_actor_cpp_archiveFloat_FUN_0040b830(&fStack_c,"lightFov");
      (this_ptr->light).base.base.focal_length = fStack_c;
    }
    else {
      fStack_c = (this_ptr->light).base.base.focal_length;
      core_actor_cpp_archiveFloat_FUN_0040b830(&fStack_c,"lightFov");
    }
  }
  core_actor_cpp_archiveInteger_FUN_0040b8b0
            (&(this_ptr->light).light_enabled_flag,"light status");
  if (this_ptr->light_actor_type != LIGHT_TYPE_CUSTOM) {
    return;
  }
  core_actor_cpp_archiveFloat_FUN_0040b830
            (&(this_ptr->light).base.max_distance,"light falloff");
  return;
}
