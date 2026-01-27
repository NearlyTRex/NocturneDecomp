// Name: core_hero.cpp_CHero_FUN_004f28d0
// Address: 004f28d0
// Address Range: [[004f28d0, 004f29a5]]
// Convention: __cdecl
// Signature: int core_hero.cpp_CHero_FUN_004f28d0(CHero * this_ptr)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_FUN_004f28d0(CHero *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CMotionList *pCVar1;
  int iVar2;
  CVector3f *pCVar3;
  CDemonActor *in_stack_00000008;
  int in_stack_0000000c;
  CVector3f local_14;
  
  if (in_stack_0000000c == 0) {
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
                         ((CDemonActor *)this_ptr,&local_14,&(in_stack_00000008->location).position)
      ;
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
  (this_ptr->base).grabbed_by = in_stack_00000008;
  (this_ptr->base).grabbed_type = in_stack_0000000c;
  return 1;
}
