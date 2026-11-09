// Name: core_charactr.cpp_FUN_00422930
// Address: 00422930
// Address Range: [[00422930, 00422bd6]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_00422930(CCharacter *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_FUN_00422930(CCharacter *this_ptr)

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
  
  core_actor_cpp_FUN_00408a80((CDemonActor *)this_ptr);
  *(uint *)&this_ptr->field_0x2574 = _DAT_005f4084;
  *(uint *)&this_ptr->field_0x3448 = 0;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            ((CKeyFramedModelInstance *)&DAT_007bdadc,"stake_b.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
            ((CKeyFramedModelInstance *)&DAT_007bdadc);
  pCVar4 = this_ptr;
  do {
    iVar8 = *(int *)&pCVar4->field_0x2620;
    if (iVar8 != 0) {
      pCVar5 = (CCharacter *)(**(code **)(*(int *)(iVar8 + 0x2b0) + 0x9c))(iVar8);
      if (pCVar5 == (CCharacter *)0x0) {
        (**(code **)(*(int *)(iVar8 + 0x2b0) + 0x90))(iVar8,this_ptr);
      }
      else if (pCVar5 != this_ptr) {
        _DAT_01d046a0 = "..\\core\\charactr.cpp";
        _DAT_01d046a4 = 0x151;
        core_main_c_FUN_004e4500("%s is carrying %s, but %s thinks it is being carried by %s",this_ptr,iVar8,iVar8,pCVar5);
      }
    }
    pCVar4 = (CCharacter *)&pCVar4->field_0x78;
  } while (pCVar4 != (CCharacter *)&this_ptr->field_0xf0);
  if (this_ptr->field_0x2514 != '\0') {
    *(uint *)&this_ptr->field_0x308 = *(uint *)&this_ptr->field_0x2824;
    core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480
              ((CDeformableModelInstance *)&this_ptr->field_0x2b4);
    iVar8 = 0;
    pcVar7 = "bip01 head";
    pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                       ((CDeformableModelInstance *)&this_ptr->field_0x2b4);
    iVar8 = core_skeleton_cpp_FUN_00540e80(pCVar2,pcVar7,iVar8);
    *(int *)&this_ptr->field_0x27e0 = iVar8;
  }
  core_charactr_cpp_FUN_00429390(this_ptr);
  if (*(int *)&this_ptr->field_0x2810 != 0) {
    pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                       ((CDeformableModelInstance *)&this_ptr->field_0x2b4);
    iVar8 = 0;
    *(uint *)&this_ptr->field_0x3568 = 4;
    iVar3 = _stricmp(&this_ptr->field_0x2514,"shadow.dfm");
    if (iVar3 == 0) {
      iVar8 = 0x10;
    }
    if (iVar8 < *(int *)&pCVar2->field_0x1d1f8) {
      do {
        iVar3 = iVar8 + 1;
        core_charactr_cpp_FUN_00425bb0(this_ptr,pCVar2,iVar8);
        iVar8 = iVar3;
      } while (iVar3 < *(int *)&pCVar2->field_0x1d1f8);
    }
    iVar8 = 0;
    pCVar4 = this_ptr;
    pCVar5 = this_ptr;
    if (0 < *(int *)&this_ptr->field_0x3564) {
      do {
        *(uint *)&pCVar4->field_0x3d24 = 4;
        *(uint *)&pCVar5->field_0x3584 = 0x40000000;
        iVar8 = iVar8 + 1;
        pCVar4 = (CCharacter *)&pCVar4->field_0x400;
        pCVar5 = (CCharacter *)&pCVar5->field_0x18;
      } while (iVar8 < *(int *)&this_ptr->field_0x3564);
    }
  }
  this_ptr_00 = &this_ptr->field_0x2d0c;
  core_cloth_cpp_CClothList_load_FUN_005b14a0((CClothList *)this_ptr_00);
  core_cloth_cpp_CClothList_setup_FUN_005b1740
            ((CClothList *)this_ptr_00,(CVector3f *)&this_ptr->field_0x20,
             (CVector3f *)&this_ptr->field_0x30,(CDeformableModelInstance *)&this_ptr->field_0x2b4);
  core_cloth_cpp_CClothList_process_FUN_005b1780
            ((CClothList *)this_ptr_00,(CVector3f *)&this_ptr->field_0x20,
             (CVector3f *)&this_ptr->field_0x30,10.0,*(float *)&this_ptr->field_0x2574,
             (CDeformableModelInstance *)&this_ptr->field_0x2b4);
  core_charactr_cpp_FUN_0042a3d0(this_ptr);
  if (this_ptr->field_0x25b4 != '\0') {
    *(uint *)&this_ptr->field_0x10220 = 0;
    return;
  }
  iVar8 = core_actor_cpp_FUN_00408a50(this_ptr);
  pcVar7 = (char *)(iVar8 + 1);
  pcVar6 = &this_ptr->field_0x25b4;
  do {
    cVar1 = *pcVar7;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  *(uint *)&this_ptr->field_0x10220 = 0;
  return;
}
