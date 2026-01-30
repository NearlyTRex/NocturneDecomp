// Name: core_stairs.cpp_FUN_005ba900
// Address: 005ba900
// Address Range: [[005ba900, 005bab8a]]
// Convention: __cdecl
// Signature: void __cdecl core_stairs_cpp_FUN_005ba900(void)

#include "nocturne.h"

/* Signature: byte actors_other_stairs.cpp_FUN_005ba900(uint param_1) */

void __cdecl core_stairs_cpp_FUN_005ba900(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float unaff_retaddr;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  float in_stack_00000010;
  float in_stack_00000018;
  float in_stack_00000020;
  float in_stack_00000028;
  float in_stack_0000002c;
  float in_stack_00000030;
  
  iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
  if (iVar3 == 0) {
    core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(in_stack_00000004);
  }
  else {
    (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
    iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4b);
    if (iVar3 != 0) {
      *(float *)(in_stack_00000004[1].actor_name + 8) =
           *(float *)(in_stack_00000004[1].actor_name + 8) - unaff_retaddr;
    }
    iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
    if (iVar3 != 0) {
      *(float *)(in_stack_00000004[1].actor_name + 8) =
           *(float *)(in_stack_00000004[1].actor_name + 8) + in_stack_00000008;
    }
    iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1e);
    if (iVar3 != 0) {
      *(float *)in_stack_00000004[1].actor_name =
           *(float *)in_stack_00000004[1].actor_name - in_stack_00000010;
    }
    iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x10);
    if (iVar3 != 0) {
      *(float *)in_stack_00000004[1].actor_name =
           *(float *)in_stack_00000004[1].actor_name + in_stack_00000018;
    }
    iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x50);
    if (iVar3 != 0) {
      *(float *)(in_stack_00000004[1].actor_name + 4) =
           *(float *)(in_stack_00000004[1].actor_name + 4) - in_stack_00000020;
    }
    iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x48);
    if (iVar3 != 0) {
      *(float *)(in_stack_00000004[1].actor_name + 4) =
           *(float *)(in_stack_00000004[1].actor_name + 4) + in_stack_00000028;
    }
  }
  if (*(float *)(in_stack_00000004[1].actor_name + 8) < (float)0.20000000000000001) {
    in_stack_00000004[1].actor_name[8] = -0x33;
    in_stack_00000004[1].actor_name[9] = -0x34;
    in_stack_00000004[1].actor_name[10] = 'L';
    in_stack_00000004[1].actor_name[0xb] = '>';
  }
  if (*(float *)in_stack_00000004[1].actor_name < (float)0.20000000000000001) {
    in_stack_00000004[1].actor_name[0] = -0x33;
    in_stack_00000004[1].actor_name[1] = -0x34;
    in_stack_00000004[1].actor_name[2] = 'L';
    in_stack_00000004[1].actor_name[3] = '>';
  }
  if (*(float *)(in_stack_00000004[1].actor_name + 4) < (float)0.20000000000000001) {
    in_stack_00000004[1].actor_name[4] = -0x33;
    in_stack_00000004[1].actor_name[5] = -0x34;
    in_stack_00000004[1].actor_name[6] = 'L';
    in_stack_00000004[1].actor_name[7] = '>';
  }
  if (*(int *)(in_stack_00000004[1].actor_name + 0x14) < 1) {
    in_stack_00000004[1].actor_name[0x14] = '\x01';
    in_stack_00000004[1].actor_name[0x15] = '\0';
    in_stack_00000004[1].actor_name[0x16] = '\0';
    in_stack_00000004[1].actor_name[0x17] = '\0';
  }
  else if (0x14 < *(int *)(in_stack_00000004[1].actor_name + 0x14)) {
    in_stack_00000004[1].actor_name[0x14] = '\x14';
    in_stack_00000004[1].actor_name[0x15] = '\0';
    in_stack_00000004[1].actor_name[0x16] = '\0';
    in_stack_00000004[1].actor_name[0x17] = '\0';
  }
  if (*(float *)(in_stack_00000004[1].actor_name + 0xc) < (float)0.10000000000000001) {
    in_stack_00000004[1].actor_name[0xc] = -0x33;
    in_stack_00000004[1].actor_name[0xd] = -0x34;
    in_stack_00000004[1].actor_name[0xe] = -0x34;
    in_stack_00000004[1].actor_name[0xf] = '=';
  }
  if (*(float *)in_stack_00000004[1].actor_name < *(float *)(in_stack_00000004[1].actor_name + 0xc))
  {
    *(uint *)(in_stack_00000004[1].actor_name + 0xc) =
         *(uint *)in_stack_00000004[1].actor_name;
  }
  if (*(float *)(in_stack_00000004[1].actor_name + 0x10) < (float)0.10000000000000001) {
    in_stack_00000004[1].actor_name[0x10] = -0x33;
    in_stack_00000004[1].actor_name[0x11] = -0x34;
    in_stack_00000004[1].actor_name[0x12] = -0x34;
    in_stack_00000004[1].actor_name[0x13] = '=';
  }
  if (*(float *)(in_stack_00000004[1].actor_name + 4) <
      *(float *)(in_stack_00000004[1].actor_name + 0x10)) {
    *(uint *)(in_stack_00000004[1].actor_name + 0x10) =
         *(uint *)(in_stack_00000004[1].actor_name + 4);
  }
  (in_stack_00000004->orient).pitch = 0.0;
  (in_stack_00000004->orient).heading = 0.0;
  fVar1 = *(float *)in_stack_00000004[1].actor_name;
  fVar2 = (in_stack_00000004->location).position.y;
  (in_stack_00000004->location).position.z =
       (in_stack_0000002c - *(float *)(in_stack_00000004[1].actor_name + 4)) +
       (in_stack_00000004->location).position.z;
  (in_stack_00000004->location).position.y = (in_stack_00000030 - fVar1) + fVar2;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(in_stack_00000004);
  core_stairs_cpp_FUN_005ba700();
  return;
}
