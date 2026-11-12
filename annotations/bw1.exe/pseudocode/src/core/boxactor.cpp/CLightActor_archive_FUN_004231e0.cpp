// Name: core_boxactor.cpp_CLightActor_archive_FUN_004231e0
// Address: 004231e0
// Address Range: [[004231e0, 004232b9]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CLightActor_archive_FUN_004231e0(CLightActor *this_ptr)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CLightActor_archive_FUN_004231e0(CLightActor *this_ptr)

{
  float fStack_c;
  
  core_boxactor_cpp_CBoxActor_archive_FUN_00422760(&this_ptr->base);
  core_actor_cpp_archiveInteger_FUN_0040b670
            ((int *)&this_ptr->light_actor_type,"lightType");
  if (this_ptr->light_actor_type == LIGHT_TYPE_CUSTOM) {
    core_actor_cpp_archiveVector_FUN_0040b1c0(&this_ptr->blight_pos,"bLightPos");
    core_actor_cpp_archiveOrientation_FUN_0040b260
              (&(this_ptr->light_orient).orient,"lightOrient");
    if (DAT_007c3038 == 1) {
      core_actor_cpp_archiveFloat_FUN_0040b5f0(&fStack_c,"lightFov");
      (this_ptr->light).base.base.focal_length = fStack_c;
    }
    else {
      fStack_c = (this_ptr->light).base.base.focal_length;
      core_actor_cpp_archiveFloat_FUN_0040b5f0(&fStack_c,"lightFov");
    }
  }
  core_actor_cpp_archiveInteger_FUN_0040b670
            (&(this_ptr->light).light_enabled_flag,"light status");
  if (this_ptr->light_actor_type != LIGHT_TYPE_CUSTOM) {
    return;
  }
  core_actor_cpp_archiveFloat_FUN_0040b5f0
            (&(this_ptr->light).base.max_distance,"light falloff");
  return;
}
