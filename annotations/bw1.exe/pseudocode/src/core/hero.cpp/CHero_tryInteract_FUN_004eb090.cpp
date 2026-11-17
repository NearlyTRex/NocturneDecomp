// Name: core_hero.cpp_CHero_tryInteract_FUN_004eb090
// Address: 004eb090
// Address Range: [[004eb090, 004eb233]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_tryInteract_FUN_004eb090(CHero *this_ptr)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_tryInteract_FUN_004eb090(CHero *this_ptr)

{
  CDemonSet *pCVar1;
  int iVar2;
  float unaff_EBX;
  uint *puVar3;
  CDemonActor *unaff_EDI;
  uint *puVar4;
  int iVar5;
  byte bVar6;
  float afStackY_1054 [1001];
  CBoundingBox3D *in_stack_ffffff58;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float local_8c;
  float fStack_88;
  float fStack_6c;
  float fStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  CVector3f CStack_3c;
  CVector3f CStack_30;
  CVector3f CStack_24;
  CDemonActor *pCStack_18;
  
  bVar6 = 0;
  (*((this_ptr->base).base.vtable._ub)->getBoundingBox)((CDemonActor *)this_ptr,in_stack_ffffff58);
  puVar3 = (uint *)&stack0xffffff7c;
  puVar4 = (uint *)&stack0xffffff5c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
  }
  fStack_48 = fStack_9c + fStack_90;
  fStack_44 = fStack_98 + local_8c;
  fStack_40 = fStack_94 + fStack_88;
  fStack_60 = fStack_9c + fStack_90;
  *(uint *)((int)&stack0xffffffa4 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffffbc + (uint)bVar6 * -8);
  *(uint *)((int)&stack0xffffffa8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffffc0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  fStack_54 = fStack_60 * 0.5f;
  fStack_50 = fStack_5c * 0.5f;
  fStack_4c = fStack_58 * 0.5f;
  fStack_6c = fStack_60 * 0.5f;
  *(uint *)((int)&stack0xffffff98 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffffb0 + (uint)bVar6 * -8);
  *(uint *)(&stack0xffffff9c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffffb4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  CStack_3c.y = fStack_68;
  CStack_3c.x = 0.0;
  CStack_3c.z = 1.5;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
            ((CDemonActor *)this_ptr,&CStack_3c,&CStack_30);
  CStack_24.x = CStack_30.x;
  *(uint *)((int)&CStack_24 + (uint)bVar6 * -8 + 4) =
       *(uint *)((int)&CStack_30 + (uint)bVar6 * -8 + 4);
  *(uint *)((int)&CStack_24 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
       *(uint *)((int)&CStack_30 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  iVar2 = 0;
  for (iVar5 = 0; iVar5 < g_CDemonSetPtr->actor_count; iVar5 = iVar5 + 1) {
    pCStack_18 = *(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar2);
    fStack_a0 = (*((pCStack_18->vtable)._ub)->evaluateTriggerCondition)
                          (pCStack_18,(CDemonActor *)this_ptr,&CStack_24);
    pCVar1 = g_CDemonSetPtr;
    if ((0.0 <= fStack_a0) && (fStack_a0 < unaff_EBX)) {
      this_ptr->hero_action = 1;
      this_ptr->hero_action_actor = *(CDemonActor **)((int)pCVar1->actors + iVar2);
      this_ptr->hero_action_range = 0.0;
      this_ptr->hero_action_target = unaff_EDI;
      unaff_EBX = fStack_a0;
    }
    iVar2 = iVar2 + 4;
  }
  return (uint)(this_ptr->hero_action == 1);
}
