// Name: core_game.cpp_adjustFudgePosition_FUN_004d8750
// Address: 004d8750
// Address Range: [[004d8750, 004d8881]]
// Convention: __cdecl
// Signature: int core_game.cpp_adjustFudgePosition_FUN_004d8750(CGame * this_ptr, float delta_time, int additional_param)

#include "nocturne.h"

int __cdecl
core_game_cpp_adjustFudgePosition_FUN_004d8750
          (CGame *this_ptr,float delta_time,int additional_param)

{
  int iVar1;
  int iVar2;
  float unaff_retaddr;
  float in_stack_00000010;
  float in_stack_00000018;
  float in_stack_00000020;
  float in_stack_00000028;
  
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
  if ((iVar1 != 0) && (this_ptr->unk14 != 0)) {
    (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
    iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x4b);
    if (iVar1 != 0) {
      *(float *)this_ptr->unk14 = *(float *)this_ptr->unk14 - unaff_retaddr;
    }
    iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x4d);
    if (iVar1 != 0) {
      *(float *)this_ptr->unk14 = *(float *)this_ptr->unk14 + delta_time;
    }
    iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x48);
    if (iVar1 != 0) {
      *(float *)(this_ptr->unk14 + 8) = *(float *)(this_ptr->unk14 + 8) - in_stack_00000010;
    }
    iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x50);
    if (iVar1 != 0) {
      *(float *)(this_ptr->unk14 + 8) = *(float *)(this_ptr->unk14 + 8) + in_stack_00000018;
    }
    iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x1e);
    if (iVar1 != 0) {
      *(float *)(this_ptr->unk14 + 4) = *(float *)(this_ptr->unk14 + 4) - in_stack_00000020;
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x10);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = this_ptr->unk14;
      *(float *)(iVar1 + 4) = *(float *)(iVar1 + 4) + in_stack_00000028;
      return iVar1;
    }
  }
  return iVar1;
}
