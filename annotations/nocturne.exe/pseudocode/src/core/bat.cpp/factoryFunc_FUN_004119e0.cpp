// Name: core_bat.cpp_factoryFunc_FUN_004119e0
// Address: 004119e0
// Address Range: [[004119e0, 004119fb]]
// Convention: __cdecl
// Signature: CBat * __cdecl core_bat_cpp_factoryFunc_FUN_004119e0(void)

#include "nocturne.h"

CBat * __cdecl core_bat_cpp_factoryFunc_FUN_004119e0(void)

{
  int iVar1;
  CBat *pCVar2;
  
  iVar1 = FUN_0056497c(0x380);
  if (iVar1 == 0) {
    return (CBat *)0x0;
  }
  pCVar2 = (CBat *)core_bat_cpp_FUN_00411a10(iVar1);
  return pCVar2;
}
