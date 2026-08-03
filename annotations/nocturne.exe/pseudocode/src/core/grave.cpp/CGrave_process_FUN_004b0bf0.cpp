// Name: core_grave.cpp_CGrave_process_FUN_004b0bf0
// Address: 004b0bf0
// Address Range: [[004b0bf0, 004b0cac]]
// Convention: __cdecl
// Signature: void __cdecl core_grave_cpp_CGrave_process_FUN_004b0bf0(CGrave *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_grave_cpp_CGrave_process_FUN_004b0bf0(CGrave *this_ptr,float delta_time)

{
  float fVar1;
  float fVar2;
  int iVar3;
  CKeyFramedModel *pCVar4;
  
  if (this_ptr->animation_started == 0) {
    if (this_ptr->grave_state == 0) {
      iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                        (0x01C03A10,this_ptr->start_condition);
      if (iVar3 != 0) {
        core_grave_cpp_CGrave_startAnimation_FUN_004b0dc0(this_ptr);
      }
    }
    if (this_ptr->grave_state == 1) {
      pCVar4 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(&this_ptr->model);
      fVar2 = (float)(pCVar4->frame_count + -1);
      fVar1 = this_ptr->fps * delta_time + this_ptr->cur_frame;
      this_ptr->cur_frame = fVar1;
      if (fVar2 <= fVar1) {
        this_ptr->grave_state = 2;
        this_ptr->cur_frame = fVar2;
        return;
      }
    }
  }
  else {
    (this_ptr->base).process_disabled = 1;
  }
  return;
}
