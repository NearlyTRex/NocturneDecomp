// Name: core_bat.cpp_factoryFuncBat_FUN_00410b20
// Address: 00410b20
// Address Range: [[00410b20, 00410b3b]]
// Convention: __cdecl
// Signature: CBat * __cdecl core_bat_cpp_factoryFuncBat_FUN_00410b20(void)

#include "nocturne.h"

CBat * __cdecl core_bat_cpp_factoryFuncBat_FUN_00410b20(void)

{
  CBat *pCVar1;
  
  pCVar1 = (CBat *)operator_new(0x388);
  if (pCVar1 == (CBat *)0x0) {
    return (CBat *)0x0;
  }
  pCVar1 = core_bat_cpp_CBat_ctor_FUN_00410b50(pCVar1);
  return pCVar1;
}
