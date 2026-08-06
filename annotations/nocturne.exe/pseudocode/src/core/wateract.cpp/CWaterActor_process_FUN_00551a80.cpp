// Name: core_wateract.cpp_CWaterActor_process_FUN_00551a80
// Address: 00551a80
// Address Range: [[00551a80, 00551bf6]]
// Convention: __cdecl
// Signature: void __cdecl core_wateract_cpp_CWaterActor_process_FUN_00551a80(CWaterActor *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_wateract_cpp_CWaterActor_process_FUN_00551a80(CWaterActor *this_ptr,float delta_time)

{
  float fVar1;
  CEventList *this_ptr_00;
  int iVar2;
  int iVar3;
  double dVar4;
  
  iVar2 = this_ptr->texture_anim_accum;
  dVar4 = round
                    ((double)(delta_time * (float)65536 * (float)8));
  iVar2 = iVar2 + (int)ROUND(dVar4);
  this_ptr->texture_anim_accum = iVar2;
  if (0x10000 < iVar2) {
    iVar3 = this_ptr->texture_frame + 1;
    this_ptr->texture_anim_accum = iVar2 + -0x10000;
    this_ptr->texture_frame = iVar3;
    if (0xf < iVar3) {
      this_ptr->texture_frame = 0;
    }
  }
  this_ptr_00 = 0x01C03A10;
  this_ptr->inv_delta_time = 1.0 / (float)this_ptr;
  iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30(this_ptr_00,this_ptr->move_event)
  ;
  if (iVar2 != 0) {
    this_ptr->state = 1;
  }
  iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                    (0x01C03A10,this_ptr->move_down_event);
  if (iVar2 != 0) {
    this_ptr->state = 3;
  }
  switch(this_ptr->state) {
  case 1:
    fVar1 = (float)this_ptr / this_ptr->time_to_move + this_ptr->param;
    this_ptr->param = fVar1;
    if (fVar1 <= 1.0) break;
    this_ptr->state = 2;
  case 2:
    this_ptr->param = 1.0;
    break;
  case 3:
    fVar1 = this_ptr->param - (float)this_ptr / this_ptr->time_to_move_down;
    this_ptr->param = fVar1;
    if (0.0 <= fVar1) break;
    this_ptr->state = 0;
  case 0:
    this_ptr->param = 0.0;
    break;
  default:
    g_CurrentFilename = "..\\core\\wateract.cpp";
    g_CurrentLineNumber = 421;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CWaterActor::process - Bad state");
  }
  (this_ptr->base).location.position.y = this_ptr->height_delta * this_ptr->param + this_ptr->base_y
  ;
  return;
}
