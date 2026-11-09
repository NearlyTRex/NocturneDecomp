// Name: unkafter_djien.cpp_FUN_0045ff00
// Address: 0045ff00
// Address Range: [[0045ff00, 00460224]]
// Convention: unknown
// Signature: void unkafter_djien_cpp_FUN_0045ff00(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_djien_cpp_FUN_0045ff00(CEnemy *param_1)

{
  int iVar1;
  CEnemy *pCVar2;
  CSkeleton *this_ptr;
  CDeformableModel *this_ptr_00;
  float10 fVar4;
  byte *puVar3;
  
  core_skeleton_cpp_FUN_00569b20((CDeformableModelInstance *)&param_1->field_0x158);
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (0x01C51D80,"COMBATMODEHARD");
  if (iVar1 == 0) {
    *(uint *)&param_1[1].field_0x64 = 0x3f400000;
  }
  else {
    *(uint *)&param_1[1].field_0x64 = 0x3f800000;
  }
  pCVar2 = param_1;
  do {
    puVar3 = &pCVar2->field_0x4;
    *(uint *)&pCVar2[1].field_0x70 = 0;
    pCVar2 = (CEnemy *)puVar3;
  } while (puVar3 != &param_1->field_0x18);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                       ((CDeformableModelInstance *)&param_1->field_0x158);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Spine1",1);
  *(int *)(param_1 + 1) = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Head",1);
  *(int *)&param_1[1].field_0x4 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Ponytail12",1);
  *(int *)&param_1[1].field_0x8 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Ponytail22",1);
  *(int *)&param_1[1].field_0xc = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Dummy22",1);
  *(int *)&param_1[1].field_0x10 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Dummy23",1);
  *(int *)&param_1[1].field_0x14 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Sack01",1);
  *(int *)&param_1[1].field_0x18 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Sack02",1);
  *(int *)&param_1[1].field_0x1c = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Sack03",1);
  *(int *)&param_1[1].field_0x20 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Sack04",1);
  *(int *)&param_1[1].field_0x24 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Sack05",1);
  *(int *)&param_1[1].field_0x28 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Sack06",1);
  *(int *)&param_1[1].field_0x2c = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Dummy4",1);
  *(int *)&param_1[1].field_0x30 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Dummy24",1);
  *(int *)&param_1[1].field_0x34 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Dummy25",1);
  *(int *)&param_1[1].field_0x38 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Dummy26",1);
  *(int *)&param_1[1].field_0x3c = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Dummy27",1);
  *(int *)&param_1[1].field_0x40 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Dummy28",1);
  *(int *)&param_1[1].field_0x44 = iVar1;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
                          ((CDeformableModelInstance *)&param_1->field_0x158);
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_00,"sack01",1);
  *(int *)&param_1[1].field_0x48 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_00,"sack02",1);
  *(int *)&param_1[1].field_0x4c = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_00,"sack03",1);
  *(int *)&param_1[1].field_0x50 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_00,"sack04",1);
  *(int *)&param_1[1].field_0x54 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_00,"sack05",1);
  *(int *)&param_1[1].field_0x58 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00565780(this_ptr_00,"sack06",1);
  *(int *)&param_1[1].field_0x5c = iVar1;
  if (*(int *)(0x01D2C900 + 0x1008) == 0) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (0x01C51D80,"PuzzleModeHard");
    if (iVar1 == 0) {
      *(uint *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0x54 * 4) = 0;
      *(uint *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0x58 * 4) = 0;
      *(uint *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0x5c * 4) = 0;
      *(uint *)&param_1[1].field_0x6c = 3;
    }
    else {
      *(uint *)&param_1[1].field_0x6c = 6;
    }
  }
  fVar4 = (float10)*(float *)&param_1->field_0x2538;
  round();
  *(uint *)&param_1[1].field_0x75c = 0;
  _DAT_00612270 = (int)ROUND(fVar4);
  core_enemy_cpp_CEnemy_setup_FUN_004a0510(param_1);
  return;
}
