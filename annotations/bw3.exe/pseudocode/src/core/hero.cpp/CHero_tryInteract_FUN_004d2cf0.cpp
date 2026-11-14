// Name: core_hero.cpp_CHero_tryInteract_FUN_004d2cf0
// Address: 004d2cf0
// Address Range: [[004d2cf0, 004d2e93]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_tryInteract_FUN_004d2cf0(CHero *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_hero_cpp_CHero_tryInteract_FUN_004d2cf0(CHero *this_ptr)

{
  CDemonSet *pCVar1;
  int iVar2;
  float unaff_EBX;
  uint *puVar3;
  CDemonActor *unaff_EDI;
  CDemonActor ***pppCVar4;
  int iVar5;
  byte bVar6;
  float afStackY_1054 [18];
  CDemonActor *apCStackY_100c [983];
  CBoundingBox3D *in_stack_ffffff58;
  CDemonActor **local_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float local_8c;
  float fStack_88;
  uint auStack_84 [6];
  float fStack_6c;
  float afStack_68 [4];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  uint uStack_34;
  float fStack_30;
  float afStack_2c [2];
  CVector3f CStack_24;
  CDemonActor *apCStack_18 [2];
  
  bVar6 = 0;
  (*((this_ptr->base).base.vtable._ub)->getBoundingBox)((CDemonActor *)this_ptr,in_stack_ffffff58);
  puVar3 = auStack_84;
  pppCVar4 = &local_a4;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pppCVar4 = (CDemonActor **)*puVar3;
    puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
    pppCVar4 = pppCVar4 + (uint)bVar6 * -2 + 1;
  }
  fStack_48 = fStack_9c + fStack_90;
  fStack_44 = fStack_98 + local_8c;
  fStack_40 = fStack_94 + fStack_88;
  afStack_68[2] = fStack_9c + fStack_90;
  afStack_68[(uint)bVar6 * -2 + 3] = afStack_68[(uint)bVar6 * -2 + 9];
  afStack_68[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
       afStack_68[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
  fStack_54 = afStack_68[2] * _DAT_005c4d01;
  fStack_50 = afStack_68[3] * _DAT_005c4d01;
  fStack_4c = fStack_58 * _DAT_005c4d01;
  fStack_6c = afStack_68[2] * _DAT_005c4d01;
  afStack_68[(uint)bVar6 * -2] = afStack_68[(uint)bVar6 * -2 + 6];
  afStack_68[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       afStack_68[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
  fStack_38 = afStack_68[0];
  local_a4 = (CDemonActor **)(afStack_68 + 0xb);
  fStack_3c = 0.0;
  uStack_34 = 0x3fc00000;
  core_actor_cpp_FUN_00408b80(this_ptr);
  CStack_24.x = fStack_30;
  apCStack_18[(uint)bVar6 * -2 + -2] = (CDemonActor *)afStack_2c[(uint)bVar6 * -2];
  apCStack_18[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -1] =
       (CDemonActor *)afStack_2c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  iVar2 = 0;
  for (iVar5 = 0; iVar5 < g_CDemonSetPtr->actor_count; iVar5 = iVar5 + 1) {
    local_a4 = apCStack_18;
    apCStack_18[0] = *(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar2);
    fStack_a0 = (*((apCStack_18[0]->vtable)._ub)->evaluateTriggerCondition)
                          (apCStack_18[0],(CDemonActor *)this_ptr,&CStack_24);
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
