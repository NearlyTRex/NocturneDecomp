// Name: core_flies.cpp_FUN_004ccaf0
// Address: 004ccaf0
// Address Range: [[004ccaf0, 004ccc6a]]
// Convention: unknown
// Signature: void core_flies_cpp_FUN_004ccaf0(void)

#include "nocturne.h"

/* Signature: byte actors_other_flies.cpp_FUN_004ccaf0(uint param_1) */

void core_flies_cpp_FUN_004ccaf0(void)

{
  int iVar1;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  float in_stack_00000010;
  float in_stack_00000018;
  float in_stack_00000020;
  float in_stack_00000028;
  float in_stack_00000030;
  
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(in_stack_00000004);
  }
  else {
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4b);
    if (iVar1 != 0) {
      *(float *)in_stack_00000004[1].actor_name =
           *(float *)in_stack_00000004[1].actor_name - in_stack_00000008;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
    if (iVar1 != 0) {
      *(float *)in_stack_00000004[1].actor_name =
           *(float *)in_stack_00000004[1].actor_name + in_stack_00000010;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1e);
    if (iVar1 != 0) {
      *(float *)(in_stack_00000004[1].actor_name + 4) =
           *(float *)(in_stack_00000004[1].actor_name + 4) - in_stack_00000018;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x10);
    if (iVar1 != 0) {
      *(float *)(in_stack_00000004[1].actor_name + 4) =
           *(float *)(in_stack_00000004[1].actor_name + 4) + in_stack_00000020;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x50);
    if (iVar1 != 0) {
      *(float *)(in_stack_00000004[1].actor_name + 8) =
           *(float *)(in_stack_00000004[1].actor_name + 8) - in_stack_00000028;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x48);
    if (iVar1 != 0) {
      *(float *)(in_stack_00000004[1].actor_name + 8) =
           *(float *)(in_stack_00000004[1].actor_name + 8) + in_stack_00000030;
    }
    if (*(int *)in_stack_00000004[1].actor_name < 0x3f000000) {
      in_stack_00000004[1].actor_name[0] = '\0';
      in_stack_00000004[1].actor_name[1] = '\0';
      in_stack_00000004[1].actor_name[2] = '\0';
      in_stack_00000004[1].actor_name[3] = '?';
    }
    if (*(float *)(in_stack_00000004[1].actor_name + 4) < 0.5) {
      in_stack_00000004[1].actor_name[4] = '\0';
      in_stack_00000004[1].actor_name[5] = '\0';
      in_stack_00000004[1].actor_name[6] = '\0';
      in_stack_00000004[1].actor_name[7] = '?';
    }
    if (*(float *)(in_stack_00000004[1].actor_name + 8) < 0.5) {
      in_stack_00000004[1].actor_name[8] = '\0';
      in_stack_00000004[1].actor_name[9] = '\0';
      in_stack_00000004[1].actor_name[10] = '\0';
      in_stack_00000004[1].actor_name[0xb] = '?';
    }
  }
  (*((in_stack_00000004->vtable)._ub)->process)(in_stack_00000004,g_CGamePtr->delta_time_float);
  return;
}
