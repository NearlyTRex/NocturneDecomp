// Name: core_cross.cpp_factoryFuncSimpleCross_FUN_005a7950
// Address: 005a7950
// Address Range: [[005a7950, 005a796b]]
// Convention: __cdecl
// Signature: CSimpleCross * __cdecl core_cross_cpp_factoryFuncSimpleCross_FUN_005a7950(void)

#include "nocturne.h"

CSimpleCross * __cdecl core_cross_cpp_factoryFuncSimpleCross_FUN_005a7950(void)

{
  CSimpleCross *pCVar1;
  
  pCVar1 = operator_new(0x828);
  if (pCVar1 == (CSimpleCross *)0x0) {
    return (CSimpleCross *)0x0;
  }
  pCVar1 = core_cross_cpp_CSimpleCross_ctor_FUN_005a7980(pCVar1);
  return pCVar1;
}
