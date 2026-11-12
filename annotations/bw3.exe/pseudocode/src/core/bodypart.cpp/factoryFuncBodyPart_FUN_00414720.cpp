// Name: core_bodypart.cpp_factoryFuncBodyPart_FUN_00414720
// Address: 00414720
// Address Range: [[00414720, 0041473b]]
// Convention: __cdecl
// Signature: CBodyPart * __cdecl core_bodypart_cpp_factoryFuncBodyPart_FUN_00414720(void)

#include "nocturne.h"

CBodyPart * __cdecl core_bodypart_cpp_factoryFuncBodyPart_FUN_00414720(void)

{
  CBodyPart *pCVar1;
  
  pCVar1 = (CBodyPart *)operator_new(0xf34);
  if (pCVar1 == (CBodyPart *)0x0) {
    return (CBodyPart *)0x0;
  }
  pCVar1 = core_bodypart_cpp_CBodyPart_ctor_FUN_00414750(pCVar1);
  return pCVar1;
}
