// Name: core_crate.cpp_factoryFunc_FUN_0043c7e0
// Address: 0043c7e0
// Address Range: [[0043c7e0, 0043c7fb]]
// Convention: __cdecl
// Signature: CCrate * __cdecl core_crate_cpp_factoryFunc_FUN_0043c7e0(void)

#include "nocturne.h"

CCrate * __cdecl core_crate_cpp_factoryFunc_FUN_0043c7e0(void)

{
  CCrate *pCVar1;
  
  pCVar1 = (CCrate *)FUN_0056497c(0x2f4);
  if (pCVar1 == (CCrate *)0x0) {
    return (CCrate *)0x0;
  }
  pCVar1 = core_crate_cpp_CCrate_ctor_FUN_0043c810(pCVar1);
  return pCVar1;
}
