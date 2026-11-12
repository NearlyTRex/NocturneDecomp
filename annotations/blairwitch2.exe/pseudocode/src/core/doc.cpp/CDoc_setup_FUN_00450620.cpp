// Name: core_doc.cpp_CDoc_setup_FUN_00450620
// Address: 00450620
// Address Range: [[00450620, 00450a5b]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_setup_FUN_00450620(CDoc *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_doc_cpp_CDoc_setup_FUN_00450620(CDoc *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSimpleParticleSystem *this_ptr_01;
  char cVar1;
  CSkeleton *this_ptr_02;
  CMotionList *pCVar2;
  CKeyFramedModelInstance *this_ptr_03;
  CBoxActor *pCVar3;
  byte bVar4;
  float afStackY_102c [1012];
  char *pcVar5;
  int iVar6;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_20;
  CSkeleton *pCStack_14;
  
  bVar4 = 0;
  core_hero_cpp_CHero_setup_FUN_004ce4a0(&this_ptr->base);
  this_ptr_00 = &(this_ptr->base).base.model;
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(this_ptr_00);
  pCStack_14 = this_ptr_02;
  _DAT_01b4d258 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_02,"Bip01 head",1);
  _DAT_01b4d25c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_02,"Bip01 L Clavicle",1);
  _DAT_01b4d260 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_02,"Bip01 R Clavicle",1);
  _DAT_01b4d264 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_02,"Bip01 L UpperArm",1);
  _DAT_01b4d268 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_02,"Bip01 R UpperArm",1);
  _DAT_01b4d26c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_02,"Bip01 L ForeArm",1);
  _DAT_01b4d270 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_02,"Bip01 R ForeArm",1);
  _DAT_01b4d274 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_02,"Bip01 L Foot",1);
  _DAT_01b4d278 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_02,"Bip01 R Foot",1);
  _DAT_01b4d27c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_02,"Bip01 L Thigh",1);
  _DAT_01b4d280 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_02,"Bip01 R Thigh",1);
  _DAT_01b4d284 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_02,"Bip01 L Calf",1);
  _DAT_01b4d288 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_02,"Bip01 R Calf",1);
  _DAT_01b4d28c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_02,"Bip01 L Hand",1);
  _DAT_01b4d290 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_02,"Bip01 R Hand",1);
  _DAT_01b4d294 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_02,"Bip01 Neck",1);
  _DAT_01b4d298 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_02,"Bip01 Spine2",1);
  _DAT_01b4d29c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_02,"Bip01 Spine1",1);
  _DAT_01b4d2a0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_02,"Bip01 Spine",1);
  _DAT_01b4d2a4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_02,"Bip01 Pelvis",1);
  iVar6 = 1;
  pcVar5 = "turnlstart";
  (this_ptr->base).base.carry_hands[0].bone_index = _DAT_01b4d28c;
  (this_ptr->base).base.carry_hands[1].bone_index = _DAT_01b4d290;
  pCVar2 = core_motion_cpp_CMotionController_getMotionList_FUN_00503860(&this_ptr_00->base);
  _DAT_01b4d2a8 = core_motion_cpp_CMotionList_findMotionIndex_FUN_00502f10(pCVar2,pcVar5,iVar6);
  iVar6 = 1;
  pcVar5 = "turnrstart";
  pCVar2 = core_motion_cpp_CMotionController_getMotionList_FUN_00503860(&this_ptr_00->base);
  _DAT_01b4d2ac = core_motion_cpp_CMotionList_findMotionIndex_FUN_00502f10(pCVar2,pcVar5,iVar6);
  iVar6 = 1;
  pcVar5 = "pickup";
  pCVar2 = core_motion_cpp_CMotionController_getMotionList_FUN_00503860(&this_ptr_00->base);
  iVar6 = core_motion_cpp_CMotionList_findMotionIndex_FUN_00502f10(pCVar2,pcVar5,iVar6);
  core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_00544f50
            (this_ptr_00,iVar6,22.0);
  core_skeleton_cpp_FUN_005469a0(this_ptr_00,_DAT_01b4d290);
  fStack_44 = fStack_2c;
  (&stack0xffffffc0)[(uint)bVar4 * 0xfffffffe] =
       (float)*(uint *)(&stack0xffffffd8 + (uint)bVar4 * -8);
  *(uint *)((int)&stack0xffffffc4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffffdc + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  if (&this_ptr->ref_r_hand_bone_pos != (CVector3f *)&stack0xffffffbc) {
    (this_ptr->ref_r_hand_bone_pos).x = fStack_44;
    (this_ptr->ref_r_hand_bone_pos).y = fStack_40;
    (this_ptr->ref_r_hand_bone_pos).z = fStack_3c;
  }
  core_skeleton_cpp_FUN_005469a0(&(this_ptr->base).base.model,_DAT_01b4d268);
  fStack_38 = fStack_20;
  (&stack0xffffffcc)[(uint)bVar4 * 0xfffffffe] =
       (float)*(uint *)(&stack0xffffffe4 + (uint)bVar4 * -8);
  *(uint *)((int)&stack0xffffffd0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffffe8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  if (&this_ptr->ref_r_upperarm_bone_pos != (CVector3f *)&stack0xffffffc8) {
    (this_ptr->ref_r_upperarm_bone_pos).x = fStack_38;
    (this_ptr->ref_r_upperarm_bone_pos).y = fStack_34;
    (this_ptr->ref_r_upperarm_bone_pos).z = fStack_30;
  }
  core_doc_cpp_FUN_00453d80(this_ptr);
  this_ptr->grab_timer = 0.0;
  this_ptr->ladder_blend_time = 0.0;
  this_ptr->fall_velocity_snapshot = 0.0;
  this_ptr->goggle_sfx_handles[0] = 0;
  this_ptr->goggle_sfx_handles[1] = 0;
  core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(&(this_ptr->base).base.model);
  _DAT_01b4d2b0 = 0;
  iVar6 = _strcmp
                    ((this_ptr->base).base.model.model_name,this_ptr->model_name);
  if (iVar6 == 0) {
    iVar6 = _strcmp
                      ((this_ptr->base).base.cloth_list.filenames[0],this_ptr->cloth_name);
    if (iVar6 == 0) goto LAB_0045096f;
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&(this_ptr->base).base.model,&DAT_005cfe17);
  (*(((this_ptr->base).base.base.vtable._uc)->_uc).setCharacterModel)
            ((CCharacter *)this_ptr,this_ptr->model_name,this_ptr->cloth_name);
LAB_0045096f:
  iVar6 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(pCStack_14,"Bip01 head",1);
  (this_ptr->base).base.eye_glow_bone = iVar6;
  core_cloth_cpp_CClothList_process_FUN_005b1780
            (&(this_ptr->base).base.cloth_list,&(this_ptr->base).base.base.location.position,
             &(this_ptr->base).base.base.orient.vec,10.0,
             (this_ptr->base).base.closest_distance_threshold,&(this_ptr->base).base.model);
  this_ptr_01 = (this_ptr->base).base.base.particle_systems;
  core_bwspart_cpp_CSimpleParticleSystem_setMaxParticles_FUN_005a8030(this_ptr_01,0x100);
  core_bwspart_cpp_CSimpleParticleSystem_attach_FUN_005a8050(this_ptr_01,this_ptr);
  pcVar5 = "LANTERN";
  pCVar3 = &this_ptr->lantern_box;
  do {
    cVar1 = *pcVar5;
    (pCVar3->base).actor_name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    (pCVar3->base).actor_name[1] = cVar1;
    pCVar3 = (CBoxActor *)((pCVar3->base).actor_name + 2);
  } while (cVar1 != '\0');
  this_ptr_03 = &(this_ptr->lantern_box).model;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            (this_ptr_03,"Lantern.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(this_ptr_03);
  core_boxactor_cpp_CBoxActor_setup_FUN_0041be70(&this_ptr->lantern_box);
  return;
}
