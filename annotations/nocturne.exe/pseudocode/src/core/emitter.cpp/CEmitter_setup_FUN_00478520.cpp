// Name: core_emitter.cpp_CEmitter_setup_FUN_00478520
// Address: 00478520
// Address Range: [[00478520, 00478594]]
// Convention: __cdecl
// Signature: void __cdecl core_emitter_cpp_CEmitter_setup_FUN_00478520(CEmitter *this_ptr)

#include "nocturne.h"

void __cdecl core_emitter_cpp_CEmitter_setup_FUN_00478520(CEmitter *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(&this_ptr->base);
  this_ptr->state_timer = this_ptr->max_emit_time;
  if (this_ptr->emitter_type == 4) {
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(&this_ptr->model);
  }
  if (this_ptr->dest_actor == (CDemonActor *)0x0) {
    this_ptr->dest_actor = (CDemonActor *)g_HeroActors[g_LocalHeroIndex];
  }
  this_ptr->sfx_handle = 0;
  this_ptr->was_active = 0;
  this_ptr->prev_emitter_state = this_ptr->emitter_state;
  return;
}
