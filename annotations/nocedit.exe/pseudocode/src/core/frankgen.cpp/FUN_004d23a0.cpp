// Name: core_frankgen.cpp_FUN_004d23a0
// Address: 004d23a0
// Address Range: [[004d23a0, 004d2426]]
// Convention: unknown
// Signature: void core_frankgen_cpp_FUN_004d23a0(void)

#include "nocturne.h"

/* Signature: byte actors_other_frankgen.cpp_FUN_004d23a0(uint param_1, uint
   param_2, uint param_3) */

void core_frankgen_cpp_FUN_004d23a0(void)

{
  int iVar1;
  float fVar2;
  CKeyFramedModel *pCVar3;
  int in_stack_00000004;
  float in_stack_00000008;
  float in_stack_0000000c;
  
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x184));
  iVar1 = pCVar3->frame_count;
  fVar2 = ((float)iVar1 * (*(float *)(in_stack_00000004 + 0x15c) - in_stack_00000008)) /
          (in_stack_0000000c - in_stack_00000008);
  *(float *)(in_stack_00000004 + 0x180) = fVar2;
  if (fVar2 < 0.0) {
    *(uint *)(in_stack_00000004 + 0x180) = 0;
  }
  fVar2 = (float)(iVar1 + -1);
  if (*(float *)(in_stack_00000004 + 0x180) <= fVar2) {
    return;
  }
  *(float *)(in_stack_00000004 + 0x180) = fVar2;
  return;
}
