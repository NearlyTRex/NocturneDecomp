// Name: core_werewolf.cpp_CWerewolf_archive_FUN_00557800
// Address: 00557800
// Address Range: [[00557800, 0055793b]]
// Convention: unknown
// Signature: void core_werewolf_cpp_CWerewolf_archive_FUN_00557800(CEnemy *param_1)

#include "nocturne.h"

void core_werewolf_cpp_CWerewolf_archive_FUN_00557800(CEnemy *param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040c880(&param_1->speed,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80
            (&(param_1->base).model,"modelName");
  if (INT_005c1614 < 3) {
    core_actor_cpp_archiveFloat_FUN_0040c880(&param_1->guard_distance,"guardDistance");
  }
  core_actor_cpp_archiveMotionState_FUN_0040cb00
            (&(param_1->base).model.motion_controller,"motion state");
  if (1 < INT_005c1614) {
    core_actor_cpp_archiveInteger_FUN_0040c900
              ((int *)(param_1[1].base.base.actor_name + 0x18),"lightUpEyes");
  }
  if (3 < INT_005c1614) {
    core_actor_cpp_archiveActor_FUN_0040c980
              ((CDemonActor **)&param_1[1].base.base.location.area_id,"chainAnchor");
    core_actor_cpp_archiveFloat_FUN_0040c880
              ((float *)&param_1[1].base.base.orient,"chainLength");
  }
  if (4 < INT_005c1614) {
    core_actor_cpp_archiveInteger_FUN_0040c900((int *)(param_1 + 1),"type");
  }
  if (INT_005c1614 < 6) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900
            ((int *)&param_1[1].base.base.orient_matrix,"phase");
  core_actor_cpp_archiveFloat_FUN_0040c880
            (&param_1[1].base.base.orient_matrix.m[0].y,"phaseTimer");
  core_actor_cpp_archiveActor_FUN_0040c980
            ((CDemonActor **)&param_1[1].base.base.orient.vec.y,"alpha1");
  core_actor_cpp_archiveActor_FUN_0040c980
            ((CDemonActor **)&param_1[1].base.base.orient.vec.z,"alpha2");
  return;
}
