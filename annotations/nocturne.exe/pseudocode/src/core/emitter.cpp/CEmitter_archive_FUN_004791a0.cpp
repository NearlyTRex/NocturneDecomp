// Name: core_emitter.cpp_CEmitter_archive_FUN_004791a0
// Address: 004791a0
// Address Range: [[004791a0, 00479371]]
// Convention: __cdecl
// Signature: void __cdecl core_emitter_cpp_CEmitter_archive_FUN_004791a0(CEmitter *this_ptr)

#include "nocturne.h"

void __cdecl core_emitter_cpp_CEmitter_archive_FUN_004791a0(CEmitter *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(&this_ptr->base);
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->emitter_type,"emitterType");
  core_actor_cpp_archiveVector_FUN_0040c450(&this_ptr->emitter_size,"emitterSize");
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->event_on,"eventOn");
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->event_off,"eventOff");
  if (1 < INT_005b75dc) {
    core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->emitter_state,"emitterState");
  }
  if (this_ptr->emitter_type == 3) {
    core_actor_cpp_archiveInteger_FUN_0040c900(&(this_ptr->laser_color).r,"laserR");
    core_actor_cpp_archiveInteger_FUN_0040c900(&(this_ptr->laser_color).g,"laserG");
    core_actor_cpp_archiveInteger_FUN_0040c900(&(this_ptr->laser_color).b,"laserB");
    if (2 < INT_005b75dc) {
      core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->laser_type,"laserType");
    }
  }
  if (2 < INT_005b75dc) {
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->max_emit_time,"maxEmitTime");
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->emit_period,"emitPeriod");
  }
  if (3 < INT_005b75dc) {
    core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(&this_ptr->model,"modelName")
    ;
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->rock_speed,"rockSpeed");
  }
  if (4 < INT_005b75dc) {
    core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->periodic_flag,"periodicFlag");
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->max_wait_time,"maxWaitTime");
  }
  if (5 < INT_005b75dc) {
    core_actor_cpp_archiveActor_FUN_0040c980(&this_ptr->dest_actor,"destActor");
  }
  if (INT_005b75dc < 7) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->wav_name,"wavName");
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->sfx_type,"sfxType");
  return;
}
