// Name: core_grave.cpp_CGrave_process_FUN_004cf370
// Address: 004cf370
// Address Range: [[004cf370, 004cf42c]]
// Convention: __cdecl
// Signature: void __cdecl core_grave_cpp_CGrave_process_FUN_004cf370(CGrave *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_grave_cpp_CGrave_process_FUN_004cf370(CGrave *this_ptr,float delta_time)

{
  float fVar1;
  float fVar2;
  int iVar3;
  CKeyFramedModel *pCVar4;
  
  if (this_ptr->animation_started == 0) {
    if (this_ptr->grave_state == 0) {
      iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                        (0x01C6E360,this_ptr->start_condition);
      if (iVar3 != 0) {
        core_grave_cpp_CGrave_startAnimation_FUN_004cf580(this_ptr);
      }
    }
    if (this_ptr->grave_state == 1) {
      pCVar4 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(&this_ptr->model);
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
