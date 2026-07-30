// Name: core_crate.cpp_factoryFunc_FUN_0043c7e0
// Address: 0043c7e0
// Address Range: [[0043c7e0, 0043c7fb]]
// Convention: __cdecl
// Signature: CCrate * __cdecl core_crate_cpp_factoryFunc_FUN_0043c7e0(void)

#include "nocturne.h"

CCrate * __cdecl core_crate_cpp_factoryFunc_FUN_0043c7e0(void)

{
  int iVar1;
  CCrate *pCVar2;
  
  iVar1 = FUN_0056497c(0x2f4);
  if (iVar1 == 0) {
    return (CCrate *)0x0;
  }
  pCVar2 = (CCrate *)core_crate_cpp_FUN_0043c810(iVar1);
  return pCVar2;
}
