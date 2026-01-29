// Name: core_bat.cpp_FUN_00414ce0
// Address: 00414ce0
// Address Range: [[00414ce0, 00414db6]]
// Convention: unknown
// Signature: void core_bat_cpp_FUN_00414ce0(void)

#include "nocturne.h"

/* Signature: byte actors_other_bat.cpp_FUN_00414ce0(uint param_1) */

void core_bat_cpp_FUN_00414ce0(void)

{
  float fVar1;
  int extraout_EBX;
  int iVar2;
  int extraout_EBX_00;
  double dVar3;
  int in_stack_00000004;
  uint uVar4;
  uint local_28;
  float fStack_24;
  
  fVar1 = *(float *)(in_stack_00000004 + 0x304);
  local_28 = SUB84((double)fVar1,0);
  if (0.0 <= (double)fVar1) {
    dVar3 = (double)(fVar1 / (float)*(int *)(in_stack_00000004 + 0x178));
    uVar4 = (uint)((ulonglong)dVar3 >> 0x20);
    dVar3 = floor(dVar3);
    fStack_24 = (float)(double)CONCAT44(local_28,uVar4) - (float)dVar3 * fVar1;
    iVar2 = extraout_EBX_00;
  }
  else {
    dVar3 = (double)(-fVar1 / (float)*(int *)(in_stack_00000004 + 0x178));
    uVar4 = (uint)((ulonglong)dVar3 >> 0x20);
    dVar3 = floor(dVar3);
    fStack_24 = (float)dVar3 * fVar1 + (float)(double)CONCAT44(local_28,uVar4);
    iVar2 = extraout_EBX;
    if (fStack_24 < 0.0) {
      fStack_24 = fStack_24 + fVar1;
    }
  }
  *(float *)(iVar2 + 0x304) = fStack_24;
  core_course_cpp_CCourse_FUN_00442710((CCourse *)(iVar2 + 0x178));
  return;
}
