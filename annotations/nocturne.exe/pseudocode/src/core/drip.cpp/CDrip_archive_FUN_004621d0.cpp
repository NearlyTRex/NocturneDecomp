// Name: core_drip.cpp_CDrip_archive_FUN_004621d0
// Address: 004621d0
// Address Range: [[004621d0, 004622f5]]
// Convention: unknown
// Signature: void core_drip_cpp_CDrip_archive_FUN_004621d0(CDemonActor *param_1)

#include "nocturne.h"

void core_drip_cpp_CDrip_archive_FUN_004621d0(CDemonActor *param_1)

{
  if (1 < g_INT_005b064c) {
    core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  }
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00
            ((CKeyFramedModelInstance *)(param_1 + 1),"modelName");
  core_actor_cpp_archiveInteger_FUN_0040c900(&param_1[2].location.area_id,"type");
  core_actor_cpp_archiveInteger_FUN_0040c900((int *)&param_1[2].orient,"autoDrop");
  core_actor_cpp_archiveVector_FUN_0040c450
            ((CVector3f *)&param_1[2].orient_matrix.m[1].z,"homePos");
  core_actor_cpp_archiveVector_FUN_0040c450
            ((CVector3f *)&param_1[2].orient_matrix.m[2].z,"vel");
  if (2 < g_INT_005b064c) {
    core_actor_cpp_archiveFloat_FUN_0040c880(&param_1[2].orient.vec.z,"minAutoDripTime");
    core_actor_cpp_archiveFloat_FUN_0040c880
              ((float *)&param_1[2].orient_matrix,"maxAutoDripTime");
    core_actor_cpp_archiveFloat_FUN_0040c880(&param_1[2].orient_matrix.m[0].y,"dripRadius")
    ;
  }
  if (3 < g_INT_005b064c) {
    core_actor_cpp_archiveFloat_FUN_0040c880
              ((float *)&param_1[2].validation_magic,"damage");
  }
  if (4 < g_INT_005b064c) {
    core_actor_cpp_archiveString_FUN_0040c6d0
              ((char *)&param_1[2].direction_hint,"hitSound");
  }
  if (g_INT_005b064c < 6) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900
            ((int *)(param_1[2].create_event + 0x14),"noRockFlag");
  return;
}
