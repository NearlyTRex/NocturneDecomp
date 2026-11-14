// Name: core_flamecan.cpp_factoryFuncFlameCan_FUN_004b8f40
// Address: 004b8f40
// Address Range: [[004b8f40, 004b8f5b]]
// Convention: __cdecl
// Signature: CFlameCan * __cdecl core_flamecan_cpp_factoryFuncFlameCan_FUN_004b8f40(void)

#include "nocturne.h"

CFlameCan * __cdecl core_flamecan_cpp_factoryFuncFlameCan_FUN_004b8f40(void)

{
  CFlameCan *pCVar1;
  
  pCVar1 = (CFlameCan *)operator_new(0x5e8);
  if (pCVar1 == (CFlameCan *)0x0) {
    return (CFlameCan *)0x0;
  }
  pCVar1 = core_flamecan_cpp_CFlameCan_ctor_FUN_004b8f70(pCVar1);
  return pCVar1;
}
