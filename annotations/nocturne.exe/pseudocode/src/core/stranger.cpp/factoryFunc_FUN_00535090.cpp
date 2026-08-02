// Name: core_stranger.cpp_factoryFunc_FUN_00535090
// Address: 00535090
// Address Range: [[00535090, 005350ab]]
// Convention: __cdecl
// Signature: CStranger * __cdecl core_stranger_cpp_factoryFunc_FUN_00535090(void)

#include "nocturne.h"

CStranger * __cdecl core_stranger_cpp_factoryFunc_FUN_00535090(void)

{
  CStranger *pCVar1;
  
  pCVar1 = (CStranger *)FUN_0056497c(0x1fcd8);
  if (pCVar1 == (CStranger *)0x0) {
    return (CStranger *)0x0;
  }
  pCVar1 = core_stranger_cpp_CStranger_ctor_FUN_005350c0(pCVar1);
  return pCVar1;
}
