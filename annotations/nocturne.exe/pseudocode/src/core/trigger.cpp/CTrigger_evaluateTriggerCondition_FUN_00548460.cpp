// Name: core_trigger.cpp_CTrigger_evaluateTriggerCondition_FUN_00548460
// Address: 00548460
// Address Range: [[00548460, 005484f9]]
// Convention: __cdecl
// Signature: float __cdecl core_trigger_cpp_CTrigger_evaluateTriggerCondition_FUN_00548460(CTrigger *this_ptr,CDemonActor *querying_actor,CVector3f *query_position)

#include "nocturne.h"

float __cdecl core_trigger_cpp_CTrigger_evaluateTriggerCondition_FUN_00548460(CTrigger *this_ptr,CDemonActor *querying_actor,CVector3f *query_position)

{
  CVector3f *pCVar1;
  CBoundingBox3D *pCVar2;
  CBoundingBox3D CStack_30;
  CVector3f local_18;
  
  if (this_ptr->hero_triggers_me == 3) {
    pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                       (&this_ptr->base,&local_18,query_position);
    pCVar2 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_30);
    if (((((pCVar2->min).x <= pCVar1->x) && ((pCVar2->min).y <= pCVar1->y)) &&
        ((pCVar2->min).z <= pCVar1->z)) &&
       (((pCVar1->x <= (pCVar2->max).x && (pCVar1->y <= (pCVar2->max).y)) &&
        (pCVar1->z <= (pCVar2->max).z)))) {
      return 0.0;
    }
  }
  return -1.0;
}
