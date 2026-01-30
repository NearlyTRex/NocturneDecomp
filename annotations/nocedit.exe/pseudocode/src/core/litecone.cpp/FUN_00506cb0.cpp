// Name: core_litecone.cpp_FUN_00506cb0
// Address: 00506cb0
// Address Range: [[00506cb0, 00506cf6]]
// Convention: __cdecl
// Signature: void __cdecl core_litecone_cpp_FUN_00506cb0(void)

#include "nocturne.h"

/* Signature: byte actors_other_litecone.cpp_FUN_00506cb0(uint param_1, uint
   param_2) */

void __cdecl core_litecone_cpp_FUN_00506cb0(void)

{
  float fVar1;
  int in_stack_00000004;
  float *in_stack_00000008;
  
  fVar1 = ((float)18 / *(float *)(in_stack_00000004 + 0x158)) *
          *(float *)(in_stack_00000004 + 0x15c);
  in_stack_00000008[2] = 0.0;
  in_stack_00000008[3] = fVar1;
  in_stack_00000008[4] = fVar1;
  *in_stack_00000008 = -fVar1;
  in_stack_00000008[1] = -fVar1;
  in_stack_00000008[5] = *(float *)(in_stack_00000004 + 0x15c);
  return;
}
