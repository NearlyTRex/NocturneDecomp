// Name: core_gore.cpp_FUN_004ecb90
// Address: 004ecb90
// Address Range: [[004ecb90, 004ecc35]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_FUN_004ecb90(void)

#include "nocturne.h"

/* Signature: byte core_gore.cpp_FUN_004ecb90(uint param_1, uint param_2) */

void __cdecl core_gore_cpp_FUN_004ecb90(void)

{
  int in_stack_00000004;
  _FILE *in_stack_00000008;
  
  _fprintf(in_stack_00000008,"%f,%f,%f\n",(double)*(float *)(in_stack_00000004 + 4),
             (double)*(float *)(in_stack_00000004 + 8),(double)*(float *)(in_stack_00000004 + 0xc));
  _fprintf(in_stack_00000008,"%d,%d,%d\n");
  _fprintf(in_stack_00000008,"%f,%f,%f\n",(double)*(float *)(in_stack_00000004 + 0x18),
             (double)*(float *)(in_stack_00000004 + 0x20),
             (double)*(float *)(in_stack_00000004 + 0x1c));
  _fprintf(in_stack_00000008,"%d,%d,%d,%d,%d,%d,%d\n",*(uint *)(in_stack_00000004 + 0x28),
             *(uint *)(in_stack_00000004 + 0x2c),*(uint *)(in_stack_00000004 + 0x30),
             *(uint *)(in_stack_00000004 + 0x34),*(uint *)(in_stack_00000004 + 0x38),
             *(uint *)(in_stack_00000004 + 0x3c),*(uint *)(in_stack_00000004 + 0x40));
  return;
}
