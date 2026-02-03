// Name: core_emitter.cpp_CEmitter_setup_FUN_004a7e00
// Address: 004a7e00
// Address Range: [[004a7e00, 004a7e0a]]
// Convention: __cdecl
// Signature: void __cdecl core_emitter_cpp_CEmitter_setup_FUN_004a7e00(CEmitter *this_ptr)

#include "nocturne.h"

void __cdecl core_emitter_cpp_CEmitter_setup_FUN_004a7e00(CEmitter *this_ptr)

{
  int iVar1;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  *(float *)this_ptr->unk6 = this_ptr->max_emit_time;
  if (this_ptr->emitter_type == 4) {
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->model);
  }
  if (this_ptr->dest_actor == 0) {
    this_ptr->dest_actor = (int)g_HeroActors[g_LocalHeroIndex];
  }
  this_ptr->unk4[0x60] = '\0';
  this_ptr->unk4[0x61] = '\0';
  this_ptr->unk4[0x62] = '\0';
  this_ptr->unk4[99] = '\0';
  iVar1 = this_ptr->emitter_state;
  this_ptr->unk6[0x44] = '\0';
  this_ptr->unk6[0x45] = '\0';
  this_ptr->unk6[0x46] = '\0';
  this_ptr->unk6[0x47] = '\0';
  *(int *)(this_ptr->unk6 + 0x48) = iVar1;
  return;
}
