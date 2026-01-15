// Name: core_conveyor.cpp_FUN_004421c0
// Address: 004421c0
// Address Range: [[004421c0, 004422e7]]
// Convention: unknown
// Signature: undefined core_conveyor.cpp_FUN_004421c0()

#include "nocturne.h"

/* Signature: byte actors_other_conveyor.cpp_FUN_004421c0(uint param_1) */

void core_conveyor_cpp_FUN_004421c0(void)

{
  CKeys *this_ptr;
  int iVar1;
  int in_stack_00000004;
  float in_stack_00000008;
  float in_stack_00000010;
  float in_stack_00000018;
  float in_stack_00000020;
  
  this_ptr = g_CKeysPtr;
  *(uint *)(in_stack_00000004 + 0x724) = 4;
  iVar1 = (*this_ptr->vtable->getKeyState)(this_ptr,0x1d);
  if (iVar1 == 0) {
    core_platfrm_cpp_FUN_0054ea00();
    return;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4b);
  if (iVar1 != 0) {
    *(float *)(in_stack_00000004 + 0x72c) =
         *(float *)(in_stack_00000004 + 0x72c) - in_stack_00000008;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
  if (iVar1 != 0) {
    *(float *)(in_stack_00000004 + 0x72c) =
         *(float *)(in_stack_00000004 + 0x72c) + in_stack_00000010;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x50);
  if (iVar1 != 0) {
    *(float *)(in_stack_00000004 + 0x734) =
         *(float *)(in_stack_00000004 + 0x734) - in_stack_00000018;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x48);
  if (iVar1 != 0) {
    *(float *)(in_stack_00000004 + 0x734) =
         *(float *)(in_stack_00000004 + 0x734) + in_stack_00000020;
  }
  if (*(int *)(in_stack_00000004 + 0x72c) < 0x3f000000) {
    *(uint *)(in_stack_00000004 + 0x72c) = 0x3f000000;
  }
  if (*(float *)(in_stack_00000004 + 0x730) < 0.5) {
    *(uint *)(in_stack_00000004 + 0x730) = 0x3f000000;
  }
  if (0.5 <= *(float *)(in_stack_00000004 + 0x734)) {
    return;
  }
  *(uint *)(in_stack_00000004 + 0x734) = 0x3f000000;
  return;
}
