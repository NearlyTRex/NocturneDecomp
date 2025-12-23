// Name: core_glass.cpp_CGlass_processInEditor_FUN_004eb490
// Address: 004eb490
// Address Range: [[004eb490, 004eb5f9]]
// Convention: __cdecl
// Signature: void core_glass.cpp_CGlass_processInEditor_FUN_004eb490(CGlass * this_ptr)

#include "nocturne.h"

void __cdecl core_glass_cpp_CGlass_processInEditor_FUN_004eb490(CGlass *this_ptr)

{
  int iVar1;
  float fVar2;
  
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
  if (iVar1 != 0) {
    fVar2 = g_CGamePtr->delta_time_float * (float)4;
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
    if (iVar1 != 0) {
      fVar2 = fVar2 * (float)0.10000000000000001;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
    if (iVar1 != 0) {
      fVar2 = fVar2 * (float)5;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4b);
    if (iVar1 != 0) {
      (this_ptr->glass_size).x = (this_ptr->glass_size).x - fVar2;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
    if (iVar1 != 0) {
      (this_ptr->glass_size).x = (this_ptr->glass_size).x + fVar2;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x50);
    if (iVar1 != 0) {
      (this_ptr->glass_size).y = (this_ptr->glass_size).y - fVar2;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x48);
    if (iVar1 != 0) {
      (this_ptr->glass_size).y = (this_ptr->glass_size).y + fVar2;
    }
    if ((int)(this_ptr->glass_size).x < 0x3f000000) {
      (this_ptr->glass_size).x = 0.5;
    }
    if ((this_ptr->glass_size).y < 0.5) {
      (this_ptr->glass_size).y = 0.5;
    }
    (this_ptr->glass_size).z = 0.1;
    (*((this_ptr->base).vtable)->setup)(&this_ptr->base);
    return;
  }
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
  (*((this_ptr->base).vtable)->setup)(&this_ptr->base);
  return;
}
