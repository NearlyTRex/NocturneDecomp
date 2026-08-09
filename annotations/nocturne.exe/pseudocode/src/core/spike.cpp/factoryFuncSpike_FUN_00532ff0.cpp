// Name: core_spike.cpp_factoryFuncSpike_FUN_00532ff0
// Address: 00532ff0
// Address Range: [[00532ff0, 0053300b]]
// Convention: __cdecl
// Signature: CSpike * __cdecl core_spike_cpp_factoryFuncSpike_FUN_00532ff0(void)

#include "nocturne.h"

CSpike * __cdecl core_spike_cpp_factoryFuncSpike_FUN_00532ff0(void)

{
  CSpike *pCVar1;
  
  pCVar1 = operator_new(0x558);
  if (pCVar1 == (CSpike *)0x0) {
    return (CSpike *)0x0;
  }
  pCVar1 = core_spike_cpp_CSpike_ctor_FUN_00533020(pCVar1);
  return pCVar1;
}
