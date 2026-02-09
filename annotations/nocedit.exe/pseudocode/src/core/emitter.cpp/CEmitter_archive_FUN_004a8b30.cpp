// Name: core_emitter.cpp_CEmitter_archive_FUN_004a8b30
// Address: 004a8b30
// Address Range: [[004a8b30, 004a8d01]]
// Convention: __cdecl
// Signature: void __cdecl core_emitter_cpp_CEmitter_archive_FUN_004a8b30(CEmitter *this_ptr)

#include "nocturne.h"

void __cdecl core_emitter_cpp_CEmitter_archive_FUN_004a8b30(CEmitter *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c1c0(&this_ptr->base);
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->emitter_type,"emitterType");
  core_actor_cpp_archiveVector_FUN_0040b340(&this_ptr->emitter_size,"emitterSize");
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->event_on,"eventOn");
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->event_off,"eventOff");
  if (1 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->emitter_state,"emitterState");
  }
  if (this_ptr->emitter_type == 3) {
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->laser_r,"laserR");
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->laser_g,"laserG");
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->laser_b,"laserB");
    if (2 < g_CEmitterClassVersion) {
      core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->laser_type,"laserType");
    }
  }
  if (2 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->max_emit_time,"maxEmitTime");
    core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->emit_period,"emitPeriod");
  }
  if (3 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b8f0(&this_ptr->model,"modelName")
    ;
    core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->rock_speed,"rockSpeed");
  }
  if (4 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->periodic_flag,"periodicFlag");
    core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->max_wait_time,"maxWaitTime");
  }
  if (5 < g_CEmitterClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b870
              ((CDemonActor *)&this_ptr->dest_actor,"destActor");
  }
  if (g_CEmitterClassVersion < 7) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->wav_name,"wavName");
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->sfx_type,"sfxType");
  return;
}
