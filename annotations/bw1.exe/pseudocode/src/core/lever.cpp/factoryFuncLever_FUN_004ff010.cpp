// Name: core_lever.cpp_factoryFuncLever_FUN_004ff010
// Address: 004ff010
// Address Range: [[004ff010, 004ff02b]]
// Convention: __cdecl
// Signature: CLever * __cdecl core_lever_cpp_factoryFuncLever_FUN_004ff010(void)

#include "nocturne.h"

CLever * __cdecl core_lever_cpp_factoryFuncLever_FUN_004ff010(void)

{
  CLever *pCVar1;
  
  pCVar1 = (CLever *)operator_new(0x814);
  if (pCVar1 == (CLever *)0x0) {
    return (CLever *)0x0;
  }
  pCVar1 = core_lever_cpp_CLever_ctor_FUN_004ff040(pCVar1);
  return pCVar1;
}
