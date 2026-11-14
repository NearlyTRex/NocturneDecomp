// Name: core_bird.cpp_factoryFuncBird_FUN_004151c0
// Address: 004151c0
// Address Range: [[004151c0, 004151db]]
// Convention: __cdecl
// Signature: CBird * __cdecl core_bird_cpp_factoryFuncBird_FUN_004151c0(void)

#include "nocturne.h"

CBird * __cdecl core_bird_cpp_factoryFuncBird_FUN_004151c0(void)

{
  CBird *pCVar1;
  
  pCVar1 = (CBird *)operator_new(0x1fac0);
  if (pCVar1 == (CBird *)0x0) {
    return (CBird *)0x0;
  }
  pCVar1 = core_bird_cpp_CBird_ctor_FUN_004151f0(pCVar1);
  return pCVar1;
}
