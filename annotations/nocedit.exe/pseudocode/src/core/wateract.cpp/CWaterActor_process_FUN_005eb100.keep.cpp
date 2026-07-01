// Name: core_wateract.cpp_CWaterActor_process_FUN_005eb100
// Address: 005eb100
// MANUAL RECONSTRUCTION
// Address Range: [[005eb100, 005eb276]]
// Convention: __cdecl
// Signature: void __cdecl core_wateract_cpp_CWaterActor_process_FUN_005eb100(CWaterActor *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_wateract_cpp_CWaterActor_process_FUN_005eb100(CWaterActor *this_ptr,float delta_time)

{
  float fVar2;
  int iVar4;
  int iVar2;
  int iVar3;
  float fVar1;
  CEventList *this_ptr_00;
  
  iVar2 = this_ptr->texture_anim_accum +
          (int)ROUND(ROUND(delta_time * (float)65536 * (float)8));
  this_ptr->texture_anim_accum = iVar2;
  if (0x10000 < iVar2) {
    iVar3 = this_ptr->texture_frame + 1;
    this_ptr->texture_anim_accum = iVar2 + -0x10000;
    this_ptr->texture_frame = iVar3;
    if (0xf < iVar3) {
      this_ptr->texture_frame = 0;
    }
  }
  this_ptr_00 = g_CEventListPtr;
  this_ptr->inv_delta_time = 1.0 / delta_time;
  iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0(this_ptr_00,this_ptr->move_event)
  ;
  if (iVar4 != 0) {
    this_ptr->state = 1;
  }
  iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                    (g_CEventListPtr,this_ptr->move_down_event);
  if (iVar4 != 0) {
    this_ptr->state = 3;
  }
  switch(this_ptr->state) {
  case 1:
    fVar1 = delta_time / this_ptr->time_to_move + this_ptr->param;
    this_ptr->param = fVar1;
    if (fVar1 <= 1.0) break;
    this_ptr->state = 2;
  case 2:
    this_ptr->param = 1.0;
    break;
  case 3:
    fVar2 = this_ptr->param - delta_time / this_ptr->time_to_move_down;
    this_ptr->param = fVar2;
    if (0.0 <= fVar2) break;
    this_ptr->state = 0;
  case 0:
    this_ptr->param = 0.0;
    break;
  default:
    g_CurrentFilename = "..\\core\\wateract.cpp";
    g_CurrentLineNumber = 421;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CWaterActor::process - Bad state");
  }
  (this_ptr->base).location.position.y = this_ptr->height_delta * this_ptr->param + this_ptr->base_y
  ;
  return;
}
