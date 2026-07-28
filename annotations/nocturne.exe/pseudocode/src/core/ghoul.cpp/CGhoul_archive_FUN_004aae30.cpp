// Name: core_ghoul.cpp_CGhoul_archive_FUN_004aae30
// Address: 004aae30
// Address Range: [[004aae30, 004aaf34]]
// Convention: unknown
// Signature: void core_ghoul_cpp_CGhoul_archive_FUN_004aae30(CEnemy *param_1)

#include "nocturne.h"

void core_ghoul_cpp_CGhoul_archive_FUN_004aae30(CEnemy *param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(param_1);
  if (INT_005b9650 < 4) {
    core_actor_cpp_archiveFloat_FUN_0040c880(&param_1->speed,"speed");
  }
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80
            (&(param_1->base).model,"modelName");
  if ((1 < INT_005b9650) && (INT_005b9650 < 7)) {
    core_actor_cpp_archiveFloat_FUN_0040c880(&param_1->guard_distance,"guardDistance");
  }
  if (2 < INT_005b9650) {
    core_actor_cpp_archiveInteger_FUN_0040c900
              ((int *)(param_1[1].base.base.actor_name + 0x1c),"livesLeft");
  }
  if (4 < INT_005b9650) {
    core_actor_cpp_archiveMotionState_FUN_0040cb00
              (&(param_1->base).model.motion_controller,"motion state");
  }
  if (INT_005b9650 < 6) {
    return;
  }
  core_actor_cpp_archivePartStatus_FUN_0040cbf0(&(param_1->base).model,"partStatus");
  core_actor_cpp_archiveInteger_FUN_0040c900
            ((int *)&param_1[1].base.base.location,"spasmCount");
  core_actor_cpp_archiveInteger_FUN_0040c900
            ((int *)(param_1[1].base.base.actor_name + 0x1c),"livesLeft");
  core_actor_cpp_archiveInteger_FUN_0040c900
            ((int *)(param_1[1].base.base.actor_name + 0xc),"ariseTimer");
  return;
}
