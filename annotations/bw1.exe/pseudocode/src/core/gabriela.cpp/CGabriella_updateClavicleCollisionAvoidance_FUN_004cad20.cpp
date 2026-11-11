// Name: core_gabriela.cpp_CGabriella_updateClavicleCollisionAvoidance_FUN_004cad20
// Address: 004cad20
// Address Range: [[004cad20, 004cafe2]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_updateClavicleCollisionAvoidance_FUN_004cad20(CGabriella *this_ptr,float delta_time,int has_carried_objects)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gabriela_cpp_CGabriella_updateClavicleCollisionAvoidance_FUN_004cad20(CGabriella *this_ptr,float delta_time,int has_carried_objects)

{
  CDeformableModelInstance *pCVar1;
  CDemonActor *pCVar2;
  float fVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  uint in_stack_00000010;
  float afStackY_1030 [986];
  CBoundingBox3D *in_stack_ffffff50;
  CBoundingBox3D *in_stack_ffffff58;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_34;
  float fStack_28;
  float fStack_24;
  float local_20;
  float local_1c;
  float local_18;
  
  bVar7 = 0;
  fVar3 = delta_time / _DAT_00600d6c;
  this_ptr->left_clavicle_blend = this_ptr->left_clavicle_blend - fVar3;
  this_ptr->right_clavicle_blend = this_ptr->right_clavicle_blend - fVar3;
  if (this_ptr->left_clavicle_blend < 0.0) {
    this_ptr->left_clavicle_blend = 0.0;
  }
  if (this_ptr->right_clavicle_blend < 0.0) {
    this_ptr->right_clavicle_blend = 0.0;
  }
  if (has_carried_objects != 0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,(CDemonActor *)this_ptr);
    pCVar2 = (this_ptr->base).base.carry_hands[0].carry_actor;
    if (pCVar2 != (CDemonActor *)0x0) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,pCVar2);
    }
    pCVar2 = (this_ptr->base).base.carry_hands[1].carry_actor;
    if (pCVar2 != (CDemonActor *)0x0) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,pCVar2);
    }
    core_setcolid_cpp_CDemonSet_disableIgnore_FUN_005592b0(g_CDemonSetPtr);
    local_18 = 0.0;
    local_1c = 0.0;
    local_20 = 0.0;
    pCVar2 = (this_ptr->base).base.carry_hands[0].carry_actor;
    if (pCVar2 == (CDemonActor *)0x0) {
      local_20 = -0.5;
    }
    else {
      (*((pCVar2->vtable)._ub)->getBoundingBox)(pCVar2,in_stack_ffffff50);
      puVar5 = (uint *)&stack0xffffff58;
      puVar6 = &stack0xffffffa0;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      fStack_48 = fStack_54 - fStack_60;
      fStack_44 = fStack_50 - fStack_5c;
      fStack_40 = fStack_4c - fStack_58;
      fStack_24 = fStack_54 - fStack_60;
      *(uint *)((int)&stack0xffffffe0 + (uint)bVar7 * -8) =
           *(uint *)((int)&stack0xffffffbc + (uint)bVar7 * -8);
      *(uint *)((int)&stack0xffffffe4 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
           *(uint *)((int)&stack0xffffffc0 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
      local_18 = -local_1c;
    }
    core_gabriela_cpp_FUN_004caff0
              (this_ptr,in_stack_00000010,&this_ptr->left_clavicle_blend,_DAT_01cc9148,_DAT_01cc910c
               ,&stack0xffffffe8);
    pCVar2 = (this_ptr->base).base.carry_hands[1].carry_actor;
    if (pCVar2 == (CDemonActor *)0x0) {
      local_18 = 0.5;
    }
    else {
      (*((pCVar2->vtable)._ub)->getBoundingBox)(pCVar2,in_stack_ffffff58);
      puVar5 = (uint *)&stack0xffffff90;
      puVar6 = (uint *)&stack0xffffff70;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      fStack_28 = fStack_7c - fStack_88;
      fStack_24 = fStack_78 - fStack_84;
      local_20 = fStack_74 - fStack_80;
      fStack_34 = fStack_7c - fStack_88;
      *(uint *)(&stack0xffffffd0 + (uint)bVar7 * -8) =
           *(uint *)((int)&stack0xffffffdc + (uint)bVar7 * -8);
      *(uint *)(&stack0xffffffd4 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
           *(uint *)((int)&stack0xffffffe0 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    }
    core_gabriela_cpp_FUN_004caff0
              (this_ptr,in_stack_00000010,&this_ptr->right_clavicle_blend,_DAT_01cc914c,
               _DAT_01cc9110,&stack0xffffffe8);
    core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
    return;
  }
  pCVar1 = &(this_ptr->base).base.model;
  core_skeleton_cpp_FUN_00568100
            (pCVar1,0,0,this_ptr->left_clavicle_blend,_DAT_01cc910c,core_skeleton_cpp_FUN_00567360);
  core_skeleton_cpp_FUN_00568100
            (pCVar1,0,0,this_ptr->right_clavicle_blend,_DAT_01cc9110,core_skeleton_cpp_FUN_00567360)
  ;
  return;
}
