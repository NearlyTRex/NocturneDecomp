// Name: core_passngr.cpp_CPassenger_archive_FUN_004efb30
// Address: 004efb30
// Address Range: [[004efb30, 004efc09]]
// Convention: unknown
// Signature: void core_passngr_cpp_CPassenger_archive_FUN_004efb30(CNPC *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void core_passngr_cpp_CPassenger_archive_FUN_004efb30(CNPC *param_1)

{
  CDeformableModelInstance *model_ptr;
  
  core_npc_cpp_FUN_004eed10(param_1);
  core_actor_cpp_archiveString_FUN_0040c6d0((char *)(param_1 + 1),"transformEvent");
  core_actor_cpp_archiveString_FUN_0040c6d0
            ((char *)&param_1[1].base.base.health,"wolfModelName");
  core_actor_cpp_archiveFloat_FUN_0040c880
            (&param_1[1].base.model.bone_transform.pose_data.bone_rotations[0x53].y,
             "morphTime");
  if ((1 < INT_005be078) && (INT_005be078 < 5)) {
    model_ptr = &(param_1->base).model;
    core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80(model_ptr,"modelName");
    core_actor_cpp_archiveMotionState_FUN_0040cb00
              (&model_ptr->motion_controller,"motion state");
  }
  if (2 < INT_005be078) {
    core_actor_cpp_archiveFloat_FUN_0040c880
              (&param_1[1].base.model.bone_transform.pose_data.bone_rotations[0x53].z,
               "wolfSize");
  }
  if (3 < INT_005be078) {
    core_actor_cpp_archiveString_FUN_0040c6d0
              (param_1[1].base.base.create_event + 0xc,"nameOfWolf");
  }
  if (INT_005be078 < 6) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040c6d0
            (param_1[1].base.base.create_event + 0x2c,"transformWav");
  return;
}
