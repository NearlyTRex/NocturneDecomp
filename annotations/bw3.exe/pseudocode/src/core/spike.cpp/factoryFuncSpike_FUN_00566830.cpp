// Name: core_spike.cpp_factoryFuncSpike_FUN_00566830
// Address: 00566830
// Address Range: [[00566830, 0056684b]]
// Convention: unknown
// Signature: void core_spike_cpp_factoryFuncSpike_FUN_00566830(void)

#include "nocturne.h"

void core_spike_cpp_factoryFuncSpike_FUN_00566830(void)

{
  CSpike *this_ptr;
  
  this_ptr = (CSpike *)debugAllocTracked1(0x560);
  if (this_ptr == (CSpike *)0x0) {
    return;
  }
  core_spike_cpp_CSpike_ctor_FUN_00566860(this_ptr);
  return;
}
