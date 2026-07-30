// Name: core_bodypart.cpp_factoryFunc_FUN_00415cf0
// Address: 00415cf0
// Address Range: [[00415cf0, 00415d0b]]
// Convention: __cdecl
// Signature: CBodyPart * __cdecl core_bodypart_cpp_factoryFunc_FUN_00415cf0(void)

#include "nocturne.h"

CBodyPart * __cdecl core_bodypart_cpp_factoryFunc_FUN_00415cf0(void)

{
  CBodyPart *pCVar1;
  
  pCVar1 = (CBodyPart *)FUN_0056497c(0xf18);
  if (pCVar1 == (CBodyPart *)0x0) {
    return (CBodyPart *)0x0;
  }
  pCVar1 = core_bodypart_cpp_CBodyPart_ctor_FUN_00415d20(pCVar1);
  return pCVar1;
}
