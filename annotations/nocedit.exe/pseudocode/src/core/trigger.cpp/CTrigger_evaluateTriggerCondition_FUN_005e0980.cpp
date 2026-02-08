// Name: core_trigger.cpp_CTrigger_evaluateTriggerCondition_FUN_005e0980
// Address: 005e0980
// Address Range: [[005e0980, 005e0a19]]
// Convention: __cdecl
// Signature: int __cdecl core_trigger_cpp_CTrigger_evaluateTriggerCondition_FUN_005e0980(CTrigger *this_ptr)

#include "nocturne.h"

int __cdecl core_trigger_cpp_CTrigger_evaluateTriggerCondition_FUN_005e0980(CTrigger *this_ptr)

{
  CVector3f *pCVar1;
  CBoundingBox3D *pCVar2;
  CVector3f *in_stack_0000000c;
  CBoundingBox3D CStack_30;
  CVector3f local_18;
  
  if (this_ptr->hero_triggers_me == 3) {
    pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                       (&this_ptr->base,&local_18,in_stack_0000000c);
    pCVar2 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_30);
    if (((((pCVar2->min).x <= pCVar1->x) && ((pCVar2->min).y <= pCVar1->y)) &&
        ((pCVar2->min).z <= pCVar1->z)) &&
       (((pCVar1->x <= (pCVar2->max).x && (pCVar1->y <= (pCVar2->max).y)) &&
        (pCVar1->z <= (pCVar2->max).z)))) {
      return 0;
    }
  }
  return -0x40800000;
}
