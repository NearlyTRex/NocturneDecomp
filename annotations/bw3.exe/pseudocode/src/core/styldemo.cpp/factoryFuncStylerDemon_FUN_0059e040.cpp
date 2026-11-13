// Name: core_styldemo.cpp_factoryFuncStylerDemon_FUN_0059e040
// Address: 0059e040
// Address Range: [[0059e040, 0059e05b]]
// Convention: __cdecl
// Signature: CStylerDemon * __cdecl core_styldemo_cpp_factoryFuncStylerDemon_FUN_0059e040(void)

#include "nocturne.h"

CStylerDemon * __cdecl core_styldemo_cpp_factoryFuncStylerDemon_FUN_0059e040(void)

{
  CStylerDemon *pCVar1;
  
  pCVar1 = (CStylerDemon *)operator_new(0xdd18);
  if (pCVar1 == (CStylerDemon *)0x0) {
    return (CStylerDemon *)0x0;
  }
  pCVar1 = core_styldemo_cpp_CStylerDemon_ctor_FUN_0059e070(pCVar1);
  return pCVar1;
}
