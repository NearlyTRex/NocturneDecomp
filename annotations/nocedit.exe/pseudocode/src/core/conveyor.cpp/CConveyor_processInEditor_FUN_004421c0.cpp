// Name: core_conveyor.cpp_CConveyor_processInEditor_FUN_004421c0
// Address: 004421c0
// Address Range: [[004421c0, 004422e7]]
// Convention: __cdecl
// Signature: void __cdecl core_conveyor_cpp_CConveyor_processInEditor_FUN_004421c0(CConveyor *this_ptr)

#include "nocturne.h"

void __cdecl core_conveyor_cpp_CConveyor_processInEditor_FUN_004421c0(CConveyor *this_ptr)

{
  CKeys *this_ptr_00;
  int iVar1;
  float in_stack_00000008;
  float in_stack_00000010;
  float in_stack_00000018;
  float in_stack_00000020;
  
  this_ptr_00 = g_CKeysPtr;
  (this_ptr->base).platform_type = 4;
  iVar1 = (*this_ptr_00->vtable->getKeyState)(this_ptr_00,0x1d);
  if (iVar1 == 0) {
    core_platfrm_cpp_CPlatform_processInEditor_FUN_0054ea00(&this_ptr->base);
    return;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4b);
  if (iVar1 != 0) {
    (this_ptr->size).x = (this_ptr->size).x - in_stack_00000008;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
  if (iVar1 != 0) {
    (this_ptr->size).x = (this_ptr->size).x + in_stack_00000010;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x50);
  if (iVar1 != 0) {
    (this_ptr->size).z = (this_ptr->size).z - in_stack_00000018;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x48);
  if (iVar1 != 0) {
    (this_ptr->size).z = (this_ptr->size).z + in_stack_00000020;
  }
  if ((int)(this_ptr->size).x < 0x3f000000) {
    (this_ptr->size).x = 0.5;
  }
  if ((this_ptr->size).y < 0.5) {
    (this_ptr->size).y = 0.5;
  }
  if (0.5 <= (this_ptr->size).z) {
    return;
  }
  (this_ptr->size).z = 0.5;
  return;
}
