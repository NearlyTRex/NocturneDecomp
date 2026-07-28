// Name: core_ammobox.cpp_FUN_0040f390
// Address: 0040f390
// Address Range: [[0040f390, 0040f45d]]
// Convention: unknown
// Signature: void core_ammobox_cpp_FUN_0040f390(CDemonActor *param_1)

#include "nocturne.h"

void core_ammobox_cpp_FUN_0040f390(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00
            ((CKeyFramedModelInstance *)(param_1 + 1),"modelName");
  core_actor_cpp_archiveString_FUN_0040c6d0
            ((char *)&param_1[2].location.area_id,"weaponClassName");
  core_actor_cpp_archiveInteger_FUN_0040c900(&param_1[2].direction_hint,"ammoCount");
  core_actor_cpp_archiveInteger_FUN_0040c900((int *)&param_1[2].lifecycle_state,"ammoType")
  ;
  core_actor_cpp_archiveFloat_FUN_0040c880(&param_1[2].create_prob,(char *)0x0);
  if (1 < g_INT_005aceb4) {
    core_actor_cpp_archiveActor_FUN_0040c980
              ((CDemonActor **)param_1[2].create_event,"item");
  }
  if (2 < g_INT_005aceb4) {
    core_actor_cpp_archiveInteger_FUN_0040c900
              ((int *)(param_1[2].create_event + 4),"hasCollision");
  }
  if (g_INT_005aceb4 < 4) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1[2].create_event + 8,"openSound");
  return;
}
