// Name: core_hero.cpp_CHero_getGrabbed_FUN_004f28d0
// Address: 004f28d0
// Address Range: [[004f28d0, 004f29a5]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_getGrabbed_FUN_004f28d0(CHero *this_ptr,CDemonActor *grabber,int grab_type)

#include "nocturne.h"

int __cdecl
core_hero_cpp_CHero_getGrabbed_FUN_004f28d0(CHero *this_ptr,CDemonActor *grabber,int grab_type)

{
  CDeformableModelInstance *this_ptr_00;
  CMotionList *pCVar1;
  int iVar2;
  CVector3f *pCVar3;
  CVector3f local_14;
  
  if (grab_type == 0) {
    this_ptr_00 = &(this_ptr->base).model;
    pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                       (&this_ptr_00->motion_controller);
    iVar2 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0(pCVar1);
    if (iVar2 < 0) {
      return 0;
    }
    pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                       (&this_ptr_00->motion_controller);
    iVar2 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0(pCVar1);
    if (iVar2 < 0) {
      core_motion_cpp_CMotionController_setDesiredStateByName_FUN_0052db90
                (&this_ptr_00->motion_controller,"GETGRABBED",1);
    }
    else {
      pCVar3 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         ((CDemonActor *)this_ptr,&local_14,&(grabber->location).position);
      if (pCVar3->z <= 0.0) {
        core_motion_cpp_CMotionController_setDesiredStateByName_FUN_0052db90
                  (&this_ptr_00->motion_controller,"GETGRABBED_BACK",1);
      }
      else {
        core_motion_cpp_CMotionController_setDesiredStateByName_FUN_0052db90
                  (&this_ptr_00->motion_controller,"GETGRABBED_FRONT",1);
      }
    }
  }
  (this_ptr->base).grabbed_by = grabber;
  (this_ptr->base).grabbed_type = grab_type;
  return 1;
}
