// Name: core_trigger.cpp_CTrigger_evaluateTriggerCondition_FUN_0056ec60
// Address: 0056ec60
// Address Range: [[0056ec60, 0056ed38]]
// Convention: __cdecl
// Signature: float __cdecl core_trigger_cpp_CTrigger_evaluateTriggerCondition_FUN_0056ec60(CTrigger *this_ptr,CDemonActor *querying_actor,CVector3f *query_position)

#include "nocturne.h"

float __cdecl core_trigger_cpp_CTrigger_evaluateTriggerCondition_FUN_0056ec60(CTrigger *this_ptr,CDemonActor *querying_actor,CVector3f *query_position)

{
  int iVar1;
  uint *puVar2;
  float unaff_EDI;
  uint *puVar3;
  byte bVar4;
  uint *in_stack_00000018;
  float afStackY_1010 [1004];
  CBoundingBox3D *in_stack_ffffffa8;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  uint uStack_28;
  uint uStack_1c;
  float fStack_14;
  float fStack_10;
  
  bVar4 = 0;
  if (this_ptr->trigger_cause == TRIGGER_CAUSE_ACTION_BUTTON) {
    core_actor_cpp_FUN_00408bf0(this_ptr,query_position);
    uStack_1c = uStack_28;
    *(uint *)(&stack0xffffffe8 + (uint)bVar4 * -8) =
         *(uint *)(&stack0xffffffdc + (uint)bVar4 * -8);
    *(uint *)((int)&stack0xffffffec + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)(&stack0xffffffe0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,in_stack_ffffffa8);
    puVar2 = (uint *)&stack0xffffffc8;
    puVar3 = (uint *)&stack0xffffffa8;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    if ((((fStack_50 <= fStack_14) && (fStack_4c <= fStack_10)) && (fStack_48 <= unaff_EDI)) &&
       (((fStack_14 <= fStack_44 && (fStack_10 <= fStack_40)) && (unaff_EDI <= fStack_3c)))) {
      *in_stack_00000018 = *(uint *)&this_ptr->field_0x2fc;
      return 0.0;
    }
  }
  return -1.0;
}
