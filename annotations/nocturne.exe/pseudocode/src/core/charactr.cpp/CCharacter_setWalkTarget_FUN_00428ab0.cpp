// Name: core_charactr.cpp_CCharacter_setWalkTarget_FUN_00428ab0
// Address: 00428ab0
// Address Range: [[00428ab0, 00428b5e]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_setWalkTarget_FUN_00428ab0(CCharacter *this_ptr,CDemonActor *target,float min_distance,float max_distance)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_setWalkTarget_FUN_00428ab0(CCharacter *this_ptr,CDemonActor *target,float min_distance,float max_distance)

{
  CMotionList *this_ptr_00;
  char *state_name;
  int iVar1;
  
  if (target == (CDemonActor *)0x0) {
    if (((this_ptr->is_walking != 0) && (this_ptr->walk_to_target != (CDemonActor *)0x0)) &&
       ((this_ptr->model).model_name[0] != '\0')) {
      iVar1 = 0;
      state_name = "STAND";
      this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                              (&(this_ptr->model).motion_controller);
      iVar1 = core_motion_cpp_CMotionList_findStateIndex_FUN_004e10a0(this_ptr_00,state_name,iVar1);
      if (-1 < iVar1) {
        core_motion_cpp_CMotionController_setDesiredStateByName_FUN_004e1740
                  (&(this_ptr->model).motion_controller,"STAND",1);
      }
    }
    this_ptr->is_walking = 0;
  }
  else {
    this_ptr->is_walking = 1;
  }
  this_ptr->walk_to_target = target;
  this_ptr->walk_min_distance = min_distance;
  this_ptr->walk_max_distance = max_distance;
  (*(((this_ptr->base).vtable._uc)->_uc).setWalkTimeout)(this_ptr,-1.0);
  return;
}
