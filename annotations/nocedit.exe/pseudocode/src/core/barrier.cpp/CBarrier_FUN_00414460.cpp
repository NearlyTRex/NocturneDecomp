// Name: core_barrier.cpp_CBarrier_FUN_00414460
// Address: 00414460
// Address Range: [[00414460, 00414609]]
// Convention: __cdecl
// Signature: void __cdecl core_barrier_cpp_CBarrier_FUN_00414460(CBarrier *this_ptr)

#include "nocturne.h"

void __cdecl core_barrier_cpp_CBarrier_FUN_00414460(CBarrier *this_ptr)

{
  int iVar1;
  float in_stack_00000008;
  float in_stack_00000010;
  float in_stack_00000018;
  float in_stack_00000020;
  float in_stack_00000028;
  float in_stack_00000030;
  
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
    return;
  }
  (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
  (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4b);
  if (iVar1 != 0) {
    *(float *)this_ptr->unk = *(float *)this_ptr->unk - in_stack_00000008;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
  if (iVar1 != 0) {
    *(float *)this_ptr->unk = *(float *)this_ptr->unk + in_stack_00000010;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1e);
  if (iVar1 != 0) {
    *(float *)(this_ptr->unk + 4) = *(float *)(this_ptr->unk + 4) - in_stack_00000018;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x10);
  if (iVar1 != 0) {
    *(float *)(this_ptr->unk + 4) = *(float *)(this_ptr->unk + 4) + in_stack_00000020;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x50);
  if (iVar1 != 0) {
    *(float *)(this_ptr->unk + 8) = *(float *)(this_ptr->unk + 8) - in_stack_00000028;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x48);
  if (iVar1 != 0) {
    *(float *)(this_ptr->unk + 8) = *(float *)(this_ptr->unk + 8) + in_stack_00000030;
  }
  if (*(int *)this_ptr->unk < 0x3f000000) {
    this_ptr->unk[0] = '\0';
    this_ptr->unk[1] = '\0';
    this_ptr->unk[2] = '\0';
    this_ptr->unk[3] = '?';
  }
  if (*(float *)(this_ptr->unk + 4) < 0.5) {
    this_ptr->unk[4] = '\0';
    this_ptr->unk[5] = '\0';
    this_ptr->unk[6] = '\0';
    this_ptr->unk[7] = '?';
  }
  if (0.5 <= *(float *)(this_ptr->unk + 8)) {
    return;
  }
  this_ptr->unk[8] = '\0';
  this_ptr->unk[9] = '\0';
  this_ptr->unk[10] = '\0';
  this_ptr->unk[0xb] = '?';
  return;
}
