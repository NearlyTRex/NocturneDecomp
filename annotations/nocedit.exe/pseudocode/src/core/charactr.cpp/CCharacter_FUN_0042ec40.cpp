// Name: core_charactr.cpp_CCharacter_FUN_0042ec40
// Address: 0042ec40
// Address Range: [[0042ec40, 0042edd5]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_FUN_0042ec40(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042ec40(CCharacter *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CDemonActor_vtable *pCVar1;
  CSkeleton *pCVar2;
  int iVar3;
  CVector3f *pCVar4;
  uint in_stack_00000008;
  char *pcVar5;
  float fVar6;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;
  
  this_ptr_00 = &this_ptr->model;
  if (in_stack_00000008 < 7) {
    if ((in_stack_00000008 == 1) && (*(int *)(this_ptr->unk1 + 4) != 0)) {
      pcVar5 = "Bip01 L Foot";
      pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
      iVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(pCVar2,pcVar5);
      if (-1 < iVar3) {
        fVar6 = 1.0;
        pCVar1 = (this_ptr->base).vtable._ub;
        pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                           (this_ptr_00,&local_3c,iVar3);
        (*pCVar1->processFootstepAtOffset)(&this_ptr->base,pCVar4,fVar6);
        return;
      }
    }
  }
  else if (in_stack_00000008 < 8) {
    if (*(int *)(this_ptr->unk1 + 4) != 0) {
      pcVar5 = "Bip01 R Foot";
      pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
      iVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(pCVar2,pcVar5);
      if (-1 < iVar3) {
        fVar6 = 1.0;
        pCVar1 = (this_ptr->base).vtable._ub;
        pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                           (this_ptr_00,&local_18,iVar3);
        (*pCVar1->processFootstepAtOffset)(&this_ptr->base,pCVar4,fVar6);
        return;
      }
    }
  }
  else if (0x1e < in_stack_00000008) {
    if (in_stack_00000008 < 0x20) {
      if (*(int *)(this_ptr->unk1 + 4) != 0) {
        pcVar5 = "Bip01 L Foot";
        pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00)
        ;
        iVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(pCVar2,pcVar5);
        if (-1 < iVar3) {
          fVar6 = 1.7;
          pCVar1 = (this_ptr->base).vtable._ub;
          pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                             (this_ptr_00,&local_24,iVar3);
          (*pCVar1->processFootstepAtOffset)(&this_ptr->base,pCVar4,fVar6);
          return;
        }
      }
    }
    else {
      if (in_stack_00000008 != 0x25) {
        return;
      }
      if (*(int *)(this_ptr->unk1 + 4) != 0) {
        pcVar5 = "Bip01 R Foot";
        pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00)
        ;
        iVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(pCVar2,pcVar5);
        if (-1 < iVar3) {
          fVar6 = 1.7;
          pCVar1 = (this_ptr->base).vtable._ub;
          pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                             (this_ptr_00,&local_30,iVar3);
          (*pCVar1->processFootstepAtOffset)(&this_ptr->base,pCVar4,fVar6);
          return;
        }
      }
    }
  }
  return;
}
