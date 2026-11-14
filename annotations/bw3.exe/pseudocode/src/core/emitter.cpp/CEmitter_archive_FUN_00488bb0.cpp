// Name: core_emitter.cpp_CEmitter_archive_FUN_00488bb0
// Address: 00488bb0
// Address Range: [[00488bb0, 00488e88]]
// Convention: __cdecl
// Signature: void __cdecl core_emitter_cpp_CEmitter_archive_FUN_00488bb0(CEmitter *this_ptr)

#include "nocturne.h"

void __cdecl core_emitter_cpp_CEmitter_archive_FUN_00488bb0(CEmitter *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c280(&this_ptr->base);
  core_actor_cpp_archiveInteger_FUN_0040b8b0
            ((int *)&this_ptr->emitter_type,"?emitterType" + 1);
  core_actor_cpp_archiveVector_FUN_0040b400(&this_ptr->emitter_size,"emitterSize");
  core_actor_cpp_archiveString_FUN_0040b680(this_ptr->event_on,"eventOn");
  core_actor_cpp_archiveString_FUN_0040b680(this_ptr->event_off,"eventOff");
  if (1 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->emitter_state,"emitterState");
  }
  if (this_ptr->emitter_type == EMITTER_TYPE_LASER) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0(&(this_ptr->laser_color).r,"laserR");
    core_actor_cpp_archiveInteger_FUN_0040b8b0(&(this_ptr->laser_color).g,"laserG");
    core_actor_cpp_archiveInteger_FUN_0040b8b0(&(this_ptr->laser_color).b,"laserB");
    if (2 < g_CEmitterClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->laser_type,"laserType");
    }
  }
  if (2 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->max_emit_time,"maxEmitTime");
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->emit_period,"emitPeriod");
  }
  if (3 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b9b0(&this_ptr->model,"modelName")
    ;
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->rock_speed,"rockSpeed");
  }
  if (4 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->periodic_flag,"periodicFlag");
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->max_wait_time,"maxWaitTime");
  }
  if (5 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->dest_actor,"destActor");
  }
  if (6 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b680(this_ptr->wav_name,"wavName");
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->sfx_type,"sfxType");
  }
  if (7 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->wind_resist,"windResist");
  }
  if (8 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->sound_radius,"soundRadius");
  }
  if (9 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->max_speed,"maxSpeed");
  }
  if (10 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->firefly_type,"EFireflyType");
    core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->fizzle,"fizzle");
    core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->bright,"bright");
    core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->delta_mult,"deltaMult");
  }
  if (0xb < g_CEmitterClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->ff_size,"FFSize");
  }
  if (0xc < g_CEmitterClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->emit_radius,"emitRadius");
  }
  if (g_CEmitterClassVersion < 0xe) {
    return;
  }
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->blood_velocity,"bloodVel");
  return;
}
