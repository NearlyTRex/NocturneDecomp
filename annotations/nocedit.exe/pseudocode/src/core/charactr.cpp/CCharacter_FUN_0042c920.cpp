// Name: core_charactr.cpp_CCharacter_FUN_0042c920
// Address: 0042c920
// Address Range: [[0042c920, 0042c9ce]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_FUN_0042c920(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042c920(CCharacter *this_ptr)

{
  CMotionList *this_ptr_00;
  int iVar1;
  float in_stack_00000008;
  float in_stack_0000000c;
  float in_stack_00000010;
  
  if (in_stack_00000008 == 0.0) {
    if (((this_ptr->field22_0x25b0 != 0) && (this_ptr->field18_0x25a0 != 0.0)) &&
       ((this_ptr->model).model_name[0] != '\0')) {
      this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                              (&(this_ptr->model).motion_controller);
      iVar1 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0(this_ptr_00);
      if (-1 < iVar1) {
        core_motion_cpp_CMotionController_setDesiredStateByName_FUN_0052db90
                  (&(this_ptr->model).motion_controller,"STAND",1);
      }
    }
    this_ptr->field22_0x25b0 = 0;
  }
  else {
    this_ptr->field22_0x25b0 = 1;
  }
  this_ptr->field18_0x25a0 = in_stack_00000008;
  this_ptr->field19_0x25a4 = in_stack_0000000c;
  this_ptr->field20_0x25a8 = in_stack_00000010;
  (*(((this_ptr->base).vtable._uc)->_uc).cfunc25)();
  return;
}
