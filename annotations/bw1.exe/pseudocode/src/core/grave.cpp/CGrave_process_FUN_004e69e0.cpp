// Name: core_grave.cpp_CGrave_process_FUN_004e69e0
// Address: 004e69e0
// Address Range: [[004e69e0, 004e6a9c]]
// Convention: __cdecl
// Signature: void __cdecl core_grave_cpp_CGrave_process_FUN_004e69e0(CGrave *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_grave_cpp_CGrave_process_FUN_004e69e0(CGrave *this_ptr,float delta_time)

{
  float fVar1;
  float fVar2;
  int iVar3;
  CKeyFramedModel *pCVar4;
  
  if (*(int *)&this_ptr->field_0x2dc == 0) {
    if (*(int *)&this_ptr->field_0x2e0 == 0) {
      iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                        (0x01C51D80,&this_ptr->field_0x2e8);
      if (iVar3 != 0) {
        core_grave_cpp_CGrave_startAnimation_FUN_004e6bf0(this_ptr);
      }
    }
    if (*(int *)&this_ptr->field_0x2e0 == 1) {
      pCVar4 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                         ((CKeyFramedModelInstance *)&this_ptr->field_0x158);
      fVar2 = (float)(*(int *)&pCVar4->field_0x100 + -1);
      fVar1 = *(float *)&this_ptr->field_0x2d8 * delta_time + *(float *)&this_ptr->field_0x2d4;
      *(float *)&this_ptr->field_0x2d4 = fVar1;
      if (fVar2 <= fVar1) {
        *(uint *)&this_ptr->field_0x2e0 = 2;
        *(float *)&this_ptr->field_0x2d4 = fVar2;
        return;
      }
    }
  }
  else {
    *(uint *)&this_ptr->field_0x104 = 1;
  }
  return;
}
