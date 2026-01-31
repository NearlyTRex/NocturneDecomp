// Name: core_health.cpp_CHealthItem_FUN_004f1fd0
// Address: 004f1fd0
// Address Range: [[004f1fd0, 004f2014]]
// Convention: __cdecl
// Signature: int __cdecl core_health_cpp_CHealthItem_FUN_004f1fd0(CHealthItem *this_ptr)

#include "nocturne.h"

int __cdecl core_health_cpp_CHealthItem_FUN_004f1fd0(CHealthItem *this_ptr)

{
  float fVar1;
  int in_stack_00000008;
  
  if (0 < this_ptr->use_count) {
    fVar1 = this_ptr->hp_restored + *(float *)(in_stack_00000008 + 0x243c);
    *(float *)(in_stack_00000008 + 0x243c) = fVar1;
    if ((float)100 < fVar1) {
      *(uint *)(in_stack_00000008 + 0x243c) = 0x42c80000;
    }
    this_ptr->use_count = this_ptr->use_count + -1;
  }
  return this_ptr->use_count;
}
