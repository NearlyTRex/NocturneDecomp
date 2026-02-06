// Name: core_flies.cpp_CFlies_processInEditor_FUN_004ccaf0
// Address: 004ccaf0
// Address Range: [[004ccaf0, 004ccc6a]]
// Convention: __cdecl
// Signature: void __cdecl core_flies_cpp_CFlies_processInEditor_FUN_004ccaf0(CFlies *this_ptr)

#include "nocturne.h"

void __cdecl core_flies_cpp_CFlies_processInEditor_FUN_004ccaf0(CFlies *this_ptr)

{
  int iVar1;
  float in_stack_00000008;
  float in_stack_00000010;
  float in_stack_00000018;
  float in_stack_00000020;
  float in_stack_00000028;
  float in_stack_00000030;
  
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
  }
  else {
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4b);
    if (iVar1 != 0) {
      (this_ptr->box_size).x = (this_ptr->box_size).x - in_stack_00000008;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
    if (iVar1 != 0) {
      (this_ptr->box_size).x = (this_ptr->box_size).x + in_stack_00000010;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1e);
    if (iVar1 != 0) {
      (this_ptr->box_size).y = (this_ptr->box_size).y - in_stack_00000018;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x10);
    if (iVar1 != 0) {
      (this_ptr->box_size).y = (this_ptr->box_size).y + in_stack_00000020;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x50);
    if (iVar1 != 0) {
      (this_ptr->box_size).z = (this_ptr->box_size).z - in_stack_00000028;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x48);
    if (iVar1 != 0) {
      (this_ptr->box_size).z = (this_ptr->box_size).z + in_stack_00000030;
    }
    if ((int)(this_ptr->box_size).x < 0x3f000000) {
      (this_ptr->box_size).x = 0.5;
    }
    if ((this_ptr->box_size).y < 0.5) {
      (this_ptr->box_size).y = 0.5;
    }
    if ((this_ptr->box_size).z < 0.5) {
      (this_ptr->box_size).z = 0.5;
    }
  }
  (*((this_ptr->base).vtable._ub)->process)(&this_ptr->base,g_CGamePtr->delta_time_float);
  return;
}
