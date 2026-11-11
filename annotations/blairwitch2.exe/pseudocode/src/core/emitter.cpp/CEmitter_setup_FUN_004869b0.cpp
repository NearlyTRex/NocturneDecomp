// Name: core_emitter.cpp_CEmitter_setup_FUN_004869b0
// Address: 004869b0
// Address Range: [[004869b0, 00486a73]]
// Convention: __cdecl
// Signature: void __cdecl core_emitter_cpp_CEmitter_setup_FUN_004869b0(CEmitter *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_emitter_cpp_CEmitter_setup_FUN_004869b0(CEmitter *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00408a80(&this_ptr->base);
  this_ptr->state_timer = this_ptr->max_emit_time;
  if (this_ptr->emitter_type == EMITTER_TYPE_ROCK) {
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(&this_ptr->model);
  }
  if (this_ptr->emitter_type == EMITTER_TYPE_LEAF) {
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(&this_ptr->model);
  }
  if (this_ptr->emitter_type == EMITTER_TYPE_FIREFLY) {
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(&this_ptr->model);
  }
  if (this_ptr->emitter_type == EMITTER_TYPE_BLOOD) {
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(&this_ptr->model);
  }
  if (this_ptr->dest_actor == (CDemonActor *)0x0) {
    this_ptr->dest_actor = *(CDemonActor **)(_DAT_01cedef4 * 4 + 0x1cedee4);
  }
  this_ptr->sfx_handle = 0;
  this_ptr->was_on_screen = 0;
  this_ptr->prev_emitter_state = this_ptr->emitter_state;
  return;
}
