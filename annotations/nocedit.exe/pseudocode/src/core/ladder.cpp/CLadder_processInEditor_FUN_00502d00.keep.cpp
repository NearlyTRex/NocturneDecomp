// Name: core_ladder.cpp_CLadder_processInEditor_FUN_00502d00
// Address: 00502d00
// Address Range: [[00502d00, 00502e4e]]
// Convention: __cdecl
// Signature: void __cdecl core_ladder_cpp_CLadder_processInEditor_FUN_00502d00(CLadder *this_ptr)

#include "nocturne.h"

void __cdecl core_ladder_cpp_CLadder_processInEditor_FUN_00502d00(CLadder *this_ptr)

{
  float fVar1;
  int iVar2;
  double dVar3;
  float edit_speed;

  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
  if (iVar2 == 0) {
    core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
  }
  else {
    edit_speed = g_CGameInstance.delta_time_float * 4.0f;
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD4);
    if (iVar2 != 0) {
      (this_ptr->ladder_size).x = (this_ptr->ladder_size).x - edit_speed;
    }
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD6);
    if (iVar2 != 0) {
      (this_ptr->ladder_size).x = (this_ptr->ladder_size).x + edit_speed;
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_A);
    if (iVar2 != 0) {
      (this_ptr->ladder_size).y = (this_ptr->ladder_size).y - 1.0f;
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_Q);
    if (iVar2 != 0) {
      (this_ptr->ladder_size).y = 1.0f + (this_ptr->ladder_size).y;
    }
    if ((this_ptr->ladder_size).x < (float)0.5) {
      (this_ptr->ladder_size).x = 0.5;
    }
    if ((this_ptr->ladder_size).y < 1.0f) {
      (this_ptr->ladder_size).y = 1.0f;
    }
  }
  dVar3 = floor
                    ((double)((this_ptr->ladder_size).y / 1.0f + (float)0.5));
  fVar1 = (float)dVar3 * 1.0f;
  (this_ptr->ladder_size).z = 0.0;
  (this_ptr->ladder_size).y = fVar1;
  return;
}
