// Name: core_basicene.cpp_CBasicEnemy_setup_FUN_0059e6a0
// Address: 0059e6a0
// Address Range: [[0059e6a0, 0059e79c]]
// Convention: __cdecl
// Signature: void __cdecl core_basicene_cpp_CBasicEnemy_setup_FUN_0059e6a0(CBasicEnemy *this_ptr)

#include "nocturne.h"

void __cdecl core_basicene_cpp_CBasicEnemy_setup_FUN_0059e6a0(CBasicEnemy *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *pCVar1;
  int iVar2;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480(this_ptr_00);
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0(&this_ptr->base);
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(this_ptr_00);
  this_ptr->skeleton = pCVar1;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(this_ptr_00);
  if (this_ptr->head_bone == -999) {
    iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(pCVar1,"Bip01 Head",1);
    this_ptr->head_bone = iVar2;
  }
  iVar2 = this_ptr->flinch_bone;
  (this_ptr->base).victim_search_radius = this_ptr->alert_distance;
  if (iVar2 == -999) {
    iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                      (this_ptr->skeleton,"Bip01 Spine1",1);
    this_ptr->flinch_bone = iVar2;
  }
  if ((this_ptr->can_flinch != 0) && (*(int *)(0x01D182F0 + 0x1008) == 0)) {
    core_basicene_cpp_FUN_005a01d0(this_ptr,&this_ptr->flinch_active);
  }
  core_muzzle_cpp_FUN_0059da70(&this_ptr->state_machine);
  core_cloth_cpp_CClothList_process_FUN_005b1780
            (&(this_ptr->base).base.cloth_list,&(this_ptr->base).base.base.location.position,
             &(this_ptr->base).base.base.orient.vec,10.0,
             (this_ptr->base).base.closest_distance_threshold,&(this_ptr->base).base.model);
  return;
}
