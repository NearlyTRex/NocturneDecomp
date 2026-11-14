// Name: core_icepick.cpp_factoryFuncIcePick_FUN_004f0b60
// Address: 004f0b60
// Address Range: [[004f0b60, 004f0b7b]]
// Convention: __cdecl
// Signature: CIcePick * __cdecl core_icepick_cpp_factoryFuncIcePick_FUN_004f0b60(void)

#include "nocturne.h"

CIcePick * __cdecl core_icepick_cpp_factoryFuncIcePick_FUN_004f0b60(void)

{
  CIcePick *pCVar1;
  
  pCVar1 = (CIcePick *)operator_new(0x1ffdc);
  if (pCVar1 == (CIcePick *)0x0) {
    return (CIcePick *)0x0;
  }
  pCVar1 = core_icepick_cpp_CIcePick_ctor_FUN_004f0b90(pCVar1);
  return pCVar1;
}
