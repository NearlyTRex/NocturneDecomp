// Name: core_bat.cpp_factoryFuncBat_FUN_00410fa0
// Address: 00410fa0
// Address Range: [[00410fa0, 00410fbb]]
// Convention: __cdecl
// Signature: CBat * __cdecl core_bat_cpp_factoryFuncBat_FUN_00410fa0(void)

#include "nocturne.h"

CBat * __cdecl core_bat_cpp_factoryFuncBat_FUN_00410fa0(void)

{
  CBat *pCVar1;
  
  pCVar1 = (CBat *)operator_new(0x4e4);
  if (pCVar1 == (CBat *)0x0) {
    return (CBat *)0x0;
  }
  pCVar1 = core_bat_cpp_CBat_ctor_FUN_00410fd0(pCVar1);
  return pCVar1;
}
