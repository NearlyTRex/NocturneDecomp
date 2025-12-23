// Name: core_stairs.cpp_FUN_005ba900
// Address: 005ba900
// Address Range: [[005ba900, 005bab8a]]
// Convention: unknown
// Signature: undefined core_stairs.cpp_FUN_005ba900()

#include "nocturne.h"

/* Signature: byte actors_other_stairs.cpp_FUN_005ba900(uint param_1) */

void core_stairs_cpp_FUN_005ba900(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  CDemonActor *in_stack_00000004;
  float local_14;
  float fStack_c;
  
  fVar3 = *(float *)in_stack_00000004[1].actor_name;
  iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
  if (iVar4 == 0) {
    core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(in_stack_00000004);
  }
  else {
    local_14 = g_CGamePtr->delta_time_float * (float)0.5;
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
    if (iVar4 != 0) {
      local_14 = local_14 * (float)0.10000000000000001;
    }
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4b);
    if (iVar4 != 0) {
      *(float *)(in_stack_00000004[1].actor_name + 8) =
           *(float *)(in_stack_00000004[1].actor_name + 8) - local_14;
    }
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
    if (iVar4 != 0) {
      *(float *)(in_stack_00000004[1].actor_name + 8) =
           *(float *)(in_stack_00000004[1].actor_name + 8) + local_14;
    }
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1e);
    if (iVar4 != 0) {
      *(float *)in_stack_00000004[1].actor_name =
           *(float *)in_stack_00000004[1].actor_name - local_14;
    }
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x10);
    if (iVar4 != 0) {
      *(float *)in_stack_00000004[1].actor_name =
           *(float *)in_stack_00000004[1].actor_name + local_14;
    }
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x50);
    if (iVar4 != 0) {
      *(float *)(in_stack_00000004[1].actor_name + 4) =
           *(float *)(in_stack_00000004[1].actor_name + 4) - local_14;
    }
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x48);
    if (iVar4 != 0) {
      *(float *)(in_stack_00000004[1].actor_name + 4) =
           *(float *)(in_stack_00000004[1].actor_name + 4) + local_14;
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
       (fVar3 - *(float *)(in_stack_00000004[1].actor_name + 4)) +
       (in_stack_00000004->location).position.z;
  (in_stack_00000004->location).position.y = (fStack_c - fVar1) + fVar2;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(in_stack_00000004);
  core_stairs_cpp_FUN_005ba700();
  return;
}
