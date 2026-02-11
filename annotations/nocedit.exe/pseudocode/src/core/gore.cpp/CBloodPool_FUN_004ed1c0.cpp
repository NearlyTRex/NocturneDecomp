// Name: core_gore.cpp_CBloodPool_FUN_004ed1c0
// Address: 004ed1c0
// Address Range: [[004ed1c0, 004ed235]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodPool_FUN_004ed1c0(CBloodPool *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CBloodPool_FUN_004ed1c0(CBloodPool *this_ptr)

{
  _FILE *in_stack_00000008;
  
  _fprintf(in_stack_00000008,"%f,%f,%f\n",SUB84((double)*(float *)(this_ptr->unk + 4),0),
             (int)((ulonglong)(double)*(float *)(this_ptr->unk + 4) >> 0x20),
             SUB84((double)*(float *)(this_ptr->unk + 8),0),
             (int)((ulonglong)(double)*(float *)(this_ptr->unk + 8) >> 0x20),
             (double)*(float *)(this_ptr->unk + 0xc));
  _fprintf(in_stack_00000008,"%d,%d\n",*(uint *)this_ptr->unk,
             *(uint *)(this_ptr->unk + 0x10));
  _fprintf(in_stack_00000008,"%d,%f,%d,%d,%d\n",*(uint *)(this_ptr->unk + 0x14),
             SUB84((double)*(float *)(this_ptr->unk + 0x18),0),
             (int)((ulonglong)(double)*(float *)(this_ptr->unk + 0x18) >> 0x20),
             *(uint *)(this_ptr->unk + 0x1c),*(uint *)(this_ptr->unk + 0x20),
             *(uint *)(this_ptr->unk + 0x24));
  return;
}
