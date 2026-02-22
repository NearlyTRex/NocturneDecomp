// Name: core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40
// Address: 0042ec40
// Address Range: [[0042ec40, 0042edd5]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40(CCharacter *this_ptr,uint event_id)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_processMotion_FUN_0042ec40(CCharacter *this_ptr,uint event_id)

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
  if (event_id < 7) {
    if ((event_id == 1) && (this_ptr->is_on_ground != 0)) {
      iVar5 = 0;
      pcVar4 = "Bip01 L Foot";
      pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
      event_id = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(pCVar2,pcVar4,iVar5);
      if (-1 < (int)event_id) {
        fVar6 = 1.0;
        pCVar1 = (this_ptr->base).vtable._ub;
        pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                           (this_ptr_00,&local_3c,event_id);
        iVar5 = (*pCVar1->processFootstepAtOffset)(&this_ptr->base,pCVar3,fVar6);
        return iVar5;
      }
    }
  }
  else if (event_id < 8) {
    if (this_ptr->is_on_ground != 0) {
      iVar5 = 0;
      pcVar4 = "Bip01 R Foot";
      pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
      event_id = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(pCVar2,pcVar4,iVar5);
      if (-1 < (int)event_id) {
        fVar6 = 1.0;
        pCVar1 = (this_ptr->base).vtable._ub;
        pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                           (this_ptr_00,&local_18,event_id);
        iVar5 = (*pCVar1->processFootstepAtOffset)(&this_ptr->base,pCVar3,fVar6);
        return iVar5;
      }
    }
  }
  else if (0x1e < event_id) {
    if (event_id < 0x20) {
      if (this_ptr->is_on_ground != 0) {
        iVar5 = 0;
        pcVar4 = "Bip01 L Foot";
        pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00)
        ;
        event_id = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(pCVar2,pcVar4,iVar5);
        if (-1 < (int)event_id) {
          fVar6 = 1.7;
          pCVar1 = (this_ptr->base).vtable._ub;
          pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                             (this_ptr_00,&local_24,event_id);
          iVar5 = (*pCVar1->processFootstepAtOffset)(&this_ptr->base,pCVar3,fVar6);
          return iVar5;
        }
      }
    }
    else {
      if (event_id != 0x25) {
        return event_id;
      }
      if (this_ptr->is_on_ground != 0) {
        iVar5 = 0;
        pcVar4 = "Bip01 R Foot";
        pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00)
        ;
        event_id = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(pCVar2,pcVar4,iVar5);
        if (-1 < (int)event_id) {
          fVar6 = 1.7;
          pCVar1 = (this_ptr->base).vtable._ub;
          pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                             (this_ptr_00,&local_30,event_id);
          iVar5 = (*pCVar1->processFootstepAtOffset)(&this_ptr->base,pCVar3,fVar6);
          return iVar5;
        }
      }
    }
  }
  return event_id;
}
