// Name: core_barrier.cpp_CBarrier_processInEditor_FUN_00414460
// Address: 00414460
// Address Range: [[00414460, 00414609]]
// Convention: __cdecl
// Signature: void __cdecl core_barrier_cpp_CBarrier_processInEditor_FUN_00414460(CBarrier *this_ptr)

#include "nocturne.h"

void __cdecl core_barrier_cpp_CBarrier_processInEditor_FUN_00414460(CBarrier *this_ptr)

{
  int iVar1;
  float fStack_18;
  
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
    return;
  }
  fStack_18 = g_CGamePtr->delta_time_float * (float)5;
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
  if (iVar1 != 0) {
    fStack_18 = fStack_18 * (float)5;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LMENU);
  if (iVar1 != 0) {
    fStack_18 = fStack_18 * (float)0.20000000000000001;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD4);
  if (iVar1 != 0) {
    (this_ptr->size).x = (this_ptr->size).x - fStack_18;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD6);
  if (iVar1 != 0) {
    (this_ptr->size).x = (this_ptr->size).x + fStack_18;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_A);
  if (iVar1 != 0) {
    (this_ptr->size).y = (this_ptr->size).y - fStack_18;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_Q);
  if (iVar1 != 0) {
    (this_ptr->size).y = (this_ptr->size).y + fStack_18;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD2);
  if (iVar1 != 0) {
    (this_ptr->size).z = (this_ptr->size).z - fStack_18;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD8);
  if (iVar1 != 0) {
    (this_ptr->size).z = (this_ptr->size).z + fStack_18;
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
