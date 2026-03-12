// Name: core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40
// Address: 0042ec40
// Address Range: [[0042ec40, 0042edd5]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40(CCharacter *this_ptr,int bone_index)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40(CCharacter *this_ptr,int bone_index)

{
  CDemonActor_vtable *pCVar4;
  CSkeleton *pCVar2;
  CVector3f *pCVar3;
  int iVar6;
  CSkeleton *pCVar7;
  CVector3f *pCVar8;
  char *pcVar9;
  float fVar10;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;
  CDemonActor_vtable *pCVar1;
  CDeformableModelInstance *this_ptr_00;
  float fVar6;
  int iVar5;
  char *pcVar4;
  
  this_ptr_00 = &this_ptr->model;
  if ((uint)bone_index < 7) {
    if ((bone_index == 1) && (this_ptr->is_on_ground != 0)) {
      iVar5 = 0;
      pcVar4 = "Bip01 L Foot";
      pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
      bone_index = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(pCVar2,pcVar4,iVar5);
      if (-1 < bone_index) {
        fVar6 = 1.0;
        pCVar1 = (this_ptr->base).vtable._ub;
        pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                           (this_ptr_00,&local_3c,bone_index);
        iVar6 = (*pCVar1->processFootstepAtOffset)(&this_ptr->base,pCVar3,fVar6);
        return iVar6;
      }
    }
  }
  else if ((uint)bone_index < 8) {
    if (this_ptr->is_on_ground != 0) {
      iVar6 = 0;
      pcVar9 = "Bip01 R Foot";
      pCVar7 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
      bone_index = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(pCVar7,pcVar9,iVar6);
      if (-1 < bone_index) {
        fVar10 = 1.0;
        pCVar4 = (this_ptr->base).vtable._ub;
        pCVar8 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                           (this_ptr_00,&local_18,bone_index);
        iVar6 = (*pCVar4->processFootstepAtOffset)(&this_ptr->base,pCVar8,fVar10);
        return iVar6;
      }
    }
  }
  else if (0x1e < (uint)bone_index) {
    if ((uint)bone_index < 0x20) {
      if (this_ptr->is_on_ground != 0) {
        iVar6 = 0;
        pcVar9 = "Bip01 L Foot";
        pCVar7 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00)
        ;
        bone_index = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(pCVar7,pcVar9,iVar6);
        if (-1 < bone_index) {
          fVar10 = 1.7;
          pCVar4 = (this_ptr->base).vtable._ub;
          pCVar8 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                             (this_ptr_00,&local_24,bone_index);
          iVar6 = (*pCVar4->processFootstepAtOffset)(&this_ptr->base,pCVar8,fVar10);
          return iVar6;
        }
      }
    }
    else {
      if (bone_index != 0x25) {
        return bone_index;
      }
      if (this_ptr->is_on_ground != 0) {
        iVar6 = 0;
        pcVar9 = "Bip01 R Foot";
        pCVar7 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00)
        ;
        bone_index = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(pCVar7,pcVar9,iVar6);
        if (-1 < bone_index) {
          fVar10 = 1.7;
          pCVar4 = (this_ptr->base).vtable._ub;
          pCVar8 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                             (this_ptr_00,&local_30,bone_index);
          iVar6 = (*pCVar4->processFootstepAtOffset)(&this_ptr->base,pCVar8,fVar10);
          return iVar6;
        }
      }
    }
  }
  return bone_index;
}
