// Name: core_grave.cpp_FUN_004ca1d0
// Address: 004ca1d0
// Address Range: [[004ca1d0, 004ca28c]]
// Convention: unknown
// Signature: void core_grave_cpp_FUN_004ca1d0(CGrave *param_1,float param_2)

#include "nocturne.h"

void core_grave_cpp_FUN_004ca1d0(CGrave *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  CKeyFramedModel *pCVar4;
  
  if (*(int *)&param_1->field_0x438 == 0) {
    if (*(int *)&param_1->field_0x43c == 0) {
      iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                        (0x01C38BC0,&param_1->field_0x444);
      if (iVar3 != 0) {
        core_grave_cpp_FUN_004ca3e0(param_1);
      }
    }
    if (*(int *)&param_1->field_0x43c == 1) {
      pCVar4 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
                         ((CKeyFramedModelInstance *)&param_1->field_0x2b4);
      fVar2 = (float)(*(int *)&pCVar4->field_0x100 + -1);
      fVar1 = *(float *)&param_1->field_0x434 * param_2 + *(float *)&param_1->field_0x430;
      *(float *)&param_1->field_0x430 = fVar1;
      if (fVar2 <= fVar1) {
        *(uint *)&param_1->field_0x43c = 2;
        *(float *)&param_1->field_0x430 = fVar2;
        return;
      }
    }
  }
  else {
    *(uint *)&param_1->field_0x104 = 1;
  }
  return;
}
