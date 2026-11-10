// Name: unkafter_basicene.cpp_FUN_0059f0e0
// Address: 0059f0e0
// Address Range: [[0059f0e0, 0059f38e]]
// Convention: unknown
// Signature: void unkafter_basicene_cpp_FUN_0059f0e0(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void unkafter_basicene_cpp_FUN_0059f0e0(CCharacter *param_1,float param_2)

{
  byte *puVar1;
  CCharacter *pCVar2;
  int iVar3;
  byte bVar4;
  float afStackY_1090 [1015];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
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
  float afStack_38 [4];
  float fStack_28;
  CVector3f CStack_24;
  float fStack_18;
  float afStack_14 [2];
  
  bVar4 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  puVar1 = &param_1[1].model.field_0x640;
  if ((uint *)puVar1 != &uStack_78) {
    *(uint *)puVar1 = 0;
    *(uint *)&param_1[1].model.field_0x644 = 0;
    *(uint *)&param_1[1].model.field_0x648 = 0;
  }
  iVar3 = core_charactr_cpp_CCharacter_isOnGround_FUN_00424430(param_1);
  if (iVar3 != 0) {
    afStack_68[2] = *(float *)&param_1->field_0x2588 * param_2;
    afStack_68[3] = *(float *)&param_1->field_0x258c * param_2;
    fStack_58 = *(float *)&param_1->field_0x2590 * param_2;
    afStack_38[2] = afStack_68[2];
    afStack_38[(uint)bVar4 * 0xfffffffe + 3] = afStack_68[(uint)bVar4 * 0xfffffffe + 3];
    afStack_38[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 4] =
         afStack_68[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 4];
    fStack_48 = afStack_38[2] + *(float *)&param_1->field_0x257c;
    fStack_44 = afStack_38[3] + *(float *)&param_1->field_0x2580;
    fStack_40 = fStack_28 + *(float *)&param_1->field_0x2584;
    fStack_a8 = fStack_48;
    *(float *)((int)&stack0xffffff5c + (uint)bVar4 * -8) = afStack_68[(uint)bVar4 * 0xfffffffe + 9];
    *(float *)((int)&stack0xffffff60 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         afStack_68[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 10];
    fStack_54 = fStack_a8 + *(float *)&(param_1->model).field_0x2254;
    fStack_50 = fStack_a4 + *(float *)&(param_1->model).field_0x2258;
    fStack_4c = fStack_a0 + *(float *)&(param_1->model).field_0x225c;
    puVar1 = &param_1[1].model.field_0x640;
    fStack_3c = fStack_54;
    *(float *)((int)afStack_38 + (uint)bVar4 * 0xfffffff8) =
         afStack_68[(uint)bVar4 * 0xfffffffe + 6];
    afStack_14[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -8] =
         afStack_68[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 7];
    if ((float *)puVar1 != &fStack_3c) {
      *(float *)puVar1 = fStack_3c;
      *(float *)&param_1[1].model.field_0x644 = afStack_38[0];
      *(float *)&param_1[1].model.field_0x648 = afStack_38[1];
    }
    core_charactr_cpp_FUN_00423a10(param_1,param_2);
    fStack_84 = *(float *)&param_1->field_0x2588 * param_2;
    fStack_80 = *(float *)&param_1->field_0x258c * param_2;
    fStack_7c = *(float *)&param_1->field_0x2590 * param_2;
    fStack_18 = fStack_84;
    afStack_14[(uint)bVar4 * -2] = *(float *)((int)&stack0xffffff80 + (uint)bVar4 * -8);
    afStack_14[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         *(float *)((int)&stack0xffffff84 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    fStack_9c = fStack_18 + *(float *)&param_1->field_0x257c;
    fStack_98 = afStack_14[0] + *(float *)&param_1->field_0x2580;
    fStack_94 = afStack_14[1] + *(float *)&param_1->field_0x2584;
    fStack_90 = fStack_9c;
    *(uint *)((int)&stack0xffffff74 + (uint)bVar4 * -8) =
         *(uint *)((int)&stack0xffffff68 + (uint)bVar4 * -8);
    *(uint *)((int)&stack0xffffff78 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)((int)&stack0xffffff6c + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    puVar1 = &(param_1->model).field_0x2254;
    fStack_6c = fStack_90 + *(float *)puVar1;
    afStack_68[0] = fStack_8c + *(float *)&(param_1->model).field_0x2258;
    afStack_68[1] = fStack_88 + *(float *)&(param_1->model).field_0x225c;
    CStack_24.x = fStack_6c;
    *(uint *)((int)&CStack_24 + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)afStack_68 + (uint)bVar4 * 0xfffffff8);
    *(float *)((int)&CStack_24 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         afStack_68[(uint)bVar4 * 0xfffffffe + (uint)bVar4 * 0xfffffffe + 1];
    *(uint *)&param_1->field_0x2584 = 0;
    *(uint *)&param_1->field_0x2580 = *(uint *)&param_1->field_0x2584;
    *(uint *)&param_1->field_0x257c = *(uint *)&param_1->field_0x2580;
    *(uint *)&(param_1->model).field_0x225c = 0;
    *(uint *)&(param_1->model).field_0x2258 = *(uint *)&(param_1->model).field_0x225c;
    *(uint *)puVar1 = *(uint *)&(param_1->model).field_0x2258;
    core_charactr_cpp_FUN_00423a60(param_1,&CStack_24);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_00424470(param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(&param_1->model);
  unkafter_basicene_cpp_FUN_0059f390(param_1);
  if (param_1->look_at_target == (CCharacter *)0x0) {
    pCVar2 = *(CCharacter **)(param_1[1].base.actor_name + 0x18);
    if (pCVar2 == (CCharacter *)0x0) {
      iVar3 = 1;
      param_1->look_at_candidate = (CCharacter *)0x0;
    }
    else {
      param_1->look_at_candidate = pCVar2;
      iVar3 = 0;
    }
  }
  else {
    iVar3 = 0;
  }
  core_charactr_cpp_CCharacter_findSomethingToLookAt_FUN_00429420(param_1,param_2,iVar3);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90(param_1,param_2);
  return;
}
