// Name: core_tentacle.cpp_factoryFuncTentacle_FUN_005725a0
// Address: 005725a0
// Address Range: [[005725a0, 005725bb]]
// Convention: __cdecl
// Signature: CTentacle * __cdecl core_tentacle_cpp_factoryFuncTentacle_FUN_005725a0(void)

#include "nocturne.h"

CTentacle * __cdecl core_tentacle_cpp_factoryFuncTentacle_FUN_005725a0(void)

{
  CTentacle *pCVar1;
  
  pCVar1 = (CTentacle *)operator_new(0x10b68);
  if (pCVar1 == (CTentacle *)0x0) {
    return (CTentacle *)0x0;
  }
  pCVar1 = core_tentacle_cpp_CTentacle_ctor_FUN_005725d0(pCVar1);
  return pCVar1;
}
