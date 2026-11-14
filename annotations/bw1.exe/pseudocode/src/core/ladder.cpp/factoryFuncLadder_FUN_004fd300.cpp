// Name: core_ladder.cpp_factoryFuncLadder_FUN_004fd300
// Address: 004fd300
// Address Range: [[004fd300, 004fd31b]]
// Convention: __cdecl
// Signature: CLadder * __cdecl core_ladder_cpp_factoryFuncLadder_FUN_004fd300(void)

#include "nocturne.h"

CLadder * __cdecl core_ladder_cpp_factoryFuncLadder_FUN_004fd300(void)

{
  CLadder *pCVar1;
  
  pCVar1 = (CLadder *)operator_new(0x300);
  if (pCVar1 == (CLadder *)0x0) {
    return (CLadder *)0x0;
  }
  pCVar1 = core_ladder_cpp_CLadder_ctor_FUN_004fd330(pCVar1);
  return pCVar1;
}
