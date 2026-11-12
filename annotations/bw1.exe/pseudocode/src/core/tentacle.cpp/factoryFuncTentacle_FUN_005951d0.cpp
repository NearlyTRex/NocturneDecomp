// Name: core_tentacle.cpp_factoryFuncTentacle_FUN_005951d0
// Address: 005951d0
// Address Range: [[005951d0, 005951eb]]
// Convention: __cdecl
// Signature: CTentacle * __cdecl core_tentacle_cpp_factoryFuncTentacle_FUN_005951d0(void)

#include "nocturne.h"

CTentacle * __cdecl core_tentacle_cpp_factoryFuncTentacle_FUN_005951d0(void)

{
  CTentacle *pCVar1;
  
  pCVar1 = (CTentacle *)operator_new(0xc2d8);
  if (pCVar1 == (CTentacle *)0x0) {
    return (CTentacle *)0x0;
  }
  pCVar1 = core_tentacle_cpp_CTentacle_ctor_FUN_00595200(pCVar1);
  return pCVar1;
}
