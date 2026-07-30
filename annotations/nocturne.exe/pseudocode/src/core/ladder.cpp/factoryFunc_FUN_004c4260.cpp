// Name: core_ladder.cpp_factoryFunc_FUN_004c4260
// Address: 004c4260
// Address Range: [[004c4260, 004c427b]]
// Convention: __cdecl
// Signature: CLadder * __cdecl core_ladder_cpp_factoryFunc_FUN_004c4260(void)

#include "nocturne.h"

CLadder * __cdecl core_ladder_cpp_factoryFunc_FUN_004c4260(void)

{
  CLadder *pCVar1;
  
  pCVar1 = (CLadder *)FUN_0056497c(0x2f8);
  if (pCVar1 == (CLadder *)0x0) {
    return (CLadder *)0x0;
  }
  pCVar1 = core_ladder_cpp_CLadder_ctor_FUN_004c4290(pCVar1);
  return pCVar1;
}
