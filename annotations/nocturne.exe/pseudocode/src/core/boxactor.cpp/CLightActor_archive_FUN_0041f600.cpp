// Name: core_boxactor.cpp_CLightActor_archive_FUN_0041f600
// Address: 0041f600
// Address Range: [[0041f600, 0041f6df]]
// Convention: unknown
// Signature: void core_boxactor_cpp_CLightActor_archive_FUN_0041f600(CBoxActor *param_1)

#include "nocturne.h"

void core_boxactor_cpp_CLightActor_archive_FUN_0041f600(CBoxActor *param_1)

{
  float local_c;
  
  core_boxactor_cpp_CBoxActor_archive_FUN_0041ec60(param_1);
  core_actor_cpp_archiveInteger_FUN_0040c900((int *)(param_1 + 1),"lightType");
  if (*(int *)param_1[1].base.actor_name == 0) {
    core_actor_cpp_archiveVector_FUN_0040c450
              ((CVector3f *)&param_1[8].sfx_handle,"bLightPos");
    core_actor_cpp_archiveOrientation_FUN_0040c4f0(&param_1[8].rpm.z,"lightOrient");
    if (DAT_00763e88 == 1) {
      core_actor_cpp_archiveFloat_FUN_0040c880(&local_c,"lightFov");
      param_1[1].base.previous_transform_state.orientation.vec.z = local_c;
    }
    else {
      local_c = param_1[1].base.previous_transform_state.orientation.vec.z;
      core_actor_cpp_archiveFloat_FUN_0040c880(&local_c,"lightFov");
    }
  }
  core_actor_cpp_archiveInteger_FUN_0040c900
            ((int *)(param_1[5].push_sound + 4),"light status");
  if (*(int *)param_1[1].base.actor_name != 0) {
    return;
  }
  core_actor_cpp_archiveFloat_FUN_0040c880
            ((float *)&param_1[1].base.process_disabled,"light falloff");
  return;
}
