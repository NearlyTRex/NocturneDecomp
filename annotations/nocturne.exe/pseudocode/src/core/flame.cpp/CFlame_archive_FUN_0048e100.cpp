// Name: core_flame.cpp_CFlame_archive_FUN_0048e100
// Address: 0048e100
// Address Range: [[0048e100, 0048e21a]]
// Convention: unknown
// Signature: void core_flame_cpp_CFlame_archive_FUN_0048e100(CDemonActor *param_1)

#include "nocturne.h"

void core_flame_cpp_CFlame_archive_FUN_0048e100(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveVector_FUN_0040c450((CVector3f *)(param_1 + 1),"flameSize");
  if (1 < INT_005b91c0) {
    core_actor_cpp_archiveInteger_FUN_0040c900
              ((int *)&param_1[1].orient_matrix.m[1].z,"whichFlame");
    core_actor_cpp_archiveFloat_FUN_0040c880
              (&param_1[1].orient_matrix.m[2].x,"globeScalar");
  }
  if (2 < INT_005b91c0) {
    core_actor_cpp_archiveString_FUN_0040c6d0((char *)&param_1[1].runtime_state,"onEvent");
  }
  if (3 < INT_005b91c0) {
    core_actor_cpp_archiveString_FUN_0040c6d0(param_1[1].create_event + 0x4c,"onEvent");
  }
  if (4 < INT_005b91c0) {
    core_actor_cpp_archiveInteger_FUN_0040c900
              ((int *)&param_1[1].orient_matrix.m[2].z,"flameState");
  }
  if (5 < INT_005b91c0) {
    core_actor_cpp_archiveFloat_FUN_0040c880
              ((float *)&param_1[1].previous_transform_state,"intensity");
    core_actor_cpp_archiveFloat_FUN_0040c880
              (&param_1[1].previous_transform_state.position.y,"randomness");
  }
  if (INT_005b91c0 < 7) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900
            ((int *)&param_1[1].previous_transform_state.position.z,"burnHero");
  core_actor_cpp_archiveInteger_FUN_0040c900
            ((int *)&param_1[1].previous_transform_state.orientation,"burnEnemy");
  return;
}
