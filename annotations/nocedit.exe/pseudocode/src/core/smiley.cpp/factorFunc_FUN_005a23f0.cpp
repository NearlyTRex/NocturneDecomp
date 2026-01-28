// Name: core_smiley.cpp_factorFunc_FUN_005a23f0
// Address: 005a23f0
// Address Range: [[005a23f0, 005a2412]]
// Convention: __cdecl
// Signature: CSmiley * __cdecl core_smiley_cpp_factorFunc_FUN_005a23f0(void)

#include "nocturne.h"

CSmiley * __cdecl core_smiley_cpp_factorFunc_FUN_005a23f0(void)

{
  CSmiley *pCVar1;
  
  pCVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xbf00,"..\\core\\smiley.cpp",0x6e);
  if (pCVar1 == (CSmiley *)0x0) {
    return (CSmiley *)0x0;
  }
  pCVar1 = core_smiley_cpp_CSmiley_ctor_FUN_005a2430(pCVar1);
  return pCVar1;
}
