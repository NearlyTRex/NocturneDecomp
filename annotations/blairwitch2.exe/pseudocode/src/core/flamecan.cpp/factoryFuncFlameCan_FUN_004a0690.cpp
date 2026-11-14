// Name: core_flamecan.cpp_factoryFuncFlameCan_FUN_004a0690
// Address: 004a0690
// Address Range: [[004a0690, 004a06ab]]
// Convention: __cdecl
// Signature: CFlameCan * __cdecl core_flamecan_cpp_factoryFuncFlameCan_FUN_004a0690(void)

#include "nocturne.h"

CFlameCan * __cdecl core_flamecan_cpp_factoryFuncFlameCan_FUN_004a0690(void)

{
  CFlameCan *pCVar1;
  
  pCVar1 = (CFlameCan *)operator_new(0x8a0);
  if (pCVar1 == (CFlameCan *)0x0) {
    return (CFlameCan *)0x0;
  }
  pCVar1 = core_flamecan_cpp_CFlameCan_ctor_FUN_004a06c0(pCVar1);
  return pCVar1;
}
