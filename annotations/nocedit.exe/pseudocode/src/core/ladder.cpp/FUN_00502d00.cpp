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
  float fVar2;
  int iVar3;
  float fVar4;
  float extraout_EAX;
  uint extraout_EDX;
  uint uVar5;
  uint extraout_EDX_00;
  float10 in_ST0;
  double dVar6;
  CDemonActor *in_stack_00000004;
  float fStack_2c;
  CKeys *pCVar7;
  
  pCVar7 = g_CKeysPtr;
  iVar3 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
  if (iVar3 == 0) {
    core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(in_stack_00000004);
    fVar4 = extraout_EAX;
    uVar5 = extraout_EDX_00;
  }
  else {
    iVar3 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4b);
    if (iVar3 != 0) {
      in_stack_00000004[2].location.position.y =
           in_stack_00000004[2].location.position.y - fStack_2c;
    }
    iVar3 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4d);
    if (iVar3 != 0) {
      in_stack_00000004[2].location.position.y =
           in_stack_00000004[2].location.position.y + (float)pCVar7;
    }
    iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x1e);
    if (iVar3 != 0) {
      in_stack_00000004[2].location.position.z =
           in_stack_00000004[2].location.position.z - DAT_006605e8;
    }
    iVar3 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x10);
    if (iVar3 != 0) {
      in_stack_00000004[2].location.position.z =
           DAT_006605e8 + in_stack_00000004[2].location.position.z;
    }
    if (in_stack_00000004[2].location.position.y < (float)0.5) {
      in_stack_00000004[2].location.position.y = 0.5;
    }
    fVar2 = DAT_006605e8;
    fVar1 = in_stack_00000004[2].location.position.z;
    fVar4 = (float)CONCAT22 /* combine 2-byte values */((short)((uint)iVar3 >> 0x10),
                            (ushort)(fVar1 < DAT_006605e8) << 8 |
                            (ushort)(NAN(fVar1) || NAN(DAT_006605e8)) << 10 |
                            (ushort)(fVar1 == DAT_006605e8) << 0xe);
    uVar5 = extraout_EDX;
    if (fVar1 < DAT_006605e8) {
      in_stack_00000004[2].location.position.z = DAT_006605e8;
      fVar4 = fVar2;
    }
  }
  dVar6 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
  fVar4 = (float)(double)CONCAT44 /* combine 2-byte values */(uVar5,fVar4) * DAT_006605e8;
  in_stack_00000004[2].location.area_id = 0;
  in_stack_00000004[2].location.position.z = fVar4;
  return (float10)dVar6;
}
