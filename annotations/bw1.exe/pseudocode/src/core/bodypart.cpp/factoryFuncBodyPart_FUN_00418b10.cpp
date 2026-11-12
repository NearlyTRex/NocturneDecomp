// Name: core_bodypart.cpp_factoryFuncBodyPart_FUN_00418b10
// Address: 00418b10
// Address Range: [[00418b10, 00418b2b]]
// Convention: __cdecl
// Signature: CBodyPart * __cdecl core_bodypart_cpp_factoryFuncBodyPart_FUN_00418b10(void)

#include "nocturne.h"

CBodyPart * __cdecl core_bodypart_cpp_factoryFuncBodyPart_FUN_00418b10(void)

{
  CBodyPart *pCVar1;
  
  pCVar1 = (CBodyPart *)operator_new(0xf34);
  if (pCVar1 == (CBodyPart *)0x0) {
    return (CBodyPart *)0x0;
  }
  pCVar1 = core_bodypart_cpp_CBodyPart_ctor_FUN_00418b40(pCVar1);
  return pCVar1;
}
