// Name: core_barrier.cpp_CBarrier_FUN_004142e0
// Address: 004142e0
// Address Range: [[004142e0, 00414333]]
// Convention: __cdecl
// Signature: void __cdecl core_barrier_cpp_CBarrier_FUN_004142e0(CBarrier *this_ptr)

#include "nocturne.h"

void __cdecl core_barrier_cpp_CBarrier_FUN_004142e0(CBarrier *this_ptr)

{
  float fVar1;
  float fVar2;
  float *in_stack_00000008;
  
  fVar1 = *(float *)this_ptr->unk;
  fVar2 = (float)0.5;
  in_stack_00000008[1] = -0.1;
  *in_stack_00000008 = -fVar1 * fVar2;
  in_stack_00000008[2] = -*(float *)(this_ptr->unk + 8) * fVar2;
  in_stack_00000008[3] = *(float *)this_ptr->unk * fVar2;
  in_stack_00000008[4] = *(float *)(this_ptr->unk + 4) + (float)0.10000000000000001;
  in_stack_00000008[5] = fVar2 * *(float *)(this_ptr->unk + 8);
  return;
}
