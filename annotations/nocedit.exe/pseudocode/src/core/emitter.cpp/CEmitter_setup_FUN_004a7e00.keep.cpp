// Name: core_emitter.cpp_CEmitter_setup_FUN_004a7e00
// Address: 004a7e00
// MANUAL RECONSTRUCTION
// Address Range: [[004a7e00, 004a7e74]]
// Convention: __cdecl
// Signature: void __cdecl core_emitter_cpp_CEmitter_setup_FUN_004a7e00(CEmitter *this_ptr)

#include "nocturne.h"

void __cdecl core_emitter_cpp_CEmitter_setup_FUN_004a7e00(CEmitter *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  this_ptr->state_timer = this_ptr->max_emit_time;
  if (this_ptr->emitter_type == 4) {
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->model);
  }
  if (this_ptr->dest_actor == (CDemonActor *)0x0) {
#if NOCTURNE_AUTHENTIC_NETPLAY
    this_ptr->dest_actor = (CDemonActor *)g_HeroActors[g_LocalHeroIndex];
#else
    this_ptr->dest_actor = (CDemonActor *)nocturne_net_sim_target_for((CDemonActor *)this_ptr);
#endif
  }
  this_ptr->sfx_handle = 0;
  this_ptr->was_active = 0;
  this_ptr->prev_emitter_state = this_ptr->emitter_state;
  return;
}
