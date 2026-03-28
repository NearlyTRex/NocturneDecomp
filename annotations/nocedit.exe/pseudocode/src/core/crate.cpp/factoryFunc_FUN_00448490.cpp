// Name: core_crate.cpp_factoryFunc_FUN_00448490
// Address: 00448490
// Address Range: [[00448490, 004484b2]]
// Convention: __cdecl
// Signature: CCrate * __cdecl core_crate_cpp_factoryFunc_FUN_00448490(void)

#include "nocturne.h"

CCrate * __cdecl core_crate_cpp_factoryFunc_FUN_00448490(void)

{
  CCrate *pCVar1;
  
  pCVar1 = (CCrate *)shape_memdbg_cpp_debugAllocTracked_FUN_0050f1b0(0x2fc,"..\\core\\crate.cpp",0x1f);
  if (pCVar1 == (CCrate *)0x0) {
    return (CCrate *)0x0;
  }
  pCVar1 = core_crate_cpp_CCrate_ctor_FUN_004484d0(pCVar1);
  return pCVar1;
}
