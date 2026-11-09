// Name: core_emitter.cpp_FUN_00487990
// Address: 00487990
// Address Range: [[00487990, 00487c68]]
// Convention: unknown
// Signature: void core_emitter_cpp_FUN_00487990(CDemonActor *param_1)

#include "nocturne.h"

void core_emitter_cpp_FUN_00487990(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(param_1);
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)(param_1 + 1),"?emitterType" + 1);
  core_actor_cpp_archiveVector_FUN_0040b4b0(&param_1[1].field_0x4,"emitterSize");
  core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x14,"eventOn");
  core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x78,"eventOff");
  if (1 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&param_1[1].field_0x10,"emitterState");
  }
  if (*(int *)(param_1 + 1) == 3) {
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0xe4,"laserR");
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0xe8,"laserG");
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0xec,"laserB");
    if (2 < g_CEmitterClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0xe0,"laserType")
      ;
    }
  }
  if (2 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0xdc,"maxEmitTime");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[2].field_0x5c,"emitPeriod");
  }
  if (3 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60
              (&param_1[1].field_0xf0,"modelName");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x26c,"rockSpeed");
  }
  if (4 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&param_1[1].field_0x28c,"periodicFlag");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x290,"maxWaitTime");
  }
  if (5 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b9e0(&param_1[1].field_0x298,"destActor");
  }
  if (6 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x2a0,"wavName");
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[2].field_0x54,"sfxType");
  }
  if (7 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x270,"windResist");
  }
  if (8 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x29c,"soundRadius");
  }
  if (9 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x274,"maxSpeed");
  }
  if (10 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&param_1[1].field_0x278,"EFireflyType");
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x27c,"fizzle");
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x280,"bright");
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x284,"deltaMult");
  }
  if (0xb < g_CEmitterClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x288,"FFSize");
  }
  if (0xc < g_CEmitterClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[2].field_0xac,"emitRadius");
  }
  if (g_CEmitterClassVersion < 0xe) {
    return;
  }
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[2].field_0xb0,"bloodVel");
  return;
}
