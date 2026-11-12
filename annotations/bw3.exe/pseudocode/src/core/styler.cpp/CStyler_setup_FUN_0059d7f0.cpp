// Name: core_styler.cpp_CStyler_setup_FUN_0059d7f0
// Address: 0059d7f0
// Address Range: [[0059d7f0, 0059d9d8]]
// Convention: __cdecl
// Signature: void __cdecl core_styler_cpp_CStyler_setup_FUN_0059d7f0(CStyler *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_styler_cpp_CStyler_setup_FUN_0059d7f0(CStyler *this_ptr)

{
  UOrientationVector *pUVar1;
  CDeformableModelInstance *pCVar2;
  CMorph *this_ptr_00;
  char cVar3;
  CDemonActor *pCVar4;
  CMotionList *this_ptr_01;
  char *pcVar5;
  int iVar6;
  
  core_enemy_cpp_CEnemy_setup_FUN_00489110(&this_ptr->base);
  pCVar2 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(pCVar2);
  core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(pCVar2);
  if (this_ptr->is_morph_partner == 0) {
    pCVar4 = core_actor_cpp_createActorByName_FUN_0040c4f0("CStylerDemon");
    this_ptr->demon = pCVar4;
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
              ((CDeformableModelInstance *)(pCVar4 + 1),"bwp3_stylerdemon.dfm");
    if ((this_ptr->base).base.is_spectral != 0) {
      (this_ptr->base).base.base.is_transparent = 1;
    }
    pcVar5 = "Elizabeth-Demon";
    pCVar4 = this_ptr->demon;
    do {
      cVar3 = *pcVar5;
      pCVar4->actor_name[0] = cVar3;
      if (cVar3 == '\0') break;
      cVar3 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pCVar4->actor_name[1] = cVar3;
      pCVar4 = (CDemonActor *)(pCVar4->actor_name + 2);
    } while (cVar3 != '\0');
    pCVar4 = this_ptr->demon;
    (pCVar4->location).position.x = (this_ptr->base).base.base.location.position.x;
    (pCVar4->location).position.y = (this_ptr->base).base.base.location.position.y;
    (pCVar4->location).position.z = (this_ptr->base).base.base.location.position.z;
    (pCVar4->location).area_id = (this_ptr->base).base.base.location.area_id;
    pCVar4 = this_ptr->demon;
    pUVar1 = &(this_ptr->base).base.base.orient;
    if (&pCVar4->orient != pUVar1) {
      (pCVar4->orient).vec.x = (pUVar1->vec).x;
      (pCVar4->orient).vec.y = (this_ptr->base).base.base.orient.vec.y;
      (pCVar4->orient).vec.z = (this_ptr->base).base.base.orient.vec.z;
    }
    pCVar4 = this_ptr->demon;
    pCVar4[0x1d].create_event[0x48] = '\0';
    pCVar4[0x1d].create_event[0x49] = '\0';
    pCVar4[0x1d].create_event[0x4a] = -0x80;
    pCVar4[0x1d].create_event[0x4b] = '?';
    (*((this_ptr->demon->vtable)._ub)->setup)(this_ptr->demon);
    iVar6 = 1;
    pcVar5 = "stand";
    this_ptr_01 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310
                            ((CMotionController *)(this_ptr->demon + 1));
    iVar6 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004fb9c0(this_ptr_01,pcVar5,iVar6);
    core_motion_cpp_CMotionController_jumpToMotion_FUN_004fc420
              ((CMotionController *)(this_ptr->demon + 1),iVar6,0.0);
    core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090
              ((CDeformableModelInstance *)(this_ptr->demon + 1));
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10
              ((CDeformableModelInstance *)(this_ptr->demon + 1));
  }
  pCVar2 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090(pCVar2);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10(pCVar2);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(pCVar2);
  if (this_ptr->is_morph_partner == 0) {
    this_ptr_00 = &this_ptr->morph;
    core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0(this_ptr_00,0,pCVar2);
    core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0
              (this_ptr_00,1,(CDeformableModelInstance *)(this_ptr->demon + 1));
    core_morph_cpp_CMorph_getReady_FUN_004fac10(this_ptr_00);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0054c110
              ((CDeformableModelInstance *)(this_ptr->demon + 1));
  }
  this_ptr->morph_time = 0.0;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0054c110
            (&(this_ptr->base).base.model);
  return;
}
