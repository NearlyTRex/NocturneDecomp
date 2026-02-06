// Name: core_charactr.cpp_CCharacter_FUN_0042ec40
// Address: 0042ec40
// Address Range: [[0042ec40, 0042edd5]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_FUN_0042ec40(CCharacter *this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_FUN_0042ec40(CCharacter *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CDemonActor_vtable *pCVar1;
  CSkeleton *pCVar2;
  CVector3f *pCVar3;
  int iVar4;
  uint in_stack_00000008;
  char *pcVar5;
  float fVar6;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;
  
  this_ptr_00 = &this_ptr->model;
  if (in_stack_00000008 < 7) {
    if ((in_stack_00000008 == 1) && (this_ptr->field3_0x2410 != 0)) {
      pcVar5 = "Bip01 L Foot";
      pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
      in_stack_00000008 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(pCVar2,pcVar5);
      if (-1 < (int)in_stack_00000008) {
        fVar6 = 1.0;
        pCVar1 = (this_ptr->base).vtable._ub;
        pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                           (this_ptr_00,&local_3c,in_stack_00000008);
        iVar4 = (*pCVar1->processFootstepAtOffset)(&this_ptr->base,pCVar3,fVar6);
        return iVar4;
      }
    }
  }
  else if (in_stack_00000008 < 8) {
    if (this_ptr->field3_0x2410 != 0) {
      pcVar5 = "Bip01 R Foot";
      pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
      in_stack_00000008 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(pCVar2,pcVar5);
      if (-1 < (int)in_stack_00000008) {
        fVar6 = 1.0;
        pCVar1 = (this_ptr->base).vtable._ub;
        pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                           (this_ptr_00,&local_18,in_stack_00000008);
        iVar4 = (*pCVar1->processFootstepAtOffset)(&this_ptr->base,pCVar3,fVar6);
        return iVar4;
      }
    }
  }
  else if (0x1e < in_stack_00000008) {
    if (in_stack_00000008 < 0x20) {
      if (this_ptr->field3_0x2410 != 0) {
        pcVar5 = "Bip01 L Foot";
        pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00)
        ;
        in_stack_00000008 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(pCVar2,pcVar5);
        if (-1 < (int)in_stack_00000008) {
          fVar6 = 1.7;
          pCVar1 = (this_ptr->base).vtable._ub;
          pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                             (this_ptr_00,&local_24,in_stack_00000008);
          iVar4 = (*pCVar1->processFootstepAtOffset)(&this_ptr->base,pCVar3,fVar6);
          return iVar4;
        }
      }
    }
    else {
      if (in_stack_00000008 != 0x25) {
        return in_stack_00000008;
      }
      if (this_ptr->field3_0x2410 != 0) {
        pcVar5 = "Bip01 R Foot";
        pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00)
        ;
        in_stack_00000008 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(pCVar2,pcVar5);
        if (-1 < (int)in_stack_00000008) {
          fVar6 = 1.7;
          pCVar1 = (this_ptr->base).vtable._ub;
          pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                             (this_ptr_00,&local_30,in_stack_00000008);
          iVar4 = (*pCVar1->processFootstepAtOffset)(&this_ptr->base,pCVar3,fVar6);
          return iVar4;
        }
      }
    }
  }
  return in_stack_00000008;
}
