// Name: core_tentacle.cpp_factoryFunc_FUN_00543b30
// Address: 00543b30
// Address Range: [[00543b30, 00543b4b]]
// Convention: __cdecl
// Signature: CTentacle * __cdecl core_tentacle_cpp_factoryFunc_FUN_00543b30(void)

#include "nocturne.h"

CTentacle * __cdecl core_tentacle_cpp_factoryFunc_FUN_00543b30(void)

{
  CTentacle *pCVar1;
  
  pCVar1 = operator_new(0xbd94);
  if (pCVar1 == (CTentacle *)0x0) {
    return (CTentacle *)0x0;
  }
  pCVar1 = core_tentacle_cpp_CTentacle_ctor_FUN_00543b60(pCVar1);
  return pCVar1;
}
