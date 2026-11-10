// Name: core_wateract.cpp_CWaterActor_process_FUN_005aaeb0
// Address: 005aaeb0
// Address Range: [[005aaeb0, 005aaf7d] [005aafe6, 005ab026]]
// Convention: __cdecl
// Signature: void __cdecl core_wateract_cpp_CWaterActor_process_FUN_005aaeb0(CWaterActor *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_wateract_cpp_CWaterActor_process_FUN_005aaeb0(CWaterActor *this_ptr,float delta_time)

{
  float fVar1;
  CEventList *this_ptr_00;
  int extraout_EDX;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  fVar4 = (float10)delta_time * (float10)_DAT_005f9302 * (float10)_DAT_005f930a;
  round();
  iVar2 = extraout_EDX + (int)ROUND(fVar4);
  this_ptr->texture_anim_accum = iVar2;
  if (0x10000 < iVar2) {
    iVar3 = this_ptr->texture_frame + 1;
    this_ptr->texture_anim_accum = iVar2 + -0x10000;
    this_ptr->texture_frame = iVar3;
    if (0xf < iVar3) {
      this_ptr->texture_frame = 0;
    }
  }
  this_ptr_00 = 0x01C51D80;
  this_ptr->inv_delta_time = 1.0 / delta_time;
  iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30(this_ptr_00,this_ptr->move_event)
  ;
  if (iVar2 != 0) {
    this_ptr->state = WATER_ACTOR_RISING;
  }
  iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (0x01C51D80,this_ptr->move_down_event);
  if (iVar2 != 0) {
    this_ptr->state = WATER_ACTOR_LOWERING;
  }
  switch(this_ptr->state) {
  case WATER_ACTOR_RISING:
    fVar1 = delta_time / this_ptr->time_to_move + this_ptr->param;
    this_ptr->param = fVar1;
    if (fVar1 <= 1.0) break;
    this_ptr->state = WATER_ACTOR_RAISED;
  case WATER_ACTOR_RAISED:
    this_ptr->param = 1.0;
    break;
  case WATER_ACTOR_LOWERING:
    fVar1 = this_ptr->param - delta_time / this_ptr->time_to_move_down;
    this_ptr->param = fVar1;
    if (0.0 <= fVar1) break;
    this_ptr->state = WATER_ACTOR_LOWERED;
  case WATER_ACTOR_LOWERED:
    this_ptr->param = 0.0;
    break;
  default:
    _DAT_01d1d400 = "..\\core\\wateract.cpp";
    _DAT_01d1d404 = 0x1a5;
    core_main_c_FUN_005030e0("CWaterActor::process - Bad state");
  }
  (this_ptr->base).location.position.y = this_ptr->height_delta * this_ptr->param + this_ptr->base_y
  ;
  return;
}
