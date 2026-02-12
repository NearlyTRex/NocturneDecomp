// Name: core_emitter.cpp_CEmitter_ctor_FUN_004a7ca0
// Address: 004a7ca0
// Address Range: [[004a7ca0, 004a7df6]]
// Convention: __cdecl
// Signature: CEmitter * __cdecl core_emitter_cpp_CEmitter_ctor_FUN_004a7ca0(CEmitter *this_ptr)

#include "nocturne.h"

CEmitter * __cdecl core_emitter_cpp_CEmitter_ctor_FUN_004a7ca0(CEmitter *this_ptr)

{
  char cVar1;
  CEmitter *pCVar2;
  CEmitter_ptr_584 this_ptr_00;
  char *pcVar2;
  char *pcVar3;
  
  pCVar2 = (CEmitter *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&pCVar2->model);
  ADJ(this_ptr_00)->base.vtable._ub = &g_CEmitterVTable;
  (ADJ(this_ptr_00)->emitter_size).x = 1.0;
  pcVar2 = "none";
  (ADJ(this_ptr_00)->emitter_size).y = 1.0;
  (ADJ(this_ptr_00)->emitter_size).z = 1.0;
  pcVar3 = ADJ(this_ptr_00)->event_on;
  ADJ(this_ptr_00)->emitter_type = 0;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  pcVar2 = "none";
  pcVar3 = ADJ(this_ptr_00)->event_off;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  this_ptr_00[1].model_name[4] = '\0';
  this_ptr_00[1].model_name[5] = '\0';
  this_ptr_00[1].model_name[6] = '\0';
  this_ptr_00[1].model_name[7] = '\0';
  ADJ(this_ptr_00)->emit_period = 0.1;
  ADJ(this_ptr_00)->emitter_state = 1;
  ADJ(this_ptr_00)->laser_r = 0xff;
  ADJ(this_ptr_00)->laser_g = 0;
  ADJ(this_ptr_00)->laser_b = 0;
  ADJ(this_ptr_00)->laser_type = 1;
  ADJ(this_ptr_00)->max_emit_time = 0.0;
  this_ptr_00[1].model_name[0xc] = '\0';
  this_ptr_00[1].model_name[0xd] = '\0';
  this_ptr_00[1].model_name[0xe] = '\0';
  this_ptr_00[1].model_name[0xf] = '\0';
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"stalrock.kfm");
  ADJ(this_ptr_00)->rock_speed = 20.0;
  ADJ(this_ptr_00)->periodic_flag = 0;
  ADJ(this_ptr_00)->max_wait_time = 0.0;
  ADJ(this_ptr_00)->dest_actor = 0;
  ADJ(this_ptr_00)->wav_name[0] = '\0';
  ADJ(this_ptr_00)->sfx_type = 1;
  this_ptr_00[1].model_name[0x50] = '\0';
  this_ptr_00[1].model_name[0x51] = '\0';
  this_ptr_00[1].model_name[0x52] = '\0';
  this_ptr_00[1].model_name[0x53] = '\0';
  return ADJ(this_ptr_00);
}
