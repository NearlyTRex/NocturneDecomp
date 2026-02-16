// Name: core_game.cpp_CGame_processFudge_FUN_004d8750
// Address: 004d8750
// Address Range: [[004d8750, 004d8881]]
// Convention: __cdecl
// Signature: int __cdecl core_game_cpp_CGame_processFudge_FUN_004d8750(CGame *this_ptr,float delta_time,int additional_param)

#include "nocturne.h"

int __cdecl core_game_cpp_CGame_processFudge_FUN_004d8750(CGame *this_ptr,float delta_time,int additional_param)

{
  CVector3f *pCVar1;
  int iVar2;
  int iVar3;
  float fStack_18;
  
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
  if ((iVar2 != 0) && (this_ptr->debug_fudge_target != (CVector3f *)0x0)) {
    fStack_18 = this_ptr->debug_fudge_step;
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LMENU);
    if (iVar2 != 0) {
      fStack_18 = fStack_18 * (float)0.10000000000000001;
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_NUMPAD4);
    if (iVar2 != 0) {
      this_ptr->debug_fudge_target->x = this_ptr->debug_fudge_target->x - fStack_18;
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_NUMPAD6);
    if (iVar2 != 0) {
      this_ptr->debug_fudge_target->x = this_ptr->debug_fudge_target->x + fStack_18;
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_NUMPAD8);
    if (iVar2 != 0) {
      this_ptr->debug_fudge_target->z = this_ptr->debug_fudge_target->z - fStack_18;
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_NUMPAD2);
    if (iVar2 != 0) {
      this_ptr->debug_fudge_target->z = this_ptr->debug_fudge_target->z + fStack_18;
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_A);
    if (iVar2 != 0) {
      this_ptr->debug_fudge_target->y = this_ptr->debug_fudge_target->y - fStack_18;
    }
    iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_Q);
    iVar2 = 0;
    if (iVar3 != 0) {
      pCVar1 = this_ptr->debug_fudge_target;
      pCVar1->y = pCVar1->y + fStack_18;
      return (int)pCVar1;
    }
  }
  return iVar2;
}
