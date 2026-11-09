// Name: core_emitter.cpp_FUN_00488bb0
// Address: 00488bb0
// Address Range: [[00488bb0, 00488e88]]
// Convention: unknown
// Signature: void core_emitter_cpp_FUN_00488bb0(CDemonActor *param_1)

#include "nocturne.h"

void core_emitter_cpp_FUN_00488bb0(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c280(param_1);
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)(param_1 + 1),"?emitterType" + 1);
  core_actor_cpp_archiveVector_FUN_0040b400(&param_1[1].field_0x4,"emitterSize");
  core_actor_cpp_archiveString_FUN_0040b680(&param_1[1].field_0x14,"eventOn");
  core_actor_cpp_archiveString_FUN_0040b680(&param_1[1].field_0x78,"eventOff");
  if (1 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&param_1[1].field_0x10,"emitterState");
  }
  if (*(int *)(param_1 + 1) == 3) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&param_1[1].field_0xe4,"laserR");
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&param_1[1].field_0xe8,"laserG");
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&param_1[1].field_0xec,"laserB");
    if (2 < g_CEmitterClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&param_1[1].field_0xe0,"laserType")
      ;
    }
  }
  if (2 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[1].field_0xdc,"maxEmitTime");
    core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[3].field_0x60,"emitPeriod");
  }
  if (3 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b9b0
              (&param_1[1].field_0xf0,"modelName");
    core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[2].field_0x114,"rockSpeed");
  }
  if (4 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&param_1[2].field_0x134,"periodicFlag");
    core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[2].field_0x138,"maxWaitTime");
  }
  if (5 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b930(&param_1[2].field_0x140,"destActor");
  }
  if (6 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b680(&param_1[2].field_0x148,"wavName");
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&param_1[3].field_0x58,"sfxType");
  }
  if (7 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[2].field_0x118,"windResist");
  }
  if (8 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[2].field_0x144,"soundRadius");
  }
  if (9 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[2].field_0x11c,"maxSpeed");
  }
  if (10 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&param_1[2].field_0x120,"EFireflyType");
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&param_1[2].field_0x124,"fizzle");
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&param_1[2].field_0x128,"bright");
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&param_1[2].field_0x12c,"deltaMult");
  }
  if (0xb < g_CEmitterClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[2].field_0x130,"FFSize");
  }
  if (0xc < g_CEmitterClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[3].field_0xb0,"emitRadius");
  }
  if (g_CEmitterClassVersion < 0xe) {
    return;
  }
  core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[3].field_0xb4,"bloodVel");
  return;
}
