// Name: core_gore.cpp_CBloodPool_FUN_004ed160
// Address: 004ed160
// Address Range: [[004ed160, 004ed1bb]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodPool_FUN_004ed160(CBloodPool *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CBloodPool_FUN_004ed160(CBloodPool *this_ptr)

{
  _FILE *in_stack_00000008;
  
  _fscanf(in_stack_00000008,"%f,%f,%f\n",this_ptr->unk + 4,this_ptr->unk + 8,
             this_ptr->unk + 0xc);
  _fscanf(in_stack_00000008,"%d,%d\n",this_ptr,this_ptr->unk + 0x10);
  _fscanf(in_stack_00000008,"%d,%f,%d,%d,%d\n",this_ptr->unk + 0x14,this_ptr->unk + 0x18,
             this_ptr->unk + 0x1c,this_ptr->unk + 0x20,this_ptr->unk + 0x24);
  return;
}
