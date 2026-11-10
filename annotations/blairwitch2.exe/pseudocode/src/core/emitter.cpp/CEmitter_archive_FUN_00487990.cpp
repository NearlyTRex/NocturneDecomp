// Name: core_emitter.cpp_CEmitter_archive_FUN_00487990
// Address: 00487990
// Address Range: [[00487990, 00487c68]]
// Convention: __cdecl
// Signature: void __cdecl core_emitter_cpp_CEmitter_archive_FUN_00487990(CEmitter *this_ptr)

#include "nocturne.h"

void __cdecl core_emitter_cpp_CEmitter_archive_FUN_00487990(CEmitter *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330((CDemonActor *)this_ptr);
  core_actor_cpp_archiveInteger_FUN_0040b960
            ((int *)&this_ptr->field_0x2b4,"?emitterType" + 1);
  core_actor_cpp_archiveVector_FUN_0040b4b0(&this_ptr->field_0x2b8,"emitterSize");
  core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0x2c8,"eventOn");
  core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0x32c,"eventOff");
  if (1 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&this_ptr->field_0x2c4,"emitterState");
  }
  if (*(int *)&this_ptr->field_0x2b4 == 3) {
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->field_0x398,"laserR");
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->field_0x39c,"laserG");
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->field_0x3a0,"laserB");
    if (2 < g_CEmitterClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->field_0x394,"laserType")
      ;
    }
  }
  if (2 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x390,"maxEmitTime");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x5c4,"emitPeriod");
  }
  if (3 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60
              (&this_ptr->field_0x3a4,"modelName");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x520,"rockSpeed");
  }
  if (4 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&this_ptr->field_0x540,"periodicFlag");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x544,"maxWaitTime");
  }
  if (5 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->field_0x54c,"destActor");
  }
  if (6 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0x554,"wavName");
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->field_0x5bc,"sfxType");
  }
  if (7 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x524,"windResist");
  }
  if (8 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x550,"soundRadius");
  }
  if (9 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x528,"maxSpeed");
  }
  if (10 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&this_ptr->field_0x52c,"EFireflyType");
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->field_0x530,"fizzle");
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->field_0x534,"bright");
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->field_0x538,"deltaMult");
  }
  if (0xb < g_CEmitterClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x53c,"FFSize");
  }
  if (0xc < g_CEmitterClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x614,"emitRadius");
  }
  if (g_CEmitterClassVersion < 0xe) {
    return;
  }
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->field_0x618,"bloodVel");
  return;
}
