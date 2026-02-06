// Name: core_game.cpp_CGame_processFudge_FUN_004d8750
// Address: 004d8750
// Address Range: [[004d8750, 004d8881]]
// Convention: __cdecl
// Signature: int __cdecl core_game_cpp_CGame_processFudge_FUN_004d8750(CGame *this_ptr,float delta_time,int additional_param)

#include "nocturne.h"

int __cdecl
core_game_cpp_CGame_processFudge_FUN_004d8750(CGame *this_ptr,float delta_time,int additional_param)

{
  CVector3f *pCVar1;
  int iVar2;
  int iVar3;
  float unaff_retaddr;
  float in_stack_00000010;
  float in_stack_00000018;
  float in_stack_00000020;
  float in_stack_00000028;
  
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
  if ((iVar2 != 0) && (this_ptr->debug_fudge_target != (CVector3f *)0x0)) {
    (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x4b);
    if (iVar2 != 0) {
      this_ptr->debug_fudge_target->x = this_ptr->debug_fudge_target->x - unaff_retaddr;
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x4d);
    if (iVar2 != 0) {
      this_ptr->debug_fudge_target->x = this_ptr->debug_fudge_target->x + delta_time;
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x48);
    if (iVar2 != 0) {
      this_ptr->debug_fudge_target->z = this_ptr->debug_fudge_target->z - in_stack_00000010;
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x50);
    if (iVar2 != 0) {
      this_ptr->debug_fudge_target->z = this_ptr->debug_fudge_target->z + in_stack_00000018;
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x1e);
    if (iVar2 != 0) {
      this_ptr->debug_fudge_target->y = this_ptr->debug_fudge_target->y - in_stack_00000020;
    }
    iVar3 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x10);
    iVar2 = 0;
    if (iVar3 != 0) {
      pCVar1 = this_ptr->debug_fudge_target;
      pCVar1->y = pCVar1->y + in_stack_00000028;
      return (int)pCVar1;
    }
  }
  return iVar2;
}
