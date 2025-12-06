// Name: core_charactr.cpp_CCharacter_FUN_0042d390
// Address: 0042d390
// Address Range: [[0042d390, 0042d3cf]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_FUN_0042d390(CCharacter * this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_FUN_0042d390(CCharacter *this_ptr)

{
  CMotionList *this_ptr_00;
  int iVar1;
  
  this_ptr->field11_0x25a0[0x2c] = '\0';
  this_ptr->field11_0x25a0[0x2d] = '\0';
  this_ptr->field11_0x25a0[0x2e] = '\0';
  this_ptr->field11_0x25a0[0x2f] = '\0';
  this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                          (&(this_ptr->model).motion_controller);
  iVar1 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(this_ptr_00);
  *(int *)(this_ptr->field11_0x25a0 + 0x28) = iVar1;
  return (uint)(-1 < iVar1);
}
