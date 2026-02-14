// Name: core_flies.cpp_CFlies_processInEditor_FUN_004ccaf0
// Address: 004ccaf0
// Address Range: [[004ccaf0, 004ccc6a]]
// Convention: __cdecl
// Signature: void __cdecl core_flies_cpp_CFlies_processInEditor_FUN_004ccaf0(CFlies *this_ptr)

#include "nocturne.h"

void __cdecl core_flies_cpp_CFlies_processInEditor_FUN_004ccaf0(CFlies *this_ptr)

{
  float fVar1;
  int iVar2;
  
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
  if (iVar2 == 0) {
    core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
  }
  else {
    fVar1 = g_CGamePtr->delta_time_float * (float)4;
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4b);
    if (iVar2 != 0) {
      (this_ptr->box_size).x = (this_ptr->box_size).x - fVar1;
    }
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
    if (iVar2 != 0) {
      (this_ptr->box_size).x = (this_ptr->box_size).x + fVar1;
    }
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1e);
    if (iVar2 != 0) {
      (this_ptr->box_size).y = (this_ptr->box_size).y - fVar1;
    }
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x10);
    if (iVar2 != 0) {
      (this_ptr->box_size).y = (this_ptr->box_size).y + fVar1;
    }
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x50);
    if (iVar2 != 0) {
      (this_ptr->box_size).z = (this_ptr->box_size).z - fVar1;
    }
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x48);
    if (iVar2 != 0) {
      (this_ptr->box_size).z = (this_ptr->box_size).z + fVar1;
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
