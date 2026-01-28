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
  int in_stack_00000008;
  uint in_stack_0000000c;
  uint in_stack_00000010;
  
  if (in_stack_00000008 == 0) {
    if (((*(int *)(this_ptr->unk2 + 0x10) != 0) && (*(int *)this_ptr->unk2 != 0)) &&
       ((this_ptr->model).model_name[0] != '\0')) {
      this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                              (&(this_ptr->model).motion_controller);
      iVar1 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0(this_ptr_00);
      if (-1 < iVar1) {
        core_motion_cpp_CMotionController_setDesiredStateByName_FUN_0052db90
                  (&(this_ptr->model).motion_controller,"STAND",1);
      }
    }
    this_ptr->unk2[0x10] = '\0';
    this_ptr->unk2[0x11] = '\0';
    this_ptr->unk2[0x12] = '\0';
    this_ptr->unk2[0x13] = '\0';
  }
  else {
    this_ptr->unk2[0x10] = '\x01';
    this_ptr->unk2[0x11] = '\0';
    this_ptr->unk2[0x12] = '\0';
    this_ptr->unk2[0x13] = '\0';
  }
  *(int *)this_ptr->unk2 = in_stack_00000008;
  *(uint *)(this_ptr->unk2 + 4) = in_stack_0000000c;
  *(uint *)(this_ptr->unk2 + 8) = in_stack_00000010;
  (*(((this_ptr->base).vtable._uc)->_uc).cfunc25)();
  return;
}
