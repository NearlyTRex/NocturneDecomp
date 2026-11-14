// Name: core_spike.cpp_factoryFuncSpike_FUN_00566830
// Address: 00566830
// Address Range: [[00566830, 0056684b]]
// Convention: __cdecl
// Signature: CSpike * __cdecl core_spike_cpp_factoryFuncSpike_FUN_00566830(void)

#include "nocturne.h"

CSpike * __cdecl core_spike_cpp_factoryFuncSpike_FUN_00566830(void)

{
  CSpike *pCVar1;
  
  pCVar1 = (CSpike *)operator_new(0x560);
  if (pCVar1 == (CSpike *)0x0) {
    return (CSpike *)0x0;
  }
  pCVar1 = core_spike_cpp_CSpike_ctor_FUN_00566860(pCVar1);
  return pCVar1;
}
