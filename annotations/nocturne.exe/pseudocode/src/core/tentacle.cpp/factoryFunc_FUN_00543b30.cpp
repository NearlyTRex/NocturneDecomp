// Name: core_tentacle.cpp_factoryFunc_FUN_00543b30
// Address: 00543b30
// Address Range: [[00543b30, 00543b4b]]
// Convention: __cdecl
// Signature: CTentacle * __cdecl core_tentacle_cpp_factoryFunc_FUN_00543b30(void)

#include "nocturne.h"

CTentacle * __cdecl core_tentacle_cpp_factoryFunc_FUN_00543b30(void)

{
  int iVar1;
  CTentacle *pCVar2;
  
  iVar1 = FUN_0056497c(0xbd94);
  if (iVar1 == 0) {
    return (CTentacle *)0x0;
  }
  pCVar2 = (CTentacle *)core_tentacle_cpp_FUN_00543b60(iVar1);
  return pCVar2;
}
