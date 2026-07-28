// Name: core_hero.cpp_CHero_getGrabbed_FUN_004b4c70
// Address: 004b4c70
// Address Range: [[004b4c70, 004b4d45]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_getGrabbed_FUN_004b4c70(CHero *this_ptr,CDemonActor *grabber,int grab_type)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_getGrabbed_FUN_004b4c70(CHero *this_ptr,CDemonActor *grabber,int grab_type)

{
  CDeformableModelInstance *this_ptr_00;
  CMotionList *pCVar1;
  int iVar2;
  CVector3f *pCVar3;
  char *pcVar4;
  CVector3f local_14;
  
  if (grab_type == 0) {
    pcVar4 = "GETGRABBED";
    this_ptr_00 = &(this_ptr->base).model;
    iVar2 = grab_type;
    pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                       (&this_ptr_00->motion_controller);
    iVar2 = core_motion_cpp_CMotionList_findStateIndex_FUN_004e10a0(pCVar1,pcVar4,iVar2);
    if (iVar2 < 0) {
      return 0;
    }
    iVar2 = 0;
    pcVar4 = "GETGRABBED_FRONT";
    pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                       (&this_ptr_00->motion_controller);
    iVar2 = core_motion_cpp_CMotionList_findStateIndex_FUN_004e10a0(pCVar1,pcVar4,iVar2);
    if (iVar2 < 0) {
      core_motion_cpp_CMotionController_setDesiredStateByName_FUN_004e1740
                (&this_ptr_00->motion_controller,"GETGRABBED",1);
    }
    else {
      pCVar3 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                         ((CDemonActor *)this_ptr,&local_14,&(grabber->location).position);
      if (pCVar3->z <= 0.0) {
        core_motion_cpp_CMotionController_setDesiredStateByName_FUN_004e1740
                  (&this_ptr_00->motion_controller,"GETGRABBED_BACK",1);
      }
      else {
        core_motion_cpp_CMotionController_setDesiredStateByName_FUN_004e1740
                  (&this_ptr_00->motion_controller,"GETGRABBED_FRONT",1);
      }
    }
  }
  (this_ptr->base).grabbed_by = grabber;
  (this_ptr->base).grabbed_type = grab_type;
  return 1;
}
