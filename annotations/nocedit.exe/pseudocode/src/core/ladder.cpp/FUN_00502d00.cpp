// Name: core_ladder.cpp_FUN_00502d00
// Address: 00502d00
// Address Range: [[00502d00, 00502e4e]]
// Convention: unknown
// Signature: undefined core_ladder.cpp_FUN_00502d00()

#include "nocturne.h"

/* Signature: byte actors_other_ladder.cpp_FUN_00502d00(uint param_1) */

void core_ladder_cpp_FUN_00502d00(void)

{
  float fVar1;
  int iVar2;
  int extraout_EBX;
  double dVar3;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  float in_stack_00000010;
  
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
  if (iVar2 == 0) {
    core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(in_stack_00000004);
  }
  else {
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4b);
    if (iVar2 != 0) {
      in_stack_00000004[2].location.position.y =
           in_stack_00000004[2].location.position.y - in_stack_00000008;
    }
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
    if (iVar2 != 0) {
      in_stack_00000004[2].location.position.y =
           in_stack_00000004[2].location.position.y + in_stack_00000010;
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x1e);
    if (iVar2 != 0) {
      in_stack_00000004[2].location.position.z =
           in_stack_00000004[2].location.position.z - 0x3F800000;
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x10);
    if (iVar2 != 0) {
      in_stack_00000004[2].location.position.z =
           0x3F800000 + in_stack_00000004[2].location.position.z;
    }
    if (in_stack_00000004[2].location.position.y < (float)0.5) {
      in_stack_00000004[2].location.position.y = 0.5;
    }
    if (in_stack_00000004[2].location.position.z < 0x3F800000) {
      in_stack_00000004[2].location.position.z = 0x3F800000;
    }
  }
  dVar3 = crt_math_c_floor_FUN_005feb90
                    ((double)(in_stack_00000004[2].location.position.z / 0x3F800000 +
                             (float)0.5));
  fVar1 = (float)dVar3 * 0x3F800000;
  *(uint *)(extraout_EBX + 0x2dc) = 0;
  *(float *)(extraout_EBX + 0x2d8) = fVar1;
  return;
}
