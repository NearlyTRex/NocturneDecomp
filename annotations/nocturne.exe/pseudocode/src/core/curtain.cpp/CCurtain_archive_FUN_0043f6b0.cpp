// Name: core_curtain.cpp_CCurtain_archive_FUN_0043f6b0
// Address: 0043f6b0
// Address Range: [[0043f6b0, 0043f8c9]]
// Convention: unknown
// Signature: void core_curtain_cpp_CCurtain_archive_FUN_0043f6b0(CDemonActor *param_1)

#include "nocturne.h"

void core_curtain_cpp_CCurtain_archive_FUN_0043f6b0(CDemonActor *param_1)

{
  uint local_8;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveVector_FUN_0040c450((CVector3f *)(param_1 + 1),"curtainSize");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1[1].actor_name + 0x14,"curtainTexture");
  core_actor_cpp_archiveInteger_FUN_0040c900
            ((int *)&param_1[1].location.position.y,"opacity");
  local_8 = 0;
  if (1 < INT_005ad3f0) {
    if (INT_005ad3f0 < 4) {
      core_actor_cpp_archiveInteger_FUN_0040c900((int *)&local_8,"cinched");
      param_1[1].location.position.z = (float)(uint)((local_8 & 1) != 0);
      *(uint *)((int)&param_1[1].orient + 4) = (uint)((local_8 & 2) != 0);
      param_1[1].location.area_id = (uint)((local_8 & 4) != 0);
      *(uint *)&param_1[1].orient = (uint)((local_8 & 8) != 0);
    }
    core_actor_cpp_archiveFloat_FUN_0040c880
              ((float *)&param_1[0x4d7].standing_platform,"weight");
    core_actor_cpp_archiveFloat_FUN_0040c880
              (&param_1[0x4d7].platform_position_delta.x,"dampen");
    core_actor_cpp_archiveFloat_FUN_0040c880
              (&param_1[0x4d7].platform_position_delta.y,"spring");
    core_actor_cpp_archiveFloat_FUN_0040c880
              (&param_1[0x4d7].platform_position_delta.z,"friction");
    core_actor_cpp_archiveFloat_FUN_0040c880
              (&param_1[0x4d7].platform_orientation_delta.x,"gravity");
    core_actor_cpp_archiveInteger_FUN_0040c900
              ((int *)&param_1[0x4d7].platform_orientation_delta.z,"hitFloor");
  }
  if (2 < INT_005ad3f0) {
    core_actor_cpp_archiveInteger_FUN_0040c900
              ((int *)(param_1[1].create_event + 0x28),"simulateMe");
  }
  if (3 < INT_005ad3f0) {
    core_actor_cpp_archiveInteger_FUN_0040c900
              ((int *)&param_1[1].location.position.z,"cinchedTop");
    core_actor_cpp_archiveInteger_FUN_0040c900
              ((int *)&param_1[1].orient.vec.y,"cinchedBottom");
    core_actor_cpp_archiveInteger_FUN_0040c900(&param_1[1].location.area_id,"cinchedLeft");
    core_actor_cpp_archiveInteger_FUN_0040c900((int *)&param_1[1].orient,"cinchedRight");
    core_actor_cpp_archiveInteger_FUN_0040c900((int *)&param_1[1].orient.vec.z,"falling");
    core_actor_cpp_archiveString_FUN_0040c6d0
              ((char *)&param_1[1].orient_matrix,"letGoEvent");
  }
  if (4 < INT_005ad3f0) {
    core_actor_cpp_archiveFloat_FUN_0040c880
              ((float *)(param_1[1].create_event + 0x2c),"patchSize");
  }
  if (INT_005ad3f0 < 6) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900
            ((int *)(param_1[1].create_event + 0x30),"blockVirtualDirectorFlag");
  return;
}
