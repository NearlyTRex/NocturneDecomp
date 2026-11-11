// Name: core_spike.cpp_factoryFuncSpike_FUN_00582f60
// Address: 00582f60
// Address Range: [[00582f60, 00582f7b]]
// Convention: unknown
// Signature: void core_spike_cpp_factoryFuncSpike_FUN_00582f60(void)

#include "nocturne.h"

void core_spike_cpp_factoryFuncSpike_FUN_00582f60(void)

{
  CSpike *this_ptr;
  
  this_ptr = (CSpike *)operator_new(0x560);
  if (this_ptr == (CSpike *)0x0) {
    return;
  }
  core_spike_cpp_CSpike_ctor_FUN_00582f90(this_ptr);
  return;
}
