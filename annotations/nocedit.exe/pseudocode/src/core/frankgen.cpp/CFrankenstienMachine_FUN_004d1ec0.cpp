// Name: core_frankgen.cpp_CFrankenstienMachine_FUN_004d1ec0
// Address: 004d1ec0
// Address Range: [[004d1ec0, 004d1f1b]]
// Convention: __cdecl
// Signature: void __cdecl core_frankgen_cpp_CFrankenstienMachine_FUN_004d1ec0(CFrankenstienMachine *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_frankgen_cpp_CFrankenstienMachine_FUN_004d1ec0(CFrankenstienMachine *this_ptr)

{
  float fVar1;
  double dVar2;
  float in_stack_00000008;
  float in_stack_0000000c;
  
  fVar1 = in_stack_00000008 * in_stack_0000000c + this_ptr->particle_accumulator;
  this_ptr->particle_accumulator = fVar1;
  dVar2 = floor((double)fVar1);
  this_ptr->particle_accumulator = this_ptr->particle_accumulator - (float)(int)ROUND(ROUND(dVar2));
  return;
}
