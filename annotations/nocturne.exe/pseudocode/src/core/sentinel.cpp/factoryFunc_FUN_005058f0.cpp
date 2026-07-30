// Name: core_sentinel.cpp_factoryFunc_FUN_005058f0
// Address: 005058f0
// Address Range: [[005058f0, 0050590b]]
// Convention: __cdecl
// Signature: CSentinel * __cdecl core_sentinel_cpp_factoryFunc_FUN_005058f0(void)

#include "nocturne.h"

CSentinel * __cdecl core_sentinel_cpp_factoryFunc_FUN_005058f0(void)

{
  int iVar1;
  CSentinel *pCVar2;
  
  iVar1 = FUN_0056497c(0xbd2c);
  if (iVar1 == 0) {
    return (CSentinel *)0x0;
  }
  pCVar2 = (CSentinel *)core_sentinel_cpp_FUN_00505920(iVar1);
  return pCVar2;
}
