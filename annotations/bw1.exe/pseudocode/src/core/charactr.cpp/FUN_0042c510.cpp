// Name: core_charactr.cpp_FUN_0042c510
// Address: 0042c510
// Address Range: [[0042c510, 0042c79b]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_0042c510(CCharacter *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_FUN_0042c510(CCharacter *this_ptr)

{
  char cVar1;
  CSkeleton *pCVar2;
  int iVar3;
  CCharacter *pCVar4;
  CCharacter *pCVar5;
  byte *this_ptr_00;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  
  core_actor_cpp_FUN_00408850((CDemonActor *)this_ptr);
  *(uint *)&this_ptr->field_0x2504 = _DAT_005fd614;
  *(uint *)&this_ptr->field_0x3004 = 0;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            ((CKeyFramedModelInstance *)&DAT_007c61c4,"stake_b.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
            ((CKeyFramedModelInstance *)&DAT_007c61c4);
  pCVar4 = this_ptr;
  do {
    iVar8 = *(int *)&pCVar4->field_0x25b0;
    if ((iVar8 != 0) &&
       (pCVar5 = (CCharacter *)(**(code **)(*(int *)(iVar8 + 0x154) + 0x94))(iVar8),
       pCVar5 != this_ptr)) {
      _DAT_01d1d400 = "..\\core\\charactr.cpp";
      _DAT_01d1d404 = 0x13c;
      core_main_c_FUN_005030e0("%s is carrying %s, but %s thinks it is being carried by %s",this_ptr,iVar8,iVar8,pCVar5);
    }
    pCVar4 = (CCharacter *)&pCVar4->field_0x78;
  } while (pCVar4 != (CCharacter *)&this_ptr->field_0xf0);
  if (this_ptr->field_0x24a8 != '\0') {
    *(uint *)&this_ptr->field_0x1ac = *(uint *)&this_ptr->field_0x27b8;
    core_skeleton_cpp_FUN_00569b20((CDeformableModelInstance *)&this_ptr->field_0x158);
    iVar8 = 0;
    pcVar7 = "bip01 head";
    pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                       ((CDeformableModelInstance *)&this_ptr->field_0x158);
    iVar8 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(pCVar2,pcVar7,iVar8);
    *(int *)&this_ptr->field_0x2774 = iVar8;
  }
  core_charactr_cpp_FUN_00432e80(this_ptr);
  if (*(int *)&this_ptr->field_0x27a4 != 0) {
    pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                       ((CDeformableModelInstance *)&this_ptr->field_0x158);
    iVar8 = 0;
    *(uint *)&this_ptr->field_0x3124 = 4;
    iVar3 = _stricmp(&this_ptr->field_0x24a8,"shadow.dfm");
    if (iVar3 == 0) {
      iVar8 = 0x10;
    }
    if (iVar8 < *(int *)&pCVar2->field_0x1de78) {
      do {
        iVar3 = iVar8 + 1;
        core_charactr_cpp_FUN_0042f4d0(this_ptr,pCVar2,iVar8);
        iVar8 = iVar3;
      } while (iVar3 < *(int *)&pCVar2->field_0x1de78);
    }
    iVar8 = 0;
    pCVar4 = this_ptr;
    pCVar5 = this_ptr;
    if (0 < *(int *)&this_ptr->field_0x3120) {
      do {
        *(uint *)&pCVar5->field_0x3784 = 4;
        *(uint *)&pCVar4->field_0x3140 = 0x40000000;
        iVar8 = iVar8 + 1;
        pCVar4 = (CCharacter *)&pCVar4->field_0x18;
        pCVar5 = (CCharacter *)&pCVar5->field_0x2a4;
      } while (iVar8 < *(int *)&this_ptr->field_0x3120);
    }
  }
  this_ptr_00 = &this_ptr->field_0x2ca0;
  core_cloth_cpp_CClothList_load_FUN_00441cc0((CClothList *)this_ptr_00);
  core_cloth_cpp_CClothList_setup_FUN_00441f60
            ((CClothList *)this_ptr_00,(CVector3f *)&this_ptr->field_0x20,
             (CVector3f *)&this_ptr->field_0x30,(CDeformableModelInstance *)&this_ptr->field_0x158);
  core_cloth_cpp_CClothList_process_FUN_00441fa0
            ((CClothList *)this_ptr_00,(CVector3f *)&this_ptr->field_0x20,
             (CVector3f *)&this_ptr->field_0x30,0.05,*(float *)&this_ptr->field_0x2504,
             (CDeformableModelInstance *)&this_ptr->field_0x158);
  core_charactr_cpp_FUN_004343c0(this_ptr);
  if (this_ptr->field_0x2544 != '\0') {
    *(uint *)&this_ptr->field_0xb9e4 = 0;
    return;
  }
  pcVar7 = core_actor_cpp_FUN_00408830((CDemonActor *)this_ptr);
  pcVar7 = pcVar7 + 1;
  pcVar6 = &this_ptr->field_0x2544;
  do {
    cVar1 = *pcVar7;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  *(uint *)&this_ptr->field_0xb9e4 = 0;
  return;
}
