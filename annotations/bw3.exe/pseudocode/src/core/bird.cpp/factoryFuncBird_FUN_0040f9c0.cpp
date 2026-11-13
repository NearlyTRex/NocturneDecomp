// Name: core_bird.cpp_factoryFuncBird_FUN_0040f9c0
// Address: 0040f9c0
// Address Range: [[0040f9c0, 0040f9db]]
// Convention: __cdecl
// Signature: CBird * __cdecl core_bird_cpp_factoryFuncBird_FUN_0040f9c0(void)

#include "nocturne.h"

CBird * __cdecl core_bird_cpp_factoryFuncBird_FUN_0040f9c0(void)

{
  CBird *pCVar1;
  
  pCVar1 = (CBird *)operator_new(0x206bc);
  if (pCVar1 == (CBird *)0x0) {
    return (CBird *)0x0;
  }
  pCVar1 = core_bird_cpp_CBird_ctor_FUN_0040f9f0(pCVar1);
  return pCVar1;
}
