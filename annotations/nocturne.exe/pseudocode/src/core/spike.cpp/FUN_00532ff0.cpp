// Name: core_spike.cpp_FUN_00532ff0
// Address: 00532ff0
// Address Range: [[00532ff0, 0053300b]]
// Convention: unknown
// Signature: void core_spike_cpp_FUN_00532ff0(void)

#include "nocturne.h"

void core_spike_cpp_FUN_00532ff0(void)

{
  CSpike *this_ptr;
  
  this_ptr = (CSpike *)FUN_0056497c(0x558);
  if (this_ptr == (CSpike *)0x0) {
    return;
  }
  core_spike_cpp_CSpike_ctor_FUN_00533020(this_ptr);
  return;
}
