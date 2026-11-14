// Name: core_icepick.cpp_factoryFuncIcePick_FUN_004d4960
// Address: 004d4960
// Address Range: [[004d4960, 004d497b]]
// Convention: __cdecl
// Signature: CIcePick * __cdecl core_icepick_cpp_factoryFuncIcePick_FUN_004d4960(void)

#include "nocturne.h"

CIcePick * __cdecl core_icepick_cpp_factoryFuncIcePick_FUN_004d4960(void)

{
  CIcePick *pCVar1;
  
  pCVar1 = (CIcePick *)operator_new(0x25670);
  if (pCVar1 == (CIcePick *)0x0) {
    return (CIcePick *)0x0;
  }
  pCVar1 = core_icepick_cpp_CIcePick_ctor_FUN_004d4990(pCVar1);
  return pCVar1;
}
