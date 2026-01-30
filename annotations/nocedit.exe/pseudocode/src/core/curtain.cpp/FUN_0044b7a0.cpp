// Name: core_curtain.cpp_FUN_0044b7a0
// Address: 0044b7a0
// Address Range: [[0044b7a0, 0044b8c3]]
// Convention: __cdecl
// Signature: void __cdecl core_curtain_cpp_FUN_0044b7a0(void)

#include "nocturne.h"

/* Signature: byte actors_other_curtain.cpp_FUN_0044b7a0(uint param_1) */

void __cdecl core_curtain_cpp_FUN_0044b7a0(void)

{
  int iVar1;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  float in_stack_00000010;
  uint uStack00000014;
  float in_stack_00000018;
  uint uStack0000001c;
  float in_stack_00000020;
  
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
  if (iVar1 != 0) {
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
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x50);
    if (iVar1 != 0) {
      *(float *)(in_stack_00000004[1].actor_name + 4) =
           *(float *)(in_stack_00000004[1].actor_name + 4) - in_stack_00000018;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x48);
    if (iVar1 != 0) {
      *(float *)(in_stack_00000004[1].actor_name + 4) =
           *(float *)(in_stack_00000004[1].actor_name + 4) + in_stack_00000020;
    }
    uStack0000001c = 0x3f000000;
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
    in_stack_00000004[1].actor_name[8] = -0x33;
    in_stack_00000004[1].actor_name[9] = -0x34;
    in_stack_00000004[1].actor_name[10] = -0x34;
    in_stack_00000004[1].actor_name[0xb] = '=';
    uStack00000014 = 0x44b8a2;
    (*((in_stack_00000004->vtable)._ub)->setup)(in_stack_00000004);
    return;
  }
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(in_stack_00000004);
  (*((in_stack_00000004->vtable)._ub)->setup)(in_stack_00000004);
  return;
}
