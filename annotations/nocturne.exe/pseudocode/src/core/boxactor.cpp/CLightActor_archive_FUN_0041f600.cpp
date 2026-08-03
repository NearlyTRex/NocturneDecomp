// Name: core_boxactor.cpp_CLightActor_archive_FUN_0041f600
// Address: 0041f600
// Address Range: [[0041f600, 0041f6df]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CLightActor_archive_FUN_0041f600(CLightActor *this_ptr)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CLightActor_archive_FUN_0041f600(CLightActor *this_ptr)

{
  float local_c;
  
  core_boxactor_cpp_CBoxActor_archive_FUN_0041ec60(&this_ptr->base);
  core_actor_cpp_archiveInteger_FUN_0040c900
            ((int *)&this_ptr->light_actor_type,"lightType");
  if (this_ptr->light_actor_type == LIGHT_TYPE_CUSTOM) {
    core_actor_cpp_archiveVector_FUN_0040c450(&this_ptr->blight_pos,"bLightPos");
    core_actor_cpp_archiveOrientation_FUN_0040c4f0
              (&(this_ptr->light_orient).orient,"lightOrient");
    if (DAT_00763e88 == 1) {
      core_actor_cpp_archiveFloat_FUN_0040c880(&local_c,"lightFov");
      (this_ptr->light).base.focal_length = local_c;
    }
    else {
      local_c = (this_ptr->light).base.focal_length;
      core_actor_cpp_archiveFloat_FUN_0040c880(&local_c,"lightFov");
    }
  }
  core_actor_cpp_archiveInteger_FUN_0040c900
            (&(this_ptr->light).light_enabled_flag,"light status");
  if (this_ptr->light_actor_type != LIGHT_TYPE_CUSTOM) {
    return;
  }
  core_actor_cpp_archiveFloat_FUN_0040c880
            (&(this_ptr->light).base.fixed_point_scale,"light falloff");
  return;
}
