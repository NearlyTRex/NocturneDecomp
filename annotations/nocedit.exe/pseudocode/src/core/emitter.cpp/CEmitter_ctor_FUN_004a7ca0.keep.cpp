// Name: core_emitter.cpp_CEmitter_ctor_FUN_004a7ca0
// Address: 004a7ca0
// MANUAL RECONSTRUCTION
// Address Range: [[004a7ca0, 004a7df6]]
// Convention: __cdecl
// Signature: CEmitter * __cdecl core_emitter_cpp_CEmitter_ctor_FUN_004a7ca0(CEmitter *this_ptr)

#include "nocturne.h"

CEmitter * __cdecl core_emitter_cpp_CEmitter_ctor_FUN_004a7ca0(CEmitter *this_ptr)

{
  CEmitter *pCVar2;
  CEmitter_ptr_584 this_ptr_00;

  pCVar2 = (CEmitter *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&pCVar2->model);
  ADJ(this_ptr_00)->base.vtable._ub = &g_CEmitterVTable;
  (ADJ(this_ptr_00)->emitter_size).x = 1.0;
  (ADJ(this_ptr_00)->emitter_size).y = 1.0;
  (ADJ(this_ptr_00)->emitter_size).z = 1.0;
  ADJ(this_ptr_00)->emitter_type = 0;
  strcpy(ADJ(this_ptr_00)->event_on,"none");
  strcpy(ADJ(this_ptr_00)->event_off,"none");
  ADJ(this_ptr_00)->emit_timer = 0.0;
  ADJ(this_ptr_00)->emit_period = 0.1;
  ADJ(this_ptr_00)->emitter_state = 1;
  (ADJ(this_ptr_00)->laser_color).r = 0xff;
  (ADJ(this_ptr_00)->laser_color).g = 0;
  (ADJ(this_ptr_00)->laser_color).b = 0;
  ADJ(this_ptr_00)->laser_type = 1;
  ADJ(this_ptr_00)->max_emit_time = 0.0;
  ADJ(this_ptr_00)->state_timer = 0.0;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"stalrock.kfm");
  ADJ(this_ptr_00)->rock_speed = 20.0;
  ADJ(this_ptr_00)->periodic_flag = 0;
  ADJ(this_ptr_00)->max_wait_time = 0.0;
  ADJ(this_ptr_00)->dest_actor = (CDemonActor *)0x0;
  ADJ(this_ptr_00)->wav_name[0] = '\0';
  ADJ(this_ptr_00)->sfx_type = 1;
  ADJ(this_ptr_00)->was_active = 0;
  return ADJ(this_ptr_00);
}
