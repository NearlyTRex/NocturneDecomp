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
  byte *this_ptr_00;
  char cVar1;
  CSkeleton *this_ptr_01;
  CMotionList *pCVar2;
  char *pcVar3;
  byte bVar4;
  CSkeleton *apCStackY_102c [1012];
  char *pcVar5;
  int iVar6;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  CSkeleton *pCStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_20;
  CSkeleton *pCStack_14;
  
  bVar4 = 0;
  core_hero_cpp_CHero_setup_FUN_004ce4a0((CHero *)this_ptr);
  this_ptr_00 = &this_ptr->field_0x2b4;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                          ((CDeformableModelInstance *)this_ptr_00);
  pCStack_14 = this_ptr_01;
  _DAT_01b4d258 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 head",1);
  _DAT_01b4d25c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L Clavicle",1);
  _DAT_01b4d260 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R Clavicle",1);
  _DAT_01b4d264 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L UpperArm",1);
  _DAT_01b4d268 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R UpperArm",1);
  _DAT_01b4d26c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L ForeArm",1);
  _DAT_01b4d270 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R ForeArm",1);
  _DAT_01b4d274 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L Foot",1);
  _DAT_01b4d278 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R Foot",1);
  _DAT_01b4d27c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L Thigh",1);
  _DAT_01b4d280 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R Thigh",1);
  _DAT_01b4d284 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L Calf",1);
  _DAT_01b4d288 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R Calf",1);
  _DAT_01b4d28c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L Hand",1);
  _DAT_01b4d290 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R Hand",1);
  _DAT_01b4d294 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Neck",1);
  _DAT_01b4d298 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Spine2",1);
  _DAT_01b4d29c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Spine1",1);
  _DAT_01b4d2a0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Spine",1);
  _DAT_01b4d2a4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Pelvis",1);
  iVar6 = 1;
  pcVar5 = "turnlstart";
  *(int *)&this_ptr->field_0x2618 = _DAT_01b4d28c;
  *(int *)&this_ptr->field_0x2690 = _DAT_01b4d290;
  pCVar2 = core_motion_cpp_CMotionController_getMotionList_FUN_00503860
                     ((CMotionController *)this_ptr_00);
  _DAT_01b4d2a8 = core_motion_cpp_CMotionList_findMotionIndex_FUN_00502f10(pCVar2,pcVar5,iVar6);
  iVar6 = 1;
  pcVar5 = "turnrstart";
  pCVar2 = core_motion_cpp_CMotionController_getMotionList_FUN_00503860
                     ((CMotionController *)this_ptr_00);
  _DAT_01b4d2ac = core_motion_cpp_CMotionList_findMotionIndex_FUN_00502f10(pCVar2,pcVar5,iVar6);
  iVar6 = 1;
  pcVar5 = "pickup";
  pCVar2 = core_motion_cpp_CMotionController_getMotionList_FUN_00503860
                     ((CMotionController *)this_ptr_00);
  iVar6 = core_motion_cpp_CMotionList_findMotionIndex_FUN_00502f10(pCVar2,pcVar5,iVar6);
  core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_00544f50
            ((CDeformableModelInstance *)this_ptr_00,iVar6,22.0);
  core_skeleton_cpp_FUN_005469a0(this_ptr_00,_DAT_01b4d290);
  uStack_44 = uStack_2c;
  (&stack0xffffffc0)[(uint)bVar4 * 0xfffffffe] =
       *(uint *)(&stack0xffffffd8 + (uint)bVar4 * -8);
  *(uint *)((int)&stack0xffffffc4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffffdc + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  if ((uint *)&this_ptr->field_0x25724 != &stack0xffffffbc) {
    *(uint *)&this_ptr->field_0x25724 = uStack_44;
    *(uint *)&this_ptr->field_0x25728 = uStack_40;
    *(uint *)&this_ptr->field_0x2572c = uStack_3c;
  }
  core_skeleton_cpp_FUN_005469a0(&this_ptr->field_0x2b4,_DAT_01b4d268);
  uStack_38 = uStack_20;
  (&stack0xffffffcc)[(uint)bVar4 * 0xfffffffe] =
       (CSkeleton *)*(uint *)(&stack0xffffffe4 + (uint)bVar4 * -8);
  *(uint *)((int)&stack0xffffffd0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffffe8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  if ((uint *)&this_ptr->field_0x25730 != &stack0xffffffc8) {
    *(uint *)&this_ptr->field_0x25730 = uStack_38;
    *(CSkeleton **)&this_ptr->field_0x25734 = pCStack_34;
    *(uint *)&this_ptr->field_0x25738 = uStack_30;
  }
  core_doc_cpp_FUN_00453d80(this_ptr);
  *(uint *)&this_ptr->field_0x2573c = 0;
  *(uint *)&this_ptr->field_0x25750 = 0;
  *(uint *)&this_ptr->field_0x257a8 = 0;
  *(uint *)&this_ptr->field_0x256b0 = 0;
  *(uint *)&this_ptr->field_0x256b4 = 0;
  core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
            ((CDeformableModelInstance *)&this_ptr->field_0x2b4);
  _DAT_01b4d2b0 = 0;
  iVar6 = _strcmp(&this_ptr->field_0x2514,&this_ptr->field_0x257b0);
  if (iVar6 == 0) {
    iVar6 = _strcmp(&this_ptr->field_0x2d10,&this_ptr->field_0x258b0);
    if (iVar6 == 0) goto LAB_0045096f;
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&this_ptr->field_0x2b4,&DAT_005cfe17);
  (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x148))
            (this_ptr,&this_ptr->field_0x257b0,&this_ptr->field_0x258b0);
LAB_0045096f:
  iVar6 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(pCStack_14,"Bip01 head",1);
  *(int *)&this_ptr->field_0x10a24 = iVar6;
  core_cloth_cpp_CClothList_process_FUN_005b1780
            ((CClothList *)&this_ptr->field_0x2d0c,(CVector3f *)&this_ptr->field_0x20,
             (CVector3f *)&this_ptr->field_0x30,10.0,*(float *)&this_ptr->field_0x2574,
             (CDeformableModelInstance *)&this_ptr->field_0x2b4);
  unkaddr_005a7eb0_cpp_FUN_005a8030(&this_ptr->field_0x154,0x100);
  unkaddr_005a7eb0_cpp_FUN_005a8050(&this_ptr->field_0x154,this_ptr);
  pcVar3 = "LANTERN";
  pcVar5 = &this_ptr->field_0x259b4;
  do {
    cVar1 = *pcVar3;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            ((CKeyFramedModelInstance *)&this_ptr->field_0x25c68,"Lantern.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
            ((CKeyFramedModelInstance *)&this_ptr->field_0x25c68);
  core_boxactor_cpp_CBoxActor_setup_FUN_0041be70((CBoxActor *)&this_ptr->field_0x259b4);
  return;
}
