// Name: core_frankgen.cpp_CFrankenstienMachine_FUN_004d1ec0
// Address: 004d1ec0
// Address Range: [[004d1ec0, 004d1f1b]]
// Convention: __cdecl
// Signature: void __cdecl core_frankgen_cpp_CFrankenstienMachine_FUN_004d1ec0(CFrankenstienMachine *this_ptr)

#include "nocturne.h"

void __cdecl core_frankgen_cpp_CFrankenstienMachine_FUN_004d1ec0(CFrankenstienMachine *this_ptr)

{
  float fVar1;
  double dVar2;
  float in_stack_00000008;
  float in_stack_0000000c;
  
  fVar1 = in_stack_00000008 * in_stack_0000000c + (float)this_ptr->unk3;
  this_ptr->unk3 = (int)fVar1;
  dVar2 = floor((double)fVar1);
  dVar2 = round(dVar2);
  this_ptr->unk3 = (int)((float)this_ptr->unk3 - (float)(int)ROUND(dVar2));
  return;
}
