// Name: core_barrier.cpp_CBarrier_FUN_00414460
// Address: 00414460
// Address Range: [[00414460, 00414609]]
// Convention: __cdecl
// Signature: void core_barrier.cpp_CBarrier_FUN_00414460(CBarrier * this_ptr)

#include "nocturne.h"

void __cdecl core_barrier_cpp_CBarrier_FUN_00414460(CBarrier *this_ptr)

{
  int iVar1;
  uint uStack00000018;
  uint uStack0000002c;
  float in_stack_00000038;
  uint uStack00000040;
  float in_stack_0000004c;
  uint uStack00000054;
  float in_stack_00000060;
  uint uStack00000068;
  float in_stack_00000074;
  uint uStack0000007c;
  float in_stack_00000088;
  float in_stack_0000009c;
  
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base_actor);
    return;
  }
  (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
  (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x38);
  uStack00000018 = 0x4144e7;
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4b);
  if (iVar1 != 0) {
    *(float *)this_ptr->field1_0x158 = *(float *)this_ptr->field1_0x158 - in_stack_00000038;
  }
  uStack0000002c = 0x414509;
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4d);
  if (iVar1 != 0) {
    *(float *)this_ptr->field1_0x158 = *(float *)this_ptr->field1_0x158 + in_stack_0000004c;
  }
  uStack00000040 = 0x41452b;
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1e);
  if (iVar1 != 0) {
    *(float *)(this_ptr->field1_0x158 + 4) =
         *(float *)(this_ptr->field1_0x158 + 4) - in_stack_00000060;
  }
  uStack00000054 = 0x41454d;
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x10);
  if (iVar1 != 0) {
    *(float *)(this_ptr->field1_0x158 + 4) =
         *(float *)(this_ptr->field1_0x158 + 4) + in_stack_00000074;
  }
  uStack00000068 = 0x41456f;
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x50);
  if (iVar1 != 0) {
    *(float *)(this_ptr->field1_0x158 + 8) =
         *(float *)(this_ptr->field1_0x158 + 8) - in_stack_00000088;
  }
  uStack0000007c = 0x414591;
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x48);
  if (iVar1 != 0) {
    *(float *)(this_ptr->field1_0x158 + 8) =
         *(float *)(this_ptr->field1_0x158 + 8) + in_stack_0000009c;
  }
  if (*(int *)this_ptr->field1_0x158 < 0x3f000000) {
    this_ptr->field1_0x158[0] = '\0';
    this_ptr->field1_0x158[1] = '\0';
    this_ptr->field1_0x158[2] = '\0';
    this_ptr->field1_0x158[3] = '?';
  }
  if (*(float *)(this_ptr->field1_0x158 + 4) < 0.5) {
    this_ptr->field1_0x158[4] = '\0';
    this_ptr->field1_0x158[5] = '\0';
    this_ptr->field1_0x158[6] = '\0';
    this_ptr->field1_0x158[7] = '?';
  }
  if (0.5 <= *(float *)(this_ptr->field1_0x158 + 8)) {
    return;
  }
  this_ptr->field1_0x158[8] = '\0';
  this_ptr->field1_0x158[9] = '\0';
  this_ptr->field1_0x158[10] = '\0';
  this_ptr->field1_0x158[0xb] = '?';
  return;
}
