// Name: core_spike.cpp_factoryFunc_FUN_005b81e0
// Address: 005b81e0
// Address Range: [[005b81e0, 005b8202]]
// Convention: __cdecl
// Signature: CSpike * __cdecl core_spike_cpp_factoryFunc_FUN_005b81e0(void)

#include "nocturne.h"

CSpike * __cdecl core_spike_cpp_factoryFunc_FUN_005b81e0(void)

{
  CSpike *pCVar1;
  
  pCVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x560,"..\\core\\spike.cpp",0x21);
  if (pCVar1 == (CSpike *)0x0) {
    return (CSpike *)0x0;
  }
  pCVar1 = core_spike_cpp_CSpike_ctor_FUN_005b8220(pCVar1);
  return pCVar1;
}
