// Name: core_glass.cpp_CGlass_processInEditor_FUN_004eb490
// Address: 004eb490
// MANUAL RECONSTRUCTION
// Address Range: [[004eb490, 004eb5f9]]
// Convention: __cdecl
// Signature: void __cdecl core_glass_cpp_CGlass_processInEditor_FUN_004eb490(CGlass *this_ptr)

#include "nocturne.h"

void __cdecl core_glass_cpp_CGlass_processInEditor_FUN_004eb490(CGlass *this_ptr)

{
  int iVar1;
  float fStack_18;
  
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
  if (iVar1 != 0) {
    fStack_18 = g_CGamePtr->delta_time_float * (float)4;
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LMENU);
    if (iVar1 != 0) {
      fStack_18 = fStack_18 * (float)0.10000000000000001;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
    if (iVar1 != 0) {
      fStack_18 = fStack_18 * (float)5;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD4);
    if (iVar1 != 0) {
      (this_ptr->glass_size).x = (this_ptr->glass_size).x - fStack_18;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD6);
    if (iVar1 != 0) {
      (this_ptr->glass_size).x = (this_ptr->glass_size).x + fStack_18;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD2);
    if (iVar1 != 0) {
      (this_ptr->glass_size).y = (this_ptr->glass_size).y - fStack_18;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD8);
    if (iVar1 != 0) {
      (this_ptr->glass_size).y = (this_ptr->glass_size).y + fStack_18;
    }
    if ((this_ptr->glass_size).x < 0.5) {
      (this_ptr->glass_size).x = 0.5;
    }
    if ((this_ptr->glass_size).y < 0.5) {
      (this_ptr->glass_size).y = 0.5;
    }
    (this_ptr->glass_size).z = 0.1;
    (*((this_ptr->base).vtable._ub)->setup)(&this_ptr->base);
    return;
  }
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
  (*((this_ptr->base).vtable._ub)->setup)(&this_ptr->base);
  return;
}
