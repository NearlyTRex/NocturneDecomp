// Name: FUN_0049ed20
// Address: 0049ed20
// Address Range: [[0049ed20, 0049edb4]]
// Convention: unknown
// Signature: void FUN_0049ed20(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_0049ed20(void)

{
  float fVar1;
  float fVar2;
  int in_stack_00000004;
  int in_stack_00000008;
  float *in_stack_0000000c;
  float in_stack_00000010;
  float in_stack_00000014;
  
  if ((&DAT_01c02598)[in_stack_00000004] == '\0') {
    if ((((&DAT_01c02598)[in_stack_00000008] != '\0') && (*in_stack_0000000c < in_stack_00000014))
       && (fVar1 = (*(float *)(0x01C775EC + 0x264) * in_stack_00000014) / in_stack_00000010 +
                   *in_stack_0000000c, *in_stack_0000000c = fVar1, in_stack_00000014 < fVar1)) {
      *in_stack_0000000c = in_stack_00000014;
      return;
    }
  }
  else {
    fVar1 = -in_stack_00000014;
    if ((fVar1 < *in_stack_0000000c) &&
       (fVar2 = *in_stack_0000000c -
                (*(float *)(0x01C775EC + 0x264) * in_stack_00000014) / in_stack_00000010,
       *in_stack_0000000c = fVar2, fVar2 < fVar1)) {
      *in_stack_0000000c = fVar1;
      return;
    }
  }
  return;
}
