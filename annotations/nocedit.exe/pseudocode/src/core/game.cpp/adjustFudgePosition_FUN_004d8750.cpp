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
  uint uStack00000018;
  float in_stack_00000024;
  uint uStack0000002c;
  float in_stack_00000038;
  uint uStack00000040;
  float in_stack_0000004c;
  uint uStack00000054;
  float in_stack_00000060;
  uint uStack00000068;
  float in_stack_00000074;
  float in_stack_00000088;
  
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
  if ((iVar1 != 0) && (this_ptr->field102_0x9bc != 0)) {
    (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x38);
    iVar1 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x4b);
    if (iVar1 != 0) {
      *(float *)this_ptr->field102_0x9bc = *(float *)this_ptr->field102_0x9bc - in_stack_00000024;
    }
    uStack00000018 = 0x4d87d9;
    iVar1 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x4d);
    if (iVar1 != 0) {
      *(float *)this_ptr->field102_0x9bc = *(float *)this_ptr->field102_0x9bc + in_stack_00000038;
    }
    uStack0000002c = 0x4d87fa;
    iVar1 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x48);
    if (iVar1 != 0) {
      *(float *)(this_ptr->field102_0x9bc + 8) =
           *(float *)(this_ptr->field102_0x9bc + 8) - in_stack_0000004c;
    }
    uStack00000040 = 0x4d881d;
    iVar1 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x50);
    if (iVar1 != 0) {
      *(float *)(this_ptr->field102_0x9bc + 8) =
           *(float *)(this_ptr->field102_0x9bc + 8) + in_stack_00000060;
    }
    uStack00000054 = 0x4d8840;
    iVar1 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x1e);
    if (iVar1 != 0) {
      *(float *)(this_ptr->field102_0x9bc + 4) =
           *(float *)(this_ptr->field102_0x9bc + 4) - in_stack_00000074;
    }
    uStack00000068 = 0x4d8863;
    iVar1 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x10);
    if (iVar1 != 0) {
      iVar1 = this_ptr->field102_0x9bc;
      *(float *)(iVar1 + 4) = *(float *)(iVar1 + 4) + in_stack_00000088;
      return iVar1;
    }
  }
  return iVar1;
}
