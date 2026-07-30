// Name: core_icepick.cpp_factoryFunc_FUN_004b9cf0
// Address: 004b9cf0
// Address Range: [[004b9cf0, 004b9d0b]]
// Convention: __cdecl
// Signature: CIcePick * __cdecl core_icepick_cpp_factoryFunc_FUN_004b9cf0(void)

#include "nocturne.h"

CIcePick * __cdecl core_icepick_cpp_factoryFunc_FUN_004b9cf0(void)

{
  CIcePick *pCVar1;
  
  pCVar1 = (CIcePick *)FUN_0056497c(0x1fa6c);
  if (pCVar1 == (CIcePick *)0x0) {
    return (CIcePick *)0x0;
  }
  pCVar1 = core_icepick_cpp_CIcePick_ctor_FUN_004b9d20(pCVar1);
  return pCVar1;
}
