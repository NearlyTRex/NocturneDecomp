// Name: core_sentinel.cpp_factoryFunc_FUN_005058f0
// Address: 005058f0
// Address Range: [[005058f0, 0050590b]]
// Convention: __cdecl
// Signature: CSentinel * __cdecl core_sentinel_cpp_factoryFunc_FUN_005058f0(void)

#include "nocturne.h"

CSentinel * __cdecl core_sentinel_cpp_factoryFunc_FUN_005058f0(void)

{
  CSentinel *pCVar1;
  
  pCVar1 = operator_new(0xbd2c);
  if (pCVar1 == (CSentinel *)0x0) {
    return (CSentinel *)0x0;
  }
  pCVar1 = core_sentinel_cpp_CSentinel_ctor_FUN_00505920(pCVar1);
  return pCVar1;
}
