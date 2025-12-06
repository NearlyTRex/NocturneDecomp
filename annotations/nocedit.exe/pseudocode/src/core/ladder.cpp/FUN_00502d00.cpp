// Name: core_ladder.cpp_FUN_00502d00
// Address: 00502d00
// Address Range: [[00502d00, 00502e4e]]
// Convention: unknown
// Signature: undefined core_ladder.cpp_FUN_00502d00()

#include "nocturne.h"

/* Signature: byte actors_other_ladder.cpp_FUN_00502d00(uint param_1) */

float10 core_ladder_cpp_FUN_00502d00(void)

{
  float fVar1;
  int iVar2;
  uint extraout_EAX;
  uint extraout_EDX;
  float10 in_ST0;
  double dVar3;
  CDemonActor *in_stack_00000004;
  float fStack_2c;
  CKeys *pCVar4;
  
  pCVar4 = g_CKeysPtr;
  iVar2 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
  if (iVar2 == 0) {
    core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(in_stack_00000004);
  }
  else {
    iVar2 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4b);
    if (iVar2 != 0) {
      in_stack_00000004[2].location.position.y =
           in_stack_00000004[2].location.position.y - fStack_2c;
    }
    iVar2 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4d);
    if (iVar2 != 0) {
      in_stack_00000004[2].location.position.y =
           in_stack_00000004[2].location.position.y + (float)pCVar4;
    }
    iVar2 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x1e);
    if (iVar2 != 0) {
      in_stack_00000004[2].location.position.z =
           in_stack_00000004[2].location.position.z - DAT_006605e8;
    }
    iVar2 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x10);
    if (iVar2 != 0) {
      in_stack_00000004[2].location.position.z =
           DAT_006605e8 + in_stack_00000004[2].location.position.z;
    }
    if (in_stack_00000004[2].location.position.y < (float)0.5) {
      in_stack_00000004[2].location.position.y = 0.5;
    }
    if (in_stack_00000004[2].location.position.z < DAT_006605e8) {
      in_stack_00000004[2].location.position.z = DAT_006605e8;
    }
  }
  dVar3 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
  fVar1 = (float)(double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX) * DAT_006605e8;
  in_stack_00000004[2].location.area_id = 0;
  in_stack_00000004[2].location.position.z = fVar1;
  return (float10)dVar3;
}
