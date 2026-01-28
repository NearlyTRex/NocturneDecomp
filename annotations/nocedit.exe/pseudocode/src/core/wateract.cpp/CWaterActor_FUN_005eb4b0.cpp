// Name: core_wateract.cpp_CWaterActor_FUN_005eb4b0
// Address: 005eb4b0
// Address Range: [[005eb4b0, 005eb503]]
// Convention: __cdecl
// Signature: void __cdecl core_wateract_cpp_CWaterActor_FUN_005eb4b0(CWaterActor *this_ptr)

#include "nocturne.h"

void __cdecl core_wateract_cpp_CWaterActor_FUN_005eb4b0(CWaterActor *this_ptr)

{
  float fVar1;
  float fVar2;
  float *in_stack_00000008;
  
  fVar1 = (this_ptr->size).x;
  fVar2 = (float)0.5;
  in_stack_00000008[1] = -0.1;
  *in_stack_00000008 = -fVar1 * fVar2;
  in_stack_00000008[2] = -(this_ptr->size).z * fVar2;
  in_stack_00000008[3] = (this_ptr->size).x * fVar2;
  in_stack_00000008[4] = (this_ptr->size).y + (float)0.10000000000000001;
  in_stack_00000008[5] = fVar2 * (this_ptr->size).z;
  return;
}
