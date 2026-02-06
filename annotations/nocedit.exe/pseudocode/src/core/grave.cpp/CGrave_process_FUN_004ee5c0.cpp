// Name: core_grave.cpp_CGrave_process_FUN_004ee5c0
// Address: 004ee5c0
// Address Range: [[004ee5c0, 004ee67c]]
// Convention: __cdecl
// Signature: void __cdecl core_grave_cpp_CGrave_process_FUN_004ee5c0(CGrave *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_grave_cpp_CGrave_process_FUN_004ee5c0(CGrave *this_ptr,float delta_time)

{
  float fVar1;
  float fVar2;
  int iVar3;
  CKeyFramedModel *pCVar4;
  
  if (*(int *)this_ptr->unk1 == 0) {
    if (this_ptr->grave_state == 0) {
      iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                        (g_CEventListPtr,this_ptr->start_condition);
      if (iVar3 != 0) {
        core_grave_cpp_CGrave_FUN_004ee790(this_ptr);
      }
    }
    if (this_ptr->grave_state == 1) {
      pCVar4 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
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
    (this_ptr->base).unk7 = 1.4013e-45;
  }
  return;
}
