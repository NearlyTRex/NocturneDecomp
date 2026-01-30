// Name: core_flame.cpp_FUN_004caf60
// Address: 004caf60
// Address Range: [[004caf60, 004cb096]]
// Convention: __cdecl
// Signature: void __cdecl core_flame_cpp_FUN_004caf60(void)

#include "nocturne.h"

/* Signature: byte actors_other_flamecan.cpp_FUN_004caf60(uint param_1) */

void __cdecl core_flame_cpp_FUN_004caf60(void)

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
    uStack0000001c = 0x3dcccccd;
    if (*(int *)in_stack_00000004[1].actor_name < 0x3dcccccd) {
      in_stack_00000004[1].actor_name[0] = -0x33;
      in_stack_00000004[1].actor_name[1] = -0x34;
      in_stack_00000004[1].actor_name[2] = -0x34;
      in_stack_00000004[1].actor_name[3] = '=';
    }
    if (*(float *)(in_stack_00000004[1].actor_name + 4) < 0.1) {
      in_stack_00000004[1].actor_name[4] = -0x33;
      in_stack_00000004[1].actor_name[5] = -0x34;
      in_stack_00000004[1].actor_name[6] = -0x34;
      in_stack_00000004[1].actor_name[7] = '=';
    }
    if (*(float *)(in_stack_00000004[1].actor_name + 8) < 0.1) {
      in_stack_00000004[1].actor_name[8] = -0x33;
      in_stack_00000004[1].actor_name[9] = -0x34;
      in_stack_00000004[1].actor_name[10] = -0x34;
      in_stack_00000004[1].actor_name[0xb] = '=';
    }
    *(uint *)(in_stack_00000004[1].actor_name + 8) =
         *(uint *)in_stack_00000004[1].actor_name;
    uStack00000014 = 0x4cb078;
    core_flamecan_cpp_FUN_004cad90();
    return;
  }
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(in_stack_00000004);
  core_flamecan_cpp_FUN_004cad90();
  return;
}
