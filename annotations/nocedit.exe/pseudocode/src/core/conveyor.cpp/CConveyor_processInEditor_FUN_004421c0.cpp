// Name: core_conveyor.cpp_CConveyor_processInEditor_FUN_004421c0
// Address: 004421c0
// Address Range: [[004421c0, 004422e7]]
// Convention: __cdecl
// Signature: void __cdecl core_conveyor_cpp_CConveyor_processInEditor_FUN_004421c0(CConveyor *this_ptr)

#include "nocturne.h"

void __cdecl core_conveyor_cpp_CConveyor_processInEditor_FUN_004421c0(CConveyor *this_ptr)

{
  float fVar1;
  CKeys *this_ptr_00;
  int iVar2;
  
  this_ptr_00 = g_CKeysPtr;
  (this_ptr->base).platform_type = 4;
  iVar2 = (*this_ptr_00->vtable->getKeyState)(this_ptr_00,DIK_LCONTROL);
  if (iVar2 == 0) {
    core_platfrm_cpp_CPlatform_processInEditor_FUN_0054ea00(&this_ptr->base);
    return;
  }
  fVar1 = g_CGamePtr->delta_time_float * (float)4;
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD4);
  if (iVar2 != 0) {
    (this_ptr->size).x = (this_ptr->size).x - fVar1;
  }
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD6);
  if (iVar2 != 0) {
    (this_ptr->size).x = (this_ptr->size).x + fVar1;
  }
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD2);
  if (iVar2 != 0) {
    (this_ptr->size).z = (this_ptr->size).z - fVar1;
  }
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD8);
  if (iVar2 != 0) {
    (this_ptr->size).z = (this_ptr->size).z + fVar1;
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
