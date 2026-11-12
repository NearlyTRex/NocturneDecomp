// Name: core_bat.cpp_factoryFuncBat_FUN_0040edb0
// Address: 0040edb0
// Address Range: [[0040edb0, 0040edcb]]
// Convention: __cdecl
// Signature: CBat * __cdecl core_bat_cpp_factoryFuncBat_FUN_0040edb0(void)

#include "nocturne.h"

CBat * __cdecl core_bat_cpp_factoryFuncBat_FUN_0040edb0(void)

{
  CBat *pCVar1;
  
  pCVar1 = (CBat *)operator_new(0x388);
  if (pCVar1 == (CBat *)0x0) {
    return (CBat *)0x0;
  }
  pCVar1 = core_bat_cpp_CBat_ctor_FUN_0040ede0(pCVar1);
  return pCVar1;
}
