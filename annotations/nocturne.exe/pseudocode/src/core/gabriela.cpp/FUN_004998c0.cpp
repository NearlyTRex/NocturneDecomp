// Name: core_gabriela.cpp_FUN_004998c0
// Address: 004998c0
// Address Range: [[004998c0, 00499af4]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_FUN_004998c0(CGabriella *this_ptr,float delta_time,int has_carried_objects)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gabriela_cpp_FUN_004998c0(CGabriella *this_ptr,float delta_time,int has_carried_objects)

{
  CDeformableModelInstance *this_ptr_00;
  CDemonActor *pCVar1;
  float fVar2;
  CBoundingBox3D *pCVar3;
  CBoundingBox3D CStack_68;
  CBoundingBox3D local_50;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float local_2c [4];
  float fStack_1c;
  float fStack_18;
  
  fVar2 = delta_time / 0.5f;
  this_ptr->left_clavicle_blend = this_ptr->left_clavicle_blend - fVar2;
  this_ptr->right_clavicle_blend = this_ptr->right_clavicle_blend - fVar2;
  if (this_ptr->left_clavicle_blend < 0.0) {
    this_ptr->left_clavicle_blend = 0.0;
  }
  if (this_ptr->right_clavicle_blend < 0.0) {
    this_ptr->right_clavicle_blend = 0.0;
  }
  if (has_carried_objects != 0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,(CDemonActor *)this_ptr);
    pCVar1 = (this_ptr->base).base.carry_hands[0].carry_actor;
    if (pCVar1 != (CDemonActor *)0x0) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,pCVar1);
    }
    pCVar1 = (this_ptr->base).base.carry_hands[1].carry_actor;
    if (pCVar1 != (CDemonActor *)0x0) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,pCVar1);
    }
    core_setcolid_cpp_CDemonSet_disableIgnore_FUN_005117e0(0x01E57284);
    local_2c[2] = 0.0;
    local_2c[1] = 0.0;
    local_2c[0] = 0.0;
    pCVar1 = (this_ptr->base).base.carry_hands[0].carry_actor;
    if (pCVar1 == (CDemonActor *)0x0) {
      local_2c[0] = -0.5;
    }
    else {
      pCVar3 = (*((pCVar1->vtable)._ub)->getBoundingBox)(pCVar1,&local_50);
      fStack_38 = (pCVar3->max).x - (pCVar3->min).x;
      fStack_34 = (pCVar3->max).y - (pCVar3->min).y;
      fStack_30 = (pCVar3->max).z - (pCVar3->min).z;
      local_2c[0] = -fStack_30;
    }
    core_gabriela_cpp_FUN_00499b00
              (this_ptr,delta_time,&this_ptr->left_clavicle_blend,_DAT_01c713d8,_DAT_01c7139c,
               local_2c);
    pCVar1 = (this_ptr->base).base.carry_hands[1].carry_actor;
    if (pCVar1 == (CDemonActor *)0x0) {
      local_2c[0] = 0.5;
    }
    else {
      pCVar3 = (*((pCVar1->vtable)._ub)->getBoundingBox)(pCVar1,&CStack_68);
      local_2c[3] = (pCVar3->max).x - (pCVar3->min).x;
      fStack_1c = (pCVar3->max).y - (pCVar3->min).y;
      local_2c[0] = (pCVar3->max).z - (pCVar3->min).z;
      fStack_18 = local_2c[0];
    }
    core_gabriela_cpp_FUN_00499b00
              (this_ptr,delta_time,&this_ptr->right_clavicle_blend,_DAT_01c713dc,_DAT_01c713a0,
               local_2c);
    core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
    return;
  }
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
            (this_ptr_00,0,0.0,this_ptr->left_clavicle_blend,_DAT_01c7139c,
             core_skeleton_cpp_FUN_0051b650);
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
            (this_ptr_00,0,0.0,this_ptr->right_clavicle_blend,_DAT_01c713a0,
             core_skeleton_cpp_FUN_0051b650);
  return;
}
