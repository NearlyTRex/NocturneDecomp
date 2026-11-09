// Name: core_doc.cpp_FUN_00450620
// Address: 00450620
// Address Range: [[00450620, 00450a5b]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_00450620(CHero *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_00450620(CHero *param_1)

{
  CDeformableModelInstance *this_ptr;
  char cVar1;
  CSkeleton *this_ptr_00;
  CMotionList *pCVar2;
  CBoxActor *pCVar3;
  byte bVar4;
  CSkeleton *apCStackY_102c [1012];
  char *pcVar5;
  int iVar6;
  uint uStack_44;
  uint auStack_40 [2];
  uint uStack_38;
  CSkeleton *apCStack_34 [5];
  uint uStack_20;
  CSkeleton *pCStack_14;
  
  bVar4 = 0;
  core_hero_cpp_FUN_004ce4a0(param_1);
  this_ptr = (CDeformableModelInstance *)(param_1 + 0x2b4);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(this_ptr);
  pCStack_14 = this_ptr_00;
  _DAT_01b4d258 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 head",1);
  _DAT_01b4d25c = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L Clavicle",1);
  _DAT_01b4d260 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R Clavicle",1);
  _DAT_01b4d264 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_01b4d268 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_01b4d26c = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L ForeArm",1);
  _DAT_01b4d270 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R ForeArm",1);
  _DAT_01b4d274 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L Foot",1);
  _DAT_01b4d278 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R Foot",1);
  _DAT_01b4d27c = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L Thigh",1);
  _DAT_01b4d280 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R Thigh",1);
  _DAT_01b4d284 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L Calf",1);
  _DAT_01b4d288 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R Calf",1);
  _DAT_01b4d28c = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L Hand",1);
  _DAT_01b4d290 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R Hand",1);
  _DAT_01b4d294 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Neck",1);
  _DAT_01b4d298 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Spine2",1);
  _DAT_01b4d29c = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Spine1",1);
  _DAT_01b4d2a0 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Spine",1);
  _DAT_01b4d2a4 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Pelvis",1);
  iVar6 = 1;
  pcVar5 = "turnlstart";
  *(int *)(param_1 + 0x2618) = _DAT_01b4d28c;
  *(int *)(param_1 + 0x2690) = _DAT_01b4d290;
  pCVar2 = core_motion_cpp_FUN_00503860((CMotionController *)this_ptr);
  _DAT_01b4d2a8 = core_motion_cpp_FUN_00502f10(pCVar2,pcVar5,iVar6);
  iVar6 = 1;
  pcVar5 = "turnrstart";
  pCVar2 = core_motion_cpp_FUN_00503860((CMotionController *)this_ptr);
  _DAT_01b4d2ac = core_motion_cpp_FUN_00502f10(pCVar2,pcVar5,iVar6);
  iVar6 = 1;
  pcVar5 = "pickup";
  pCVar2 = core_motion_cpp_FUN_00503860((CMotionController *)this_ptr);
  iVar6 = core_motion_cpp_FUN_00502f10(pCVar2,pcVar5,iVar6);
  core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_00544f50(this_ptr,iVar6,22.0);
  core_skeleton_cpp_FUN_005469a0(this_ptr,_DAT_01b4d290);
  uStack_44 = apCStack_34[2];
  auStack_40[(uint)bVar4 * -2] = apCStack_34[(uint)bVar4 * -2 + 3];
  auStack_40[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       apCStack_34[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  if (param_1 + 0x25724 != (CHero *)&uStack_44) {
    *(uint *)(param_1 + 0x25724) = uStack_44;
    *(uint *)(param_1 + 0x25728) = auStack_40[0];
    *(uint *)(param_1 + 0x2572c) = auStack_40[1];
  }
  core_skeleton_cpp_FUN_005469a0(param_1 + 0x2b4,_DAT_01b4d268);
  uStack_38 = uStack_20;
  apCStack_34[(uint)bVar4 * -2] = apCStack_34[(uint)bVar4 * -2 + 6];
  apCStack_34[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       apCStack_34[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
  if (param_1 + 0x25730 != (CHero *)&uStack_38) {
    *(uint *)(param_1 + 0x25730) = uStack_38;
    *(CSkeleton **)(param_1 + 0x25734) = apCStack_34[0];
    *(CSkeleton **)(param_1 + 0x25738) = apCStack_34[1];
  }
  core_doc_cpp_FUN_00453d80(param_1);
  *(uint *)(param_1 + 0x2573c) = 0;
  *(uint *)(param_1 + 0x25750) = 0;
  *(uint *)(param_1 + 0x257a8) = 0;
  *(uint *)(param_1 + 0x256b0) = 0;
  *(uint *)(param_1 + 0x256b4) = 0;
  core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
            ((CDeformableModelInstance *)(param_1 + 0x2b4));
  _DAT_01b4d2b0 = 0;
  iVar6 = _strcmp((char *)(param_1 + 0x2514),(char *)(param_1 + 0x257b0));
  if (iVar6 == 0) {
    iVar6 = _strcmp
                      ((char *)(param_1 + 0x2d10),(char *)(param_1 + 0x258b0));
    if (iVar6 == 0) goto LAB_0045096f;
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)(param_1 + 0x2b4),&DAT_005cfe17);
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x148))(param_1,param_1 + 0x257b0,param_1 + 0x258b0);
LAB_0045096f:
  iVar6 = core_skeleton_cpp_FUN_00540e80(pCStack_14,"Bip01 head",1);
  *(int *)(param_1 + 0x10a24) = iVar6;
  core_cloth_cpp_CClothList_process_FUN_005b1780
            ((CClothList *)(param_1 + 0x2d0c),(CVector3f *)(param_1 + 0x20),
             (CVector3f *)(param_1 + 0x30),10.0,*(float *)(param_1 + 0x2574),
             (CDeformableModelInstance *)(param_1 + 0x2b4));
  unkaddr_005a7eb0_cpp_FUN_005a8030(param_1 + 0x154,0x100);
  unkaddr_005a7eb0_cpp_FUN_005a8050(param_1 + 0x154,param_1);
  pcVar5 = "LANTERN";
  pCVar3 = (CBoxActor *)(param_1 + 0x259b4);
  do {
    cVar1 = *pcVar5;
    *(char *)pCVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pCVar3->field_0x1 = cVar1;
    pCVar3 = (CBoxActor *)&pCVar3->field_0x2;
  } while (cVar1 != '\0');
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            ((CKeyFramedModelInstance *)(param_1 + 0x25c68),"Lantern.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
            ((CKeyFramedModelInstance *)(param_1 + 0x25c68));
  core_boxactor_cpp_FUN_0041be70((CBoxActor *)(param_1 + 0x259b4));
  return;
}
