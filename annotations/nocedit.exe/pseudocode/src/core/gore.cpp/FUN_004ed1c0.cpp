// Name: core_gore.cpp_FUN_004ed1c0
// Address: 004ed1c0
// Address Range: [[004ed1c0, 004ed235]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_FUN_004ed1c0(void)

#include "nocturne.h"

void __cdecl core_gore_cpp_FUN_004ed1c0(void)

{
  uint *in_stack_00000004;
  _FILE *in_stack_00000008;
  
  _fprintf(in_stack_00000008,"%f,%f,%f\n",SUB84((double)(float)in_stack_00000004[1],0),
             (int)((ulonglong)(double)(float)in_stack_00000004[1] >> 0x20),
             SUB84((double)(float)in_stack_00000004[2],0),
             (int)((ulonglong)(double)(float)in_stack_00000004[2] >> 0x20),
             (double)(float)in_stack_00000004[3]);
  _fprintf(in_stack_00000008,"%d,%d\n",*in_stack_00000004,in_stack_00000004[4]);
  _fprintf(in_stack_00000008,"%d,%f,%d,%d,%d\n",in_stack_00000004[5],
             SUB84((double)(float)in_stack_00000004[6],0),
             (int)((ulonglong)(double)(float)in_stack_00000004[6] >> 0x20),in_stack_00000004[7],
             in_stack_00000004[8],in_stack_00000004[9]);
  return;
}
