// Name: core_gore.cpp_CBloodSplat_FUN_004ecb00
// Address: 004ecb00
// Address Range: [[004ecb00, 004ecb81]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodSplat_FUN_004ecb00(CBloodSplat *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CBloodSplat_FUN_004ecb00(CBloodSplat *this_ptr)

{
  _FILE *in_stack_00000008;
  
  _fscanf(in_stack_00000008,"%f,%f,%f\n",this_ptr->unk + 4,this_ptr->unk + 8,
             this_ptr->unk + 0xc);
  _fscanf(in_stack_00000008,"%d,%d,%d\n",this_ptr->unk + 0x10,this_ptr->unk + 0x14,this_ptr);
  _fscanf(in_stack_00000008,"%f,%f,%f\n",this_ptr->unk + 0x18,this_ptr->unk + 0x20,
             this_ptr->unk + 0x1c);
  _fscanf(in_stack_00000008,"%d,%d,%d,%d,%d,%d,%d\n",this_ptr->unk + 0x28,this_ptr->unk + 0x2c,
             this_ptr->unk + 0x30,this_ptr->unk + 0x34,this_ptr->unk + 0x38,this_ptr->unk + 0x3c,
             this_ptr->unk + 0x40);
  return;
}
