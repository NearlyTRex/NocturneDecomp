// Name: core_gore.cpp_CBloodSplat_FUN_004ecb90
// Address: 004ecb90
// Address Range: [[004ecb90, 004ecc35]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodSplat_FUN_004ecb90(CBloodSplat *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CBloodSplat_FUN_004ecb90(CBloodSplat *this_ptr)

{
  _FILE *in_stack_00000008;
  
  _fprintf(in_stack_00000008,"%f,%f,%f\n",(double)*(float *)(this_ptr->unk + 4),
             (double)*(float *)(this_ptr->unk + 8),(double)*(float *)(this_ptr->unk + 0xc));
  _fprintf(in_stack_00000008,"%d,%d,%d\n");
  _fprintf(in_stack_00000008,"%f,%f,%f\n",(double)*(float *)(this_ptr->unk + 0x18),
             (double)*(float *)(this_ptr->unk + 0x20),(double)*(float *)(this_ptr->unk + 0x1c));
  _fprintf(in_stack_00000008,"%d,%d,%d,%d,%d,%d,%d\n",*(uint *)(this_ptr->unk + 0x28),
             *(uint *)(this_ptr->unk + 0x2c),*(uint *)(this_ptr->unk + 0x30),
             *(uint *)(this_ptr->unk + 0x34),*(uint *)(this_ptr->unk + 0x38),
             *(uint *)(this_ptr->unk + 0x3c),*(uint *)(this_ptr->unk + 0x40));
  return;
}
