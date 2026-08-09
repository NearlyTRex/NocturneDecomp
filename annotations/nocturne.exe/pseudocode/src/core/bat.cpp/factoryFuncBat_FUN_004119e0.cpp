// Name: core_bat.cpp_factoryFuncBat_FUN_004119e0
// Address: 004119e0
// Address Range: [[004119e0, 004119fb]]
// Convention: __cdecl
// Signature: CBat * __cdecl core_bat_cpp_factoryFuncBat_FUN_004119e0(void)

#include "nocturne.h"

CBat * __cdecl core_bat_cpp_factoryFuncBat_FUN_004119e0(void)

{
  CBat *pCVar1;
  
  pCVar1 = operator_new(0x380);
  if (pCVar1 == (CBat *)0x0) {
    return (CBat *)0x0;
  }
  pCVar1 = core_bat_cpp_CBat_ctor_FUN_00411a10(pCVar1);
  return pCVar1;
}
