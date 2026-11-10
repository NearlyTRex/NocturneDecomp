// Name: core_emitter.cpp_CEmitter_archive_FUN_0049fff0
// Address: 0049fff0
// Address Range: [[0049fff0, 004a02c8]]
// Convention: __cdecl
// Signature: void __cdecl core_emitter_cpp_CEmitter_archive_FUN_0049fff0(CEmitter *this_ptr)

#include "nocturne.h"

void __cdecl core_emitter_cpp_CEmitter_archive_FUN_0049fff0(CEmitter *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c040((CDemonActor *)this_ptr);
  core_actor_cpp_archiveInteger_FUN_0040b670
            ((int *)&this_ptr->field_0x158,"?emitterType" + 1);
  core_actor_cpp_archiveVector_FUN_0040b1c0(&this_ptr->field_0x15c,"emitterSize");
  core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x16c,"eventOn");
  core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x1d0,"eventOff");
  if (1 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670
              ((int *)&this_ptr->field_0x168,"emitterState");
  }
  if (*(int *)&this_ptr->field_0x158 == 3) {
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x23c,"laserR");
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x240,"laserG");
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x244,"laserB");
    if (2 < g_CEmitterClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x238,"laserType")
      ;
    }
  }
  if (2 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x234,"maxEmitTime");
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x468,"emitPeriod");
  }
  if (3 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b770
              (&this_ptr->field_0x248,"modelName");
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x3c4,"rockSpeed");
  }
  if (4 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670
              ((int *)&this_ptr->field_0x3e4,"periodicFlag");
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x3e8,"maxWaitTime");
  }
  if (5 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->field_0x3f0,"destActor");
  }
  if (6 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x3f8,"wavName");
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x460,"sfxType");
  }
  if (7 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x3c8,"windResist");
  }
  if (8 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x3f4,"soundRadius");
  }
  if (9 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x3cc,"maxSpeed");
  }
  if (10 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670
              ((int *)&this_ptr->field_0x3d0,"EFireflyType");
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x3d4,"fizzle");
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x3d8,"bright");
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x3dc,"deltaMult");
  }
  if (0xb < g_CEmitterClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x3e0,"FFSize");
  }
  if (0xc < g_CEmitterClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x4b8,"emitRadius");
  }
  if (g_CEmitterClassVersion < 0xe) {
    return;
  }
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x4bc,"bloodVel");
  return;
}
