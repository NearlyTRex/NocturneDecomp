// Name: core_barrier.cpp_CBarrier_FUN_00414460
// Address: 00414460
// Address Range: [[00414460, 00414609]]
// Convention: __cdecl
// Signature: void core_barrier.cpp_CBarrier_FUN_00414460(CBarrier * this_ptr)

#include "nocturne.h"

void __cdecl core_barrier_cpp_CBarrier_FUN_00414460(CBarrier *this_ptr)

{
  int iVar1;
  float fStack_18;
  
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base_actor);
    return;
  }
  fStack_18 = g_CGamePtr->delta_time_float * (float)5;
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
  if (iVar1 != 0) {
    fStack_18 = fStack_18 * (float)5;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
  if (iVar1 != 0) {
    fStack_18 = fStack_18 * (float)0.20000000000000001;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4b);
  if (iVar1 != 0) {
    *(float *)this_ptr->field1_0x158 = *(float *)this_ptr->field1_0x158 - fStack_18;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
  if (iVar1 != 0) {
    *(float *)this_ptr->field1_0x158 = *(float *)this_ptr->field1_0x158 + fStack_18;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1e);
  if (iVar1 != 0) {
    *(float *)(this_ptr->field1_0x158 + 4) = *(float *)(this_ptr->field1_0x158 + 4) - fStack_18;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x10);
  if (iVar1 != 0) {
    *(float *)(this_ptr->field1_0x158 + 4) = *(float *)(this_ptr->field1_0x158 + 4) + fStack_18;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x50);
  if (iVar1 != 0) {
    *(float *)(this_ptr->field1_0x158 + 8) = *(float *)(this_ptr->field1_0x158 + 8) - fStack_18;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x48);
  if (iVar1 != 0) {
    *(float *)(this_ptr->field1_0x158 + 8) = *(float *)(this_ptr->field1_0x158 + 8) + fStack_18;
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
