// Name: core_lever.cpp_factoryFuncLever_FUN_004e1bf0
// Address: 004e1bf0
// Address Range: [[004e1bf0, 004e1c0b]]
// Convention: __cdecl
// Signature: CLever * __cdecl core_lever_cpp_factoryFuncLever_FUN_004e1bf0(void)

#include "nocturne.h"

CLever * __cdecl core_lever_cpp_factoryFuncLever_FUN_004e1bf0(void)

{
  CLever *pCVar1;
  
  pCVar1 = (CLever *)operator_new(0x970);
  if (pCVar1 == (CLever *)0x0) {
    return (CLever *)0x0;
  }
  pCVar1 = core_lever_cpp_CLever_ctor_FUN_004e1c20(pCVar1);
  return pCVar1;
}
