// Name: core_spike.cpp_factoryFuncSpike_FUN_00560510
// Address: 00560510
// Address Range: [[00560510, 0056052b]]
// Convention: __cdecl
// Signature: CSpike * __cdecl core_spike_cpp_factoryFuncSpike_FUN_00560510(void)

#include "nocturne.h"

CSpike * __cdecl core_spike_cpp_factoryFuncSpike_FUN_00560510(void)

{
  CSpike *pCVar1;
  
  pCVar1 = (CSpike *)operator_new(0x6bc);
  if (pCVar1 == (CSpike *)0x0) {
    return (CSpike *)0x0;
  }
  pCVar1 = core_spike_cpp_CSpike_ctor_FUN_00560540(pCVar1);
  return pCVar1;
}
