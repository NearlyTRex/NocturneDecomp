// Name: core_hero.cpp_CHero_tryInteract_FUN_004cec50
// Address: 004cec50
// Address Range: [[004cec50, 004cee85]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_tryInteract_FUN_004cec50(CHero *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_hero_cpp_CHero_tryInteract_FUN_004cec50(CHero *this_ptr)

{
  CDemonSet *pCVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  byte bVar7;
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
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  CVector3f CStack_30;
  CVector3f CStack_24;
  CDemonActor *pCStack_18;
  CWeapon *pCStack_14;
  float fVar8;
  
  bVar7 = 0;
  (*((this_ptr->base).base.vtable._ub)->getBoundingBox)((CDemonActor *)this_ptr,in_stack_ffffff58);
  puVar4 = (uint *)&stack0xffffff7c;
  puVar5 = (uint *)&stack0xffffff5c;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
  }
  fStack_3c = fStack_9c + fStack_90;
  fStack_38 = fStack_98 + local_8c;
  fStack_34 = fStack_94 + fStack_88;
  fStack_60 = fStack_9c + fStack_90;
  *(uint *)((int)&stack0xffffffa4 + (uint)bVar7 * -8) =
       *(uint *)((int)&stack0xffffffbc + ((uint)bVar7 * -2 + 3) * 4);
  *(uint *)((int)&stack0xffffffa8 + ((uint)bVar7 * -2 + (uint)bVar7 * -2) * 4) =
       *(uint *)((int)&stack0xffffffbc + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 4) * 4);
  fStack_54 = fStack_60 * 0.5f;
  fStack_50 = fStack_5c * 0.5f;
  fStack_4c = fStack_58 * 0.5f;
  fStack_6c = fStack_60 * 0.5f;
  *(uint *)(&stack0xffffff9c + (uint)bVar7 * -8 + -4) =
       *(uint *)((int)&stack0xffffffb0 + (uint)bVar7 * -8);
  *(uint *)(&stack0xffffff9c + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       *(uint *)((int)&stack0xffffffb4 + ((uint)bVar7 * -2 + (uint)bVar7 * -2) * 4);
  CStack_24.y = fStack_68;
  CStack_24.x = 0.0;
  CStack_24.z = 1.5;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
            ((CDemonActor *)this_ptr,&CStack_24,&CStack_30);
  fStack_48 = CStack_30.x;
  *(uint *)((int)&stack0xffffffbc + (uint)bVar7 * 0xfffffffe * 4) =
       *(uint *)((int)&CStack_30 + (uint)bVar7 * -8 + 4);
  *(uint *)((int)&stack0xffffffbc + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 1) * 4) =
       *(uint *)((int)&CStack_30 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  fVar8 = 1e+30;
  iVar3 = 0;
  for (iVar6 = 0; iVar6 < g_CDemonSetPtr->actor_count; iVar6 = iVar6 + 1) {
    pCStack_18 = *(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar3);
    pCStack_14 = (CWeapon *)
                 core_actor_cpp_castToClassHash_FUN_0040c8f0
                           (pCStack_18,g_CWeaponClassInfo.name_hash);
    fStack_a0 = -1.0;
    if (pCStack_14 == (CWeapon *)0x0) {
      iVar2 = *(int *)((int)g_CDemonSetPtr->actors + iVar3);
      fStack_a0 = (float)(**(code **)(*(int *)(iVar2 + 0x2b0) + 0x68))
                                   (iVar2,this_ptr,&stack0xffffffb8);
    }
    else {
      iVar2 = core_weapon_cpp_CWeapon_isSimulating_FUN_0058a5f0(pCStack_14);
      if ((iVar2 == 0) || (pCStack_14 == (CWeapon *)0x0)) {
        iVar2 = *(int *)((int)g_CDemonSetPtr->actors + iVar3);
        fStack_a0 = (float)(**(code **)(*(int *)(iVar2 + 0x2b0) + 0x68))
                                     (iVar2,this_ptr,&stack0xffffffb8);
      }
    }
    pCVar1 = g_CDemonSetPtr;
    if ((0.0 <= fStack_a0) && (fStack_a0 < fVar8)) {
      this_ptr->hero_action = 1;
      this_ptr->hero_action_actor = *(CDemonActor **)((int)pCVar1->actors + iVar3);
      this_ptr->hero_action_range = 0.0;
      this_ptr->hero_action_target = pCStack_18;
      fVar8 = fStack_a0;
    }
    iVar3 = iVar3 + 4;
  }
  return (uint)(this_ptr->hero_action == 1);
}
