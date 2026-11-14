// Name: core_bodypart.cpp_factoryFuncBodyPart_FUN_004156b0
// Address: 004156b0
// Address Range: [[004156b0, 004156cb]]
// Convention: __cdecl
// Signature: CBodyPart * __cdecl core_bodypart_cpp_factoryFuncBodyPart_FUN_004156b0(void)

#include "nocturne.h"

CBodyPart * __cdecl core_bodypart_cpp_factoryFuncBodyPart_FUN_004156b0(void)

{
  CBodyPart *pCVar1;
  
  pCVar1 = (CBodyPart *)operator_new(0x1344);
  if (pCVar1 == (CBodyPart *)0x0) {
    return (CBodyPart *)0x0;
  }
  pCVar1 = core_bodypart_cpp_CBodyPart_ctor_FUN_004156e0(pCVar1);
  return pCVar1;
}
