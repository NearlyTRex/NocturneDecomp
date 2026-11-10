// Name: core_djien.cpp_CDjien_setup_FUN_0045ff00
// Address: 0045ff00
// Address Range: [[0045ff00, 00460224]]
// Convention: __cdecl
// Signature: void __cdecl core_djien_cpp_CDjien_setup_FUN_0045ff00(CDjien *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_djien_cpp_CDjien_setup_FUN_0045ff00(CDjien *this_ptr)

{
  int iVar1;
  CDjien *pCVar2;
  CSkeleton *this_ptr_00;
  CDeformableModel *this_ptr_01;
  float10 fVar4;
  byte *puVar3;
  
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00569b20
            ((CDeformableModelInstance *)&this_ptr->field_0x158);
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (0x01C51D80,"COMBATMODEHARD");
  if (iVar1 == 0) {
    *(uint *)&this_ptr->field_0xc2cc = 0x3f400000;
  }
  else {
    *(uint *)&this_ptr->field_0xc2cc = 0x3f800000;
  }
  pCVar2 = this_ptr;
  do {
    puVar3 = &pCVar2->field_0x4;
    *(uint *)&pCVar2->field_0xc2d8 = 0;
    pCVar2 = (CDjien *)puVar3;
  } while (puVar3 != &this_ptr->field_0x18);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                          ((CDeformableModelInstance *)&this_ptr->field_0x158);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Spine1",1);
  *(int *)&this_ptr->field_0xc268 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Head",1);
  *(int *)&this_ptr->field_0xc26c = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                    (this_ptr_00,"Bip01 Ponytail12",1);
  *(int *)&this_ptr->field_0xc270 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                    (this_ptr_00,"Bip01 Ponytail22",1);
  *(int *)&this_ptr->field_0xc274 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Dummy22",1);
  *(int *)&this_ptr->field_0xc278 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Dummy23",1);
  *(int *)&this_ptr->field_0xc27c = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Sack01",1);
  *(int *)&this_ptr->field_0xc280 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Sack02",1);
  *(int *)&this_ptr->field_0xc284 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Sack03",1);
  *(int *)&this_ptr->field_0xc288 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Sack04",1);
  *(int *)&this_ptr->field_0xc28c = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Sack05",1);
  *(int *)&this_ptr->field_0xc290 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Sack06",1);
  *(int *)&this_ptr->field_0xc294 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Dummy4",1);
  *(int *)&this_ptr->field_0xc298 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Dummy24",1);
  *(int *)&this_ptr->field_0xc29c = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Dummy25",1);
  *(int *)&this_ptr->field_0xc2a0 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Dummy26",1);
  *(int *)&this_ptr->field_0xc2a4 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Dummy27",1);
  *(int *)&this_ptr->field_0xc2a8 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Dummy28",1);
  *(int *)&this_ptr->field_0xc2ac = iVar1;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
                          ((CDeformableModelInstance *)&this_ptr->field_0x158);
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_01,"sack01",1);
  *(int *)&this_ptr->field_0xc2b0 = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_01,"sack02",1);
  *(int *)&this_ptr->field_0xc2b4 = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_01,"sack03",1);
  *(int *)&this_ptr->field_0xc2b8 = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_01,"sack04",1);
  *(int *)&this_ptr->field_0xc2bc = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_01,"sack05",1);
  *(int *)&this_ptr->field_0xc2c0 = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_01,"sack06",1);
  *(int *)&this_ptr->field_0xc2c4 = iVar1;
  if (*(int *)(0x01D2C900 + 0x1008) == 0) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (0x01C51D80,"PuzzleModeHard");
    if (iVar1 == 0) {
      *(uint *)(&this_ptr->field_0x2298 + *(int *)&this_ptr->field_0xc2bc * 4) = 0;
      *(uint *)(&this_ptr->field_0x2298 + *(int *)&this_ptr->field_0xc2c0 * 4) = 0;
      *(uint *)(&this_ptr->field_0x2298 + *(int *)&this_ptr->field_0xc2c4 * 4) = 0;
      *(uint *)&this_ptr->field_0xc2d4 = 3;
    }
    else {
      *(uint *)&this_ptr->field_0xc2d4 = 6;
    }
  }
  fVar4 = (float10)*(float *)&this_ptr->field_0x2538;
  round();
  *(uint *)&this_ptr->field_0xc9c4 = 0;
  _DAT_00612270 = (int)ROUND(fVar4);
  core_enemy_cpp_CEnemy_setup_FUN_004a0510((CEnemy *)this_ptr);
  return;
}
