// Name: core_spike.cpp_factoryFuncSpike_FUN_00560510
// Address: 00560510
// Address Range: [[00560510, 0056052b]]
// Convention: unknown
// Signature: void core_spike_cpp_factoryFuncSpike_FUN_00560510(void)

#include "nocturne.h"

void core_spike_cpp_factoryFuncSpike_FUN_00560510(void)

{
  CSpike *this_ptr;
  
  this_ptr = (CSpike *)operator_new(0x6bc);
  if (this_ptr == (CSpike *)0x0) {
    return;
  }
  core_spike_cpp_CSpike_ctor_FUN_00560540(this_ptr);
  return;
}
