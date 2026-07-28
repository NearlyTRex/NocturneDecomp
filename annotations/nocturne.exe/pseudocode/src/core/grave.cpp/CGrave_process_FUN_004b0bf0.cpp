// Name: core_grave.cpp_CGrave_process_FUN_004b0bf0
// Address: 004b0bf0
// Address Range: [[004b0bf0, 004b0cac]]
// Convention: unknown
// Signature: void core_grave_cpp_CGrave_process_FUN_004b0bf0(CGrave *param_1,float param_2)

#include "nocturne.h"

void core_grave_cpp_CGrave_process_FUN_004b0bf0(CGrave *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  CKeyFramedModel *pCVar4;
  
  if (param_1->animation_started == 0) {
    if (param_1->grave_state == 0) {
      iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                        (0x01C03A10,param_1->start_condition);
      if (iVar3 != 0) {
        core_grave_cpp_CGrave_startAnimation_FUN_004b0dc0(param_1);
      }
    }
    if (param_1->grave_state == 1) {
      pCVar4 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(&param_1->model);
      fVar2 = (float)(pCVar4->frame_count + -1);
      fVar1 = param_1->fps * param_2 + param_1->cur_frame;
      param_1->cur_frame = fVar1;
      if (fVar2 <= fVar1) {
        param_1->grave_state = 2;
        param_1->cur_frame = fVar2;
        return;
      }
    }
  }
  else {
    (param_1->base).process_disabled = 1;
  }
  return;
}
