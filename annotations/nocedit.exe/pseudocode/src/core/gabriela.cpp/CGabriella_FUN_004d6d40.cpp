// Name: core_gabriela.cpp_CGabriella_FUN_004d6d40
// Address: 004d6d40
// Address Range: [[004d6d40, 004d6f74]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_FUN_004d6d40(CGabriella *this_ptr)

#include "nocturne.h"

void __cdecl core_gabriela_cpp_CGabriella_FUN_004d6d40(CGabriella *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  CDemonActor *pCVar2;
  float fVar3;
  CBoundingBox3D *pCVar4;
  float in_stack_00000008;
  int in_stack_0000000c;
  CBoundingBox3D CStack_68;
  CBoundingBox3D local_50;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float local_2c;
  uint local_28;
  uint local_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  fVar1 = *(float *)(this_ptr->unk1 + 4);
  fVar3 = in_stack_00000008 / 0.5f;
  *(float *)this_ptr->unk1 = *(float *)this_ptr->unk1 - fVar3;
  *(float *)(this_ptr->unk1 + 4) = fVar1 - fVar3;
  if (*(float *)this_ptr->unk1 < 0.0) {
    this_ptr->unk1[0] = '\0';
    this_ptr->unk1[1] = '\0';
    this_ptr->unk1[2] = '\0';
    this_ptr->unk1[3] = '\0';
  }
  if (*(float *)(this_ptr->unk1 + 4) < 0.0) {
    this_ptr->unk1[4] = '\0';
    this_ptr->unk1[5] = '\0';
    this_ptr->unk1[6] = '\0';
    this_ptr->unk1[7] = '\0';
  }
  if (in_stack_0000000c != 0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)this_ptr);
    pCVar2 = (this_ptr->base).base.carry_hands[0].carry_actor;
    if (pCVar2 != (CDemonActor *)0x0) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCVar2);
    }
    pCVar2 = (this_ptr->base).base.carry_hands[1].carry_actor;
    if (pCVar2 != (CDemonActor *)0x0) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCVar2);
    }
    core_setcolid_cpp_CDemonSet_disableIgnore_FUN_00574210(g_CDemonSetPtr);
    local_24 = 0;
    local_28 = 0;
    local_2c = 0.0;
    pCVar2 = (this_ptr->base).base.carry_hands[0].carry_actor;
    if (pCVar2 == (CDemonActor *)0x0) {
      local_2c = -0.5;
    }
    else {
      pCVar4 = (*((pCVar2->vtable)._ub)->getBoundingBox)(pCVar2,&local_50);
      fStack_38 = (pCVar4->max).x - (pCVar4->min).x;
      fStack_34 = (pCVar4->max).y - (pCVar4->min).y;
      fStack_30 = (pCVar4->max).z - (pCVar4->min).z;
      local_2c = -fStack_30;
    }
    core_gabriela_cpp_CGabriella_FUN_004d6f80(this_ptr);
    pCVar2 = (this_ptr->base).base.carry_hands[1].carry_actor;
    if (pCVar2 == (CDemonActor *)0x0) {
      local_2c = 0.5;
    }
    else {
      pCVar4 = (*((pCVar2->vtable)._ub)->getBoundingBox)(pCVar2,&CStack_68);
      fStack_20 = (pCVar4->max).x - (pCVar4->min).x;
      fStack_1c = (pCVar4->max).y - (pCVar4->min).y;
      local_2c = (pCVar4->max).z - (pCVar4->min).z;
      fStack_18 = local_2c;
    }
    core_gabriela_cpp_CGabriella_FUN_004d6f80(this_ptr);
    core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
    return;
  }
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
            (this_ptr_00,0,0.0,*(float *)this_ptr->unk1,INT_02d7b84c,
             core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
            (this_ptr_00,0,0.0,*(float *)(this_ptr->unk1 + 4),INT_02d7b850,
             core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
  return;
}
