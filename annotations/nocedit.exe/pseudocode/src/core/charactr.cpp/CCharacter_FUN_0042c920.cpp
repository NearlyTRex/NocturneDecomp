// Name: core_charactr.cpp_CCharacter_FUN_0042c920
// Address: 0042c920
// Address Range: [[0042c920, 0042c9ce]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042c920(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042c920(CCharacter *this_ptr)

{
  CMotionList *this_ptr_00;
  int iVar1;
  CVector3f *in_stack_00000008;
  uint in_stack_00000014;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  
  if (in_stack_00000008 == (CVector3f *)0x0) {
    if (((*(int *)(this_ptr->field11_0x25a0 + 0x10) != 0) && (*(int *)this_ptr->field11_0x25a0 != 0)
        ) && ((this_ptr->model).model_name[0] != '\0')) {
      this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                              (&(this_ptr->model).motion_controller);
      iVar1 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0(this_ptr_00);
      if (-1 < iVar1) {
        core_motion_cpp_CMotionController_setDesiredStateByName_FUN_0052db90
                  (&(this_ptr->model).motion_controller,"STAND",1);
      }
    }
    this_ptr->field11_0x25a0[0x10] = '\0';
    this_ptr->field11_0x25a0[0x11] = '\0';
    this_ptr->field11_0x25a0[0x12] = '\0';
    this_ptr->field11_0x25a0[0x13] = '\0';
  }
  else {
    this_ptr->field11_0x25a0[0x10] = '\x01';
    this_ptr->field11_0x25a0[0x11] = '\0';
    this_ptr->field11_0x25a0[0x12] = '\0';
    this_ptr->field11_0x25a0[0x13] = '\0';
  }
  *(uint *)this_ptr->field11_0x25a0 = in_stack_00000014;
  *(uint *)(this_ptr->field11_0x25a0 + 4) = in_stack_00000018;
  *(uint *)(this_ptr->field11_0x25a0 + 8) = in_stack_0000001c;
  (*(this_ptr->base_actor).vtable[1].setPositionAndOrientation)
            (&this_ptr->base_actor,(CVector3f *)0xbf800000,in_stack_00000008);
  return;
}
