// Name: core_gabriela.cpp_CGabriella_updateClavicleCollisionAvoidance_FUN_004d6d40
// Address: 004d6d40
// Address Range: [[004d6d40, 004d6f74]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_updateClavicleCollisionAvoidance_FUN_004d6d40(CGabriella *this_ptr,float delta_time,int has_carried_objects)

#include "nocturne.h"

void __cdecl core_gabriela_cpp_CGabriella_updateClavicleCollisionAvoidance_FUN_004d6d40(CGabriella *this_ptr,float delta_time,int has_carried_objects)

{
  CDemonActor *pCVar2;
  CBoundingBox3D *pCVar3;
  CBoundingBox3D *pCVar4;
  CBoundingBox3D CStack_68;
  CBoundingBox3D local_50;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  CVector3f local_2c;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  CDeformableModelInstance *this_ptr_00;
  float fVar2;
  CDemonActor *pCVar1;
  
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
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,(CDemonActor *)this_ptr);
    pCVar1 = (this_ptr->base).base.carry_hands[0].carry_actor;
    if (pCVar1 != (CDemonActor *)0x0) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCVar1);
    }
    pCVar2 = (this_ptr->base).base.carry_hands[1].carry_actor;
    if (pCVar2 != (CDemonActor *)0x0) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCVar2);
    }
    core_setcolid_cpp_CDemonSet_disableIgnore_FUN_00574210(g_CDemonSetPtr);
    local_2c.z = 0.0;
    local_2c.y = 0.0;
    local_2c.x = 0.0;
    pCVar2 = (this_ptr->base).base.carry_hands[0].carry_actor;
    if (pCVar2 == (CDemonActor *)0x0) {
      local_2c.x = -0.5;
    }
    else {
      pCVar3 = (*((pCVar2->vtable)._ub)->getBoundingBox)(pCVar2,&local_50);
      local_2c.x = -((pCVar3->max).z - (pCVar3->min).z);
    }
    core_gabriela_cpp_CGabriella_binarySearchClavicleBlend_FUN_004d6f80
              (this_ptr,delta_time,&this_ptr->left_clavicle_blend,INT_02d7b888,INT_02d7b84c,
               &local_2c);
    pCVar2 = (this_ptr->base).base.carry_hands[1].carry_actor;
    if (pCVar2 == (CDemonActor *)0x0) {
      local_2c.x = 0.5;
    }
    else {
      pCVar4 = (*((pCVar2->vtable)._ub)->getBoundingBox)(pCVar2,&CStack_68);
      local_2c.x = (pCVar4->max).z - (pCVar4->min).z;
    }
    core_gabriela_cpp_CGabriella_binarySearchClavicleBlend_FUN_004d6f80
              (this_ptr,delta_time,&this_ptr->right_clavicle_blend,INT_02d7b88c,INT_02d7b850,
               &local_2c);
    core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
    return;
  }
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
            (this_ptr_00,0,0.0,this_ptr->left_clavicle_blend,INT_02d7b84c,
             core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
            (this_ptr_00,0,0.0,this_ptr->right_clavicle_blend,INT_02d7b850,
             core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
  return;
}
