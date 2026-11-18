// Name: core_wateract.cpp_factoryFuncLava_FUN_00578ff0
// Address: 00578ff0
// Address Range: [[00578ff0, 0057900b]]
// Convention: __cdecl
// Signature: CLava * __cdecl core_wateract_cpp_factoryFuncLava_FUN_00578ff0(void)

#include "nocturne.h"

CLava * __cdecl core_wateract_cpp_factoryFuncLava_FUN_00578ff0(void)

{
  CLava *pCVar1;
  
  pCVar1 = operator_new(0x2b23c);
  if (pCVar1 == (CLava *)0x0) {
    return (CLava *)0x0;
  }
  pCVar1 = core_wateract_cpp_CLava_ctor_FUN_00579020(pCVar1);
  return pCVar1;
}
