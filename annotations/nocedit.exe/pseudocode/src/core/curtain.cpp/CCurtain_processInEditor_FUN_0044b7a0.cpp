// Name: core_curtain.cpp_CCurtain_processInEditor_FUN_0044b7a0
// Address: 0044b7a0
// Address Range: [[0044b7a0, 0044b8c3]]
// Convention: __cdecl
// Signature: void __cdecl core_curtain_cpp_CCurtain_processInEditor_FUN_0044b7a0(CCurtain *this_ptr)

#include "nocturne.h"

void __cdecl core_curtain_cpp_CCurtain_processInEditor_FUN_0044b7a0(CCurtain *this_ptr)

{
  float fVar1;
  int iVar2;
  
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
  if (iVar2 != 0) {
    fVar1 = g_CGamePtr->delta_time_float * (float)4;
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD4);
    if (iVar2 != 0) {
      (this_ptr->curtain_size).x = (this_ptr->curtain_size).x - fVar1;
    }
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD6);
    if (iVar2 != 0) {
      (this_ptr->curtain_size).x = (this_ptr->curtain_size).x + fVar1;
    }
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD2);
    if (iVar2 != 0) {
      (this_ptr->curtain_size).y = (this_ptr->curtain_size).y - fVar1;
    }
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD8);
    if (iVar2 != 0) {
      (this_ptr->curtain_size).y = (this_ptr->curtain_size).y + fVar1;
    }
    if ((int)(this_ptr->curtain_size).x < 0x3f000000) {
      (this_ptr->curtain_size).x = 0.5;
    }
    if ((this_ptr->curtain_size).y < 0.5) {
      (this_ptr->curtain_size).y = 0.5;
    }
    (this_ptr->curtain_size).z = 0.1;
    (*((this_ptr->base).vtable._ub)->setup)(&this_ptr->base);
    return;
  }
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
  (*((this_ptr->base).vtable._ub)->setup)(&this_ptr->base);
  return;
}
