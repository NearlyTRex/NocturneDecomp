// Name: core_frankgen.cpp_FUN_004d1ec0
// Address: 004d1ec0
// Address Range: [[004d1ec0, 004d1f1b]]
// Convention: __cdecl
// Signature: void __cdecl core_frankgen_cpp_FUN_004d1ec0(void)

#include "nocturne.h"

/* Signature: byte actors_other_frankgen.cpp_FUN_004d1ec0(uint param_1, uint
   param_2, uint param_3) */

void __cdecl core_frankgen_cpp_FUN_004d1ec0(void)

{
  float fVar1;
  int extraout_EBX;
  double dVar2;
  int in_stack_00000004;
  float in_stack_00000008;
  float in_stack_0000000c;
  
  fVar1 = in_stack_00000008 * in_stack_0000000c + *(float *)(in_stack_00000004 + 0x48c);
  *(float *)(in_stack_00000004 + 0x48c) = fVar1;
  dVar2 = floor((double)fVar1);
  dVar2 = round(dVar2);
  *(float *)(extraout_EBX + 0x48c) = *(float *)(extraout_EBX + 0x48c) - (float)(int)ROUND(dVar2);
  return;
}
