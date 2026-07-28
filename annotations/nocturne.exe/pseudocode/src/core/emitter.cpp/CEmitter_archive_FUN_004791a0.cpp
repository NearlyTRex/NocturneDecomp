// Name: core_emitter.cpp_CEmitter_archive_FUN_004791a0
// Address: 004791a0
// Address Range: [[004791a0, 00479371]]
// Convention: unknown
// Signature: void core_emitter_cpp_CEmitter_archive_FUN_004791a0(CDemonActor *param_1)

#include "nocturne.h"

void core_emitter_cpp_CEmitter_archive_FUN_004791a0(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveInteger_FUN_0040c900((int *)(param_1 + 1),"emitterType");
  core_actor_cpp_archiveVector_FUN_0040c450
            ((CVector3f *)(param_1[1].actor_name + 4),"emitterSize");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1[1].actor_name + 0x14,"eventOn");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1[1].create_event,"eventOff");
  if (1 < INT_005b75dc) {
    core_actor_cpp_archiveInteger_FUN_0040c900
              ((int *)(param_1[1].actor_name + 0x10),"emitterState");
  }
  if (*(int *)param_1[1].actor_name == 3) {
    core_actor_cpp_archiveInteger_FUN_0040c900
              ((int *)&param_1[1].platform_position_delta.y,"laserR");
    core_actor_cpp_archiveInteger_FUN_0040c900
              ((int *)&param_1[1].platform_position_delta.z,"laserG");
    core_actor_cpp_archiveInteger_FUN_0040c900
              ((int *)&param_1[1].platform_orientation_delta,"laserB");
    if (2 < INT_005b75dc) {
      core_actor_cpp_archiveInteger_FUN_0040c900
                ((int *)&param_1[1].platform_position_delta,"laserType");
    }
  }
  if (2 < INT_005b75dc) {
    core_actor_cpp_archiveFloat_FUN_0040c880
              ((float *)&param_1[1].standing_platform,"maxEmitTime");
    core_actor_cpp_archiveFloat_FUN_0040c880(&param_1[3].orient_matrix.m[1].y,"emitPeriod")
    ;
  }
  if (3 < INT_005b75dc) {
    core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00
              ((CKeyFramedModelInstance *)&param_1[1].platform_orientation_delta.y,
               "modelName");
    core_actor_cpp_archiveFloat_FUN_0040c880
              ((float *)param_1[2].footstep_sound_code,"rockSpeed");
  }
  if (4 < INT_005b75dc) {
    core_actor_cpp_archiveInteger_FUN_0040c900(&param_1[2].dead1,"periodicFlag");
    core_actor_cpp_archiveFloat_FUN_0040c880((float *)&param_1[2].dead2,"maxWaitTime");
  }
  if (5 < INT_005b75dc) {
    core_actor_cpp_archiveActor_FUN_0040c980
              ((CDemonActor **)&param_1[2].previous_transform_state,"destActor");
  }
  if (INT_005b75dc < 7) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040c6d0
            ((char *)&param_1[2].previous_transform_state.position.y,"wavName");
  core_actor_cpp_archiveInteger_FUN_0040c900
            ((int *)&param_1[3].orient_matrix.m[0].z,"sfxType");
  return;
}
