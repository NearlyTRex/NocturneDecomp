// Name: unkafter_basicene.cpp_FUN_0059f0e0
// Address: 0059f0e0
// Address Range: [[0059f0e0, 0059f38e]]
// Convention: unknown
// Signature: void unkafter_basicene_cpp_FUN_0059f0e0(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void unkafter_basicene_cpp_FUN_0059f0e0(CCharacter *param_1,float param_2)

{
  int iVar1;
  byte bVar2;
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
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
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
  float fStack_2c;
  float fStack_28;
  CVector3f CStack_24;
  float fStack_18;
  float afStack_14 [2];
  
  bVar2 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  if ((uint *)&param_1[1].field_0x8f4 != &stack0xffffff88) {
    *(uint *)&param_1[1].field_0x8f4 = 0;
    *(uint *)&param_1[1].field_0x8f8 = 0;
    *(uint *)&param_1[1].field_0x8fc = 0;
  }
  iVar1 = core_charactr_cpp_FUN_00424430(param_1);
  if (iVar1 != 0) {
    fStack_60 = *(float *)&param_1->field_0x2588 * param_2;
    fStack_5c = *(float *)&param_1->field_0x258c * param_2;
    fStack_58 = *(float *)&param_1->field_0x2590 * param_2;
    fStack_30 = fStack_60;
    *(uint *)((int)&stack0xffffffd4 + (uint)bVar2 * -8) =
         *(uint *)((int)&stack0xffffffa4 + (uint)bVar2 * -8);
    *(uint *)((int)&stack0xffffffd8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)((int)&stack0xffffffa8 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    fStack_48 = fStack_30 + *(float *)&param_1->field_0x257c;
    fStack_44 = fStack_2c + *(float *)&param_1->field_0x2580;
    fStack_40 = fStack_28 + *(float *)&param_1->field_0x2584;
    fStack_a8 = fStack_48;
    *(uint *)((int)&stack0xffffff5c + (uint)bVar2 * -8) =
         *(uint *)((int)&stack0xffffffbc + (uint)bVar2 * -8);
    *(uint *)((int)&stack0xffffff60 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)((int)&stack0xffffffc0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    fStack_54 = fStack_a8 + *(float *)&param_1->field_0x2508;
    fStack_50 = fStack_a4 + *(float *)&param_1->field_0x250c;
    fStack_4c = fStack_a0 + *(float *)&param_1->field_0x2510;
    fStack_3c = fStack_54;
    (&stack0xffffffc8)[(uint)bVar2 * 0xfffffffe] =
         (float)*(uint *)((int)&stack0xffffffb0 + (uint)bVar2 * -8);
    afStack_14[(uint)bVar2 * -2 + (uint)bVar2 * -2 + -8] =
         *(float *)((int)&stack0xffffffb4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    if ((float *)&param_1[1].field_0x8f4 != &stack0xffffffc4) {
      *(float *)&param_1[1].field_0x8f4 = fStack_3c;
      *(float *)&param_1[1].field_0x8f8 = fStack_38;
      *(uint *)&param_1[1].field_0x8fc = uStack_34;
    }
    core_charactr_cpp_FUN_00423a10(param_1,param_2);
    fStack_84 = *(float *)&param_1->field_0x2588 * param_2;
    fStack_80 = *(float *)&param_1->field_0x258c * param_2;
    fStack_7c = *(float *)&param_1->field_0x2590 * param_2;
    fStack_18 = fStack_84;
    afStack_14[(uint)bVar2 * -2] = *(float *)((int)&stack0xffffff80 + (uint)bVar2 * -8);
    afStack_14[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
         *(float *)((int)&stack0xffffff84 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    fStack_9c = fStack_18 + *(float *)&param_1->field_0x257c;
    fStack_98 = afStack_14[0] + *(float *)&param_1->field_0x2580;
    fStack_94 = afStack_14[1] + *(float *)&param_1->field_0x2584;
    fStack_90 = fStack_9c;
    *(uint *)((int)&stack0xffffff74 + (uint)bVar2 * -8) =
         *(uint *)((int)&stack0xffffff68 + (uint)bVar2 * -8);
    *(uint *)((int)&stack0xffffff78 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)((int)&stack0xffffff6c + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    fStack_6c = fStack_90 + *(float *)&param_1->field_0x2508;
    fStack_68 = fStack_8c + *(float *)&param_1->field_0x250c;
    fStack_64 = fStack_88 + *(float *)&param_1->field_0x2510;
    CStack_24._0_4_ = fStack_6c;
    *(float *)((int)&CStack_24 + (uint)bVar2 * -8 + 4) =
         (&stack0xffffff98)[(uint)bVar2 * 0xfffffffe];
    *(uint *)((int)&CStack_24 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
         *(uint *)((int)&stack0xffffff9c + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    *(uint *)&param_1->field_0x2584 = 0;
    *(uint *)&param_1->field_0x2580 = *(uint *)&param_1->field_0x2584;
    *(uint *)&param_1->field_0x257c = *(uint *)&param_1->field_0x2580;
    *(uint *)&param_1->field_0x2510 = 0;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
    core_charactr_cpp_FUN_00423a60(param_1,&CStack_24);
  }
  core_charactr_cpp_FUN_00424470(param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            ((CDeformableModelInstance *)&param_1->field_0x2b4);
  unkafter_basicene_cpp_FUN_0059f390(param_1);
  if (*(int *)&param_1->field_0x27d0 == 0) {
    if (*(int *)&param_1[1].field_0x18 == 0) {
      iVar1 = 1;
      *(uint *)&param_1->field_0x27cc = 0;
    }
    else {
      *(int *)&param_1->field_0x27cc = *(int *)&param_1[1].field_0x18;
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0;
  }
  core_charactr_cpp_FUN_00429420(param_1,param_2,iVar1);
  core_charactr_cpp_FUN_00429e90(param_1,param_2);
  return;
}
