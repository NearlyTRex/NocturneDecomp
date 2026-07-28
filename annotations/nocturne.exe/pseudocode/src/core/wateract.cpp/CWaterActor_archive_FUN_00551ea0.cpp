// Name: core_wateract.cpp_CWaterActor_archive_FUN_00551ea0
// Address: 00551ea0
// Address Range: [[00551ea0, 00552091]]
// Convention: unknown
// Signature: void core_wateract_cpp_CWaterActor_archive_FUN_00551ea0(CDemonActor *param_1)

#include "nocturne.h"

void core_wateract_cpp_CWaterActor_archive_FUN_00551ea0(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveVector_FUN_0040c450((CVector3f *)(param_1 + 1),"size");
  core_actor_cpp_archiveInteger_FUN_0040c900
            ((int *)(param_1[1].actor_name + 0xc),"opacity");
  if (INT_005c154c == 2) {
    core_actor_cpp_archiveFloat_FUN_0040c880
              ((float *)(param_1[1].actor_name + 0x10),"heightDelta");
    core_actor_cpp_archiveFloat_FUN_0040c880
              ((float *)(param_1[1].actor_name + 0x14),"timeToMove");
    core_actor_cpp_archiveString_FUN_0040c6d0(param_1[1].actor_name + 0x1c,"moveSound");
    core_actor_cpp_archiveString_FUN_0040c6d0
              ((char *)&param_1[1].orient_matrix.m[2].z,"moveEvent");
    core_actor_cpp_archiveFloat_FUN_0040c880((float *)&param_1[1].dead2,"param");
  }
  if (2 < INT_005c154c) {
    core_actor_cpp_archiveFloat_FUN_0040c880
              ((float *)(param_1[1].actor_name + 0x10),"heightDelta");
    core_actor_cpp_archiveFloat_FUN_0040c880
              ((float *)(param_1[1].actor_name + 0x14),"timeToMoveUp");
    core_actor_cpp_archiveFloat_FUN_0040c880
              ((float *)(param_1[1].actor_name + 0x18),"timeToMoveDown");
    core_actor_cpp_archiveString_FUN_0040c6d0(param_1[1].actor_name + 0x1c,"moveUpSound");
    core_actor_cpp_archiveString_FUN_0040c6d0
              ((char *)&param_1[1].orient_matrix,"moveDownSound");
    core_actor_cpp_archiveString_FUN_0040c6d0
              ((char *)&param_1[1].orient_matrix.m[2].z,"moveUpEvent");
    core_actor_cpp_archiveString_FUN_0040c6d0
              (param_1[1].create_event + 0x48,"moveDownEvent");
    core_actor_cpp_archiveFloat_FUN_0040c880((float *)&param_1[1].dead2,"param");
    core_actor_cpp_archiveInteger_FUN_0040c900
              ((int *)&param_1[1].previous_transform_state,"state");
  }
  if (3 < INT_005c154c) {
    core_actor_cpp_archiveFloat_FUN_0040c880
              (&param_1[1].previous_transform_state.position.y,"patchSize");
  }
  if (4 < INT_005c154c) {
    core_actor_cpp_archiveInteger_FUN_0040c900
              ((int *)&param_1[1].previous_transform_state.position.z,"roundFlag");
  }
  if (INT_005c154c < 6) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900
            ((int *)&param_1[1].previous_transform_state.orientation,"colR");
  core_actor_cpp_archiveInteger_FUN_0040c900
            ((int *)&param_1[1].previous_transform_state.orientation.vec.y,"colG");
  core_actor_cpp_archiveInteger_FUN_0040c900
            ((int *)&param_1[1].previous_transform_state.orientation.vec.z,"colB");
  return;
}
