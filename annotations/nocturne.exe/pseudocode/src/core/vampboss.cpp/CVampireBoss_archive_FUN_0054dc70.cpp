// Name: core_vampboss.cpp_CVampireBoss_archive_FUN_0054dc70
// Address: 0054dc70
// Address Range: [[0054dc70, 0054dd43]]
// Convention: unknown
// Signature: void core_vampboss_cpp_CVampireBoss_archive_FUN_0054dc70(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void core_vampboss_cpp_CVampireBoss_archive_FUN_0054dc70(CEnemy *param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(param_1);
  if (1 < INT_005c1188) {
    core_actor_cpp_archiveMotionState_FUN_0040cb00
              (&(param_1->base).model.motion_controller,"human model motion state");
    core_actor_cpp_archiveMotionState_FUN_0040cb00
              ((CMotionController *)(param_1 + 1),"bat model motion state");
  }
  if (2 < INT_005c1188) {
    core_actor_cpp_archiveActor_FUN_0040c980
              ((CDemonActor **)
               &param_1[0x10].base.model.bone_transform.bone_world_matrices[0x3e].m[0].x,
               "wayPoint0");
    core_actor_cpp_archiveActor_FUN_0040c980
              ((CDemonActor **)
               &param_1[0x10].base.model.bone_transform.bone_world_matrices[0x3e].m[0].y,
               "wayPoint1");
    core_actor_cpp_archiveActor_FUN_0040c980
              ((CDemonActor **)
               &param_1[0x10].base.model.bone_transform.bone_world_matrices[0x3e].m[0].z,
               "wayPoint2");
    core_actor_cpp_archiveActor_FUN_0040c980
              ((CDemonActor **)
               (param_1[0x10].base.model.bone_transform.bone_world_matrices[0x3e].m + 1),
               "wayPoint3");
  }
  if (INT_005c1188 < 4) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900
            ((int *)(param_1[0x10].base.model.bone_transform.bone_scales + 0x3a),"form");
  core_actor_cpp_archiveFloat_FUN_0040c880
            (&param_1[0x10].base.model.bone_transform.bone_world_matrices[0x3d].m[1].y,
             "morphT");
  return;
}
