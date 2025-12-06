// Name: core_charactr.cpp_CCharacter_FUN_0042ec40
// Address: 0042ec40
// Address Range: [[0042ec40, 0042edd5]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042ec40(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042ec40(CCharacter *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CDemonActor_vtable *pCVar1;
  CSkeleton *pCVar2;
  int iVar3;
  CVector3f *pCVar4;
  BADSPACEBASE *in_ESP;
  uint in_stack_00000008;
  char *pcVar5;
  float in_stack_ffffffcc;
  CVector3f CStack_28;
  CVector3f CStack_1c;
  
  this_ptr_00 = &this_ptr->model;
  if (in_stack_00000008 < 7) {
    if ((in_stack_00000008 == 1) && (*(int *)(this_ptr->field2_0x240c + 4) != 0)) {
      pcVar5 = (char *)0x0;
      pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
      iVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(pCVar2,pcVar5);
      if (-1 < iVar3) {
        pCVar1 = (this_ptr->base_actor).vtable;
        pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                           (this_ptr_00,(CVector3f *)&stack0xffffffcc,iVar3);
        (*pCVar1->processFootstepAtOffset)(&this_ptr->base_actor,pCVar4,in_stack_ffffffcc);
        return;
      }
    }
  }
  else if (in_stack_00000008 < 8) {
    if (*(int *)(this_ptr->field2_0x240c + 4) != 0) {
      pcVar5 = (char *)0x0;
      pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
      iVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(pCVar2,pcVar5);
      if (-1 < iVar3) {
        pCVar1 = (this_ptr->base_actor).vtable;
        pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                           (this_ptr_00,(CVector3f *)&stack0xfffffff0,iVar3);
        (*pCVar1->processFootstepAtOffset)(&this_ptr->base_actor,pCVar4,in_stack_ffffffcc);
        return;
      }
    }
  }
  else if (0x1e < in_stack_00000008) {
    if (in_stack_00000008 < 0x20) {
      if (*(int *)(this_ptr->field2_0x240c + 4) != 0) {
        pcVar5 = (char *)0x0;
        pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00)
        ;
        iVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(pCVar2,pcVar5);
        if (-1 < iVar3) {
          pCVar1 = (this_ptr->base_actor).vtable;
          pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                             (this_ptr_00,&CStack_1c,iVar3);
          (*pCVar1->processFootstepAtOffset)(&this_ptr->base_actor,pCVar4,in_stack_ffffffcc);
          return;
        }
      }
    }
    else {
      if (in_stack_00000008 != 0x25) {
        return;
      }
      if (*(int *)(this_ptr->field2_0x240c + 4) != 0) {
        pcVar5 = (char *)0x0;
        pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00)
        ;
        iVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(pCVar2,pcVar5);
        if (-1 < iVar3) {
          pCVar1 = (this_ptr->base_actor).vtable;
          pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                             (this_ptr_00,&CStack_28,iVar3);
          (*pCVar1->processFootstepAtOffset)(&this_ptr->base_actor,pCVar4,in_stack_ffffffcc);
          return;
        }
      }
    }
  }
  return;
}
