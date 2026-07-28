// Name: core_trigger.cpp_CTrigger_evaluateTriggerCondition_FUN_00548460
// Address: 00548460
// Address Range: [[00548460, 005484f9]]
// Convention: unknown
// Signature: undefined4 core_trigger_cpp_CTrigger_evaluateTriggerCondition_FUN_00548460(CDemonActor *param_1,undefined4 param_2,CVector3f *param_3)

#include "nocturne.h"

uint core_trigger_cpp_CTrigger_evaluateTriggerCondition_FUN_00548460(CDemonActor *param_1,uint param_2,CVector3f *param_3)

{
  CVector3f *pCVar1;
  CBoundingBox3D *pCVar2;
  CBoundingBox3D CStack_30;
  CVector3f local_18;
  
  if (*(int *)(param_1[1].actor_name + 0x1c) == 3) {
    pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(param_1,&local_18,param_3);
    pCVar2 = (*((param_1->vtable)._ub)->getBoundingBox)(param_1,&CStack_30);
    if (((((pCVar2->min).x <= pCVar1->x) && ((pCVar2->min).y <= pCVar1->y)) &&
        ((pCVar2->min).z <= pCVar1->z)) &&
       (((pCVar1->x <= (pCVar2->max).x && (pCVar1->y <= (pCVar2->max).y)) &&
        (pCVar1->z <= (pCVar2->max).z)))) {
      return 0;
    }
  }
  return 0xbf800000;
}
