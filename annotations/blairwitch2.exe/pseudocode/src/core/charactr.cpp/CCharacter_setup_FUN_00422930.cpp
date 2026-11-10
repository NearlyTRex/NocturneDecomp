// Name: core_charactr.cpp_CCharacter_setup_FUN_00422930
// Address: 00422930
// Address Range: [[00422930, 00422bd6]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_setup_FUN_00422930(CCharacter *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_setup_FUN_00422930(CCharacter *this_ptr)

{
  char cVar1;
  CSkeleton *pCVar2;
  int iVar3;
  CCharacter *pCVar4;
  CCharacter *pCVar5;
  CClothList *this_ptr_00;
  UOrientationVector *euler;
  byte *position;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408a80(&this_ptr->base);
  this_ptr->closest_distance_threshold = _DAT_005f4084;
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
    pCVar4 = (CCharacter *)&(pCVar4->base).field_0x78;
  } while (pCVar4 != (CCharacter *)&(this_ptr->base).field_0xf0);
  if ((this_ptr->model).field_0x2260 != '\0') {
    *(uint *)&(this_ptr->model).field_0x54 = *(uint *)&this_ptr->field_0x2824;
    core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480(&this_ptr->model);
    iVar8 = 0;
    pcVar7 = "bip01 head";
    pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                       (&this_ptr->model);
    iVar8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(pCVar2,pcVar7,iVar8);
    this_ptr->look_at_head_bone = iVar8;
  }
  core_charactr_cpp_CCharacter_computeBoundingBox_FUN_00429390(this_ptr);
  if (*(int *)&this_ptr->field_0x2810 != 0) {
    pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                       (&this_ptr->model);
    iVar8 = 0;
    this_ptr->pending_flame_type = FLAME_TYPE_BODY;
    iVar3 = _stricmp
                      (&(this_ptr->model).field_0x2260,"shadow.dfm");
    if (iVar3 == 0) {
      iVar8 = 0x10;
    }
    if (iVar8 < pCVar2->bone_count) {
      do {
        iVar3 = iVar8 + 1;
        core_charactr_cpp_CCharacter_spawnFireOnBone_FUN_00425bb0(this_ptr,pCVar2,iVar8);
        iVar8 = iVar3;
      } while (iVar3 < pCVar2->bone_count);
    }
    iVar8 = 0;
    pCVar4 = this_ptr;
    pCVar5 = this_ptr;
    if (0 < this_ptr->fire_count) {
      do {
        *(uint *)&pCVar4->field_0x3d24 = 4;
        *(uint *)&pCVar5->fires[0].field_0x14 = 0x40000000;
        iVar8 = iVar8 + 1;
        pCVar4 = (CCharacter *)&(pCVar4->model).field_0x14c;
        pCVar5 = (CCharacter *)((pCVar5->base).actor_name + 0x18);
      } while (iVar8 < this_ptr->fire_count);
    }
  }
  this_ptr_00 = &this_ptr->cloth_list;
  core_cloth_cpp_CClothList_load_FUN_005b14a0(this_ptr_00);
  euler = &(this_ptr->base).orient;
  position = &(this_ptr->base).field_0x20;
  core_cloth_cpp_CClothList_setup_FUN_005b1740
            (this_ptr_00,(CVector3f *)position,&euler->vec,&this_ptr->model);
  core_cloth_cpp_CClothList_process_FUN_005b1780
            (this_ptr_00,(CVector3f *)position,&euler->vec,10.0,this_ptr->closest_distance_threshold
             ,&this_ptr->model);
  core_charactr_cpp_CCharacter_buildLayerActionTransitionCosts_FUN_0042a3d0(this_ptr);
  if (this_ptr->descriptive_name[0] != '\0') {
    this_ptr->sfx_handle = 0;
    return;
  }
  iVar8 = core_actor_cpp_FUN_00408a50(this_ptr);
  pcVar7 = (char *)(iVar8 + 1);
  pcVar6 = this_ptr->descriptive_name;
  do {
    cVar1 = *pcVar7;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  this_ptr->sfx_handle = 0;
  return;
}
