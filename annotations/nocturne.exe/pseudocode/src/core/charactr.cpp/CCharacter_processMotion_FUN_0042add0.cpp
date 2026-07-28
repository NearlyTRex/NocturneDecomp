// Name: core_charactr.cpp_CCharacter_processMotion_FUN_0042add0
// Address: 0042add0
// Address Range: [[0042add0, 0042af65]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(CCharacter *this_ptr,int bone_index)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(CCharacter *this_ptr,int bone_index)

{
  CDeformableModelInstance *this_ptr_00;
  CDemonActor_vtable *pCVar1;
  CSkeleton *pCVar2;
  CVector3f *pCVar3;
  char *pcVar4;
  int iVar5;
  float fVar6;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;
  
  this_ptr_00 = &this_ptr->model;
  if ((uint)bone_index < 7) {
    if ((bone_index == 1) && (this_ptr->is_on_ground != 0)) {
      iVar5 = 0;
      pcVar4 = "Bip01 L Foot";
      pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr_00);
      bone_index = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(pCVar2,pcVar4,iVar5);
      if (-1 < bone_index) {
        fVar6 = 1.0;
        pCVar1 = (this_ptr->base).vtable._ub;
        pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                           (this_ptr_00,&local_3c,bone_index);
        iVar5 = (*pCVar1->processFootstepAtOffset)(&this_ptr->base,pCVar3,fVar6);
        return iVar5;
      }
    }
  }
  else if ((uint)bone_index < 8) {
    if (this_ptr->is_on_ground != 0) {
      iVar5 = 0;
      pcVar4 = "Bip01 R Foot";
      pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr_00);
      bone_index = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(pCVar2,pcVar4,iVar5);
      if (-1 < bone_index) {
        fVar6 = 1.0;
        pCVar1 = (this_ptr->base).vtable._ub;
        pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                           (this_ptr_00,&local_18,bone_index);
        iVar5 = (*pCVar1->processFootstepAtOffset)(&this_ptr->base,pCVar3,fVar6);
        return iVar5;
      }
    }
  }
  else if (0x1e < (uint)bone_index) {
    if ((uint)bone_index < 0x20) {
      if (this_ptr->is_on_ground != 0) {
        iVar5 = 0;
        pcVar4 = "Bip01 L Foot";
        pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr_00)
        ;
        bone_index = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(pCVar2,pcVar4,iVar5);
        if (-1 < bone_index) {
          fVar6 = 1.7;
          pCVar1 = (this_ptr->base).vtable._ub;
          pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                             (this_ptr_00,&local_24,bone_index);
          iVar5 = (*pCVar1->processFootstepAtOffset)(&this_ptr->base,pCVar3,fVar6);
          return iVar5;
        }
      }
    }
    else {
      if (bone_index != 0x25) {
        return bone_index;
      }
      if (this_ptr->is_on_ground != 0) {
        iVar5 = 0;
        pcVar4 = "Bip01 R Foot";
        pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr_00)
        ;
        bone_index = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(pCVar2,pcVar4,iVar5);
        if (-1 < bone_index) {
          fVar6 = 1.7;
          pCVar1 = (this_ptr->base).vtable._ub;
          pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                             (this_ptr_00,&local_30,bone_index);
          iVar5 = (*pCVar1->processFootstepAtOffset)(&this_ptr->base,pCVar3,fVar6);
          return iVar5;
        }
      }
    }
  }
  return bone_index;
}
