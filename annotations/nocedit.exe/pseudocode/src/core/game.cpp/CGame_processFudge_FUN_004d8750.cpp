// Name: core_game.cpp_CGame_processFudge_FUN_004d8750
// Address: 004d8750
// Address Range: [[004d8750, 004d8881]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_processFudge_FUN_004d8750(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_processFudge_FUN_004d8750(CGame *this_ptr)

{
  int iVar1;
  float fStack_18;
  
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
  if ((iVar1 != 0) && (this_ptr->debug_fudge_target != (CVector3f *)0x0)) {
    fStack_18 = this_ptr->debug_fudge_step;
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LMENU);
    if (iVar1 != 0) {
      fStack_18 = fStack_18 * (float)0.10000000000000001;
    }
    iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_NUMPAD4);
    if (iVar1 != 0) {
      this_ptr->debug_fudge_target->x = this_ptr->debug_fudge_target->x - fStack_18;
    }
    iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_NUMPAD6);
    if (iVar1 != 0) {
      this_ptr->debug_fudge_target->x = this_ptr->debug_fudge_target->x + fStack_18;
    }
    iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_NUMPAD8);
    if (iVar1 != 0) {
      this_ptr->debug_fudge_target->z = this_ptr->debug_fudge_target->z - fStack_18;
    }
    iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_NUMPAD2);
    if (iVar1 != 0) {
      this_ptr->debug_fudge_target->z = this_ptr->debug_fudge_target->z + fStack_18;
    }
    iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_A);
    if (iVar1 != 0) {
      this_ptr->debug_fudge_target->y = this_ptr->debug_fudge_target->y - fStack_18;
    }
    iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_Q);
    if (iVar1 != 0) {
      this_ptr->debug_fudge_target->y = this_ptr->debug_fudge_target->y + fStack_18;
      return;
    }
  }
  return;
}
