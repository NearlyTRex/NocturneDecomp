// Name: core_larva.cpp_factoryFunc_FUN_004c4850
// Address: 004c4850
// Address Range: [[004c4850, 004c486b]]
// Convention: __cdecl
// Signature: CLarva * __cdecl core_larva_cpp_factoryFunc_FUN_004c4850(void)

#include "nocturne.h"

CLarva * __cdecl core_larva_cpp_factoryFunc_FUN_004c4850(void)

{
  CLarva *pCVar1;
  
  pCVar1 = (CLarva *)FUN_0056497c(0xbd30);
  if (pCVar1 == (CLarva *)0x0) {
    return (CLarva *)0x0;
  }
  pCVar1 = core_larva_cpp_CLarva_ctor_FUN_004c4880(pCVar1);
  return pCVar1;
}
