// Name: unkafter_basicene.cpp_FUN_0059e6a0
// Address: 0059e6a0
// Address Range: [[0059e6a0, 0059e79c]]
// Convention: unknown
// Signature: void unkafter_basicene_cpp_FUN_0059e6a0(CEnemy *param_1)

#include "nocturne.h"

void unkafter_basicene_cpp_FUN_0059e6a0(CEnemy *param_1)

{
  CDeformableModelInstance *this_ptr;
  CSkeleton *pCVar1;
  int iVar2;
  
  this_ptr = &(param_1->base).model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480(this_ptr);
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0(param_1);
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(this_ptr);
  *(CSkeleton **)&param_1[1].base.model.field_0x604 = pCVar1;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(this_ptr);
  if (*(int *)&param_1[1].base.model.field_0x5d0 == -999) {
    iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(pCVar1,"Bip01 Head",1);
    *(int *)&param_1[1].base.model.field_0x5d0 = iVar2;
  }
  iVar2 = *(int *)&param_1[1].base.model.field_0x650;
  param_1->victim_search_radius = *(float *)&param_1[1].base.model.field_0x5c4;
  if (iVar2 == -999) {
    iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                      (*(CSkeleton **)&param_1[1].base.model.field_0x604,"Bip01 Spine1",1);
    *(int *)&param_1[1].base.model.field_0x650 = iVar2;
  }
  if ((*(int *)&param_1[1].base.model.field_0x66c != 0) && (*(int *)(0x01D182F0 + 0x1008) == 0)) {
    unkafter_basicene_cpp_FUN_005a01d0(param_1,&param_1[1].base.model.field_0x624);
  }
  unkaddr_0059d350_cpp_FUN_0059da70(param_1 + 1);
  core_cloth_cpp_CClothList_process_FUN_005b1780
            (&(param_1->base).cloth_list,(CVector3f *)&(param_1->base).base.field_0x20,
             &(param_1->base).base.orient.vec,10.0,(param_1->base).closest_distance_threshold,
             &(param_1->base).model);
  return;
}
