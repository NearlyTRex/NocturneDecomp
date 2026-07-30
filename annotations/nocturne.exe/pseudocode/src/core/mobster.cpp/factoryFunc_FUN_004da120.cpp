// Name: core_mobster.cpp_factoryFunc_FUN_004da120
// Address: 004da120
// Address Range: [[004da120, 004da13b]]
// Convention: __cdecl
// Signature: CMobster * __cdecl core_mobster_cpp_factoryFunc_FUN_004da120(void)

#include "nocturne.h"

CMobster * __cdecl core_mobster_cpp_factoryFunc_FUN_004da120(void)

{
  CMobster *pCVar1;
  
  pCVar1 = (CMobster *)FUN_0056497c(0xbdfc);
  if (pCVar1 == (CMobster *)0x0) {
    return (CMobster *)0x0;
  }
  pCVar1 = core_mobster_cpp_CMobster_ctor_FUN_004da150(pCVar1);
  return pCVar1;
}
