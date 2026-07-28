// Name: core_pendulum.cpp_CPendulum_archive_FUN_004f3c50
// Address: 004f3c50
// Address Range: [[004f3c50, 004f3deb]]
// Convention: unknown
// Signature: void core_pendulum_cpp_CPendulum_archive_FUN_004f3c50(CDemonActor *param_1)

#include "nocturne.h"

void core_pendulum_cpp_CPendulum_archive_FUN_004f3c50(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00
            ((CKeyFramedModelInstance *)(param_1 + 1),"modelName");
  core_actor_cpp_archiveString_FUN_0040c6d0
            ((char *)&param_1[2].location.area_id,"startEvent");
  core_actor_cpp_archiveInteger_FUN_0040c900
            ((int *)&param_1[2].platform_orientation_delta.z,"moving");
  core_actor_cpp_archiveFloat_FUN_0040c880((float *)&param_1[2].is_renderable,"param");
  core_actor_cpp_archiveFloat_FUN_0040c880
            ((float *)&param_1[2].collision_disabled,"maxAngle");
  if (1 < INT_005be164) {
    core_actor_cpp_archiveString_FUN_0040c6d0
              ((char *)&param_1[2].process_disabled,"swooshSound");
  }
  if (2 < INT_005be164) {
    core_actor_cpp_archiveString_FUN_0040c6d0
              ((char *)&param_1[2].previous_transform_state,"creak1Sound");
    core_actor_cpp_archiveString_FUN_0040c6d0((char *)&param_1[2].prev_actor,"creak2Sound")
    ;
    core_actor_cpp_archiveFloat_FUN_0040c880((float *)&param_1[2].dead2,"swooshPhaseBias");
  }
  if (3 < INT_005be164) {
    core_actor_cpp_archiveInteger_FUN_0040c900((int *)&param_1[3].orient,"killHero");
    core_actor_cpp_archiveInteger_FUN_0040c900((int *)&param_1[3].orient.vec.y,"killEnemy")
    ;
  }
  if (4 < INT_005be164) {
    core_actor_cpp_archiveFloat_FUN_0040c880(&param_1[3].orient.vec.z,"decay");
    core_actor_cpp_archiveFloat_FUN_0040c880
              ((float *)&param_1[3].orient_matrix,"decayTimer");
  }
  if (5 < INT_005be164) {
    core_actor_cpp_archiveInteger_FUN_0040c900
              ((int *)&param_1[3].orient_matrix.m[0].y,"groundType");
  }
  if (6 < INT_005be164) {
    core_actor_cpp_archiveString_FUN_0040c6d0(param_1[2].create_event + 0x18,"stopEvent");
  }
  if (INT_005be164 < 8) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900
            ((int *)&param_1[3].orient_matrix.m[0].z,"oneShot");
  return;
}
