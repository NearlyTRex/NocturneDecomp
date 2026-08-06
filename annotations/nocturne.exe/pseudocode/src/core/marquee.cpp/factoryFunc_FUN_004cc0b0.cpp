// Name: core_marquee.cpp_factoryFunc_FUN_004cc0b0
// Address: 004cc0b0
// Address Range: [[004cc0b0, 004cc0cb]]
// Convention: __cdecl
// Signature: CMarquee * __cdecl core_marquee_cpp_factoryFunc_FUN_004cc0b0(void)

#include "nocturne.h"

CMarquee * __cdecl core_marquee_cpp_factoryFunc_FUN_004cc0b0(void)

{
  CMarquee *pCVar1;
  
  pCVar1 = operator_new(0x1b4);
  if (pCVar1 == (CMarquee *)0x0) {
    return (CMarquee *)0x0;
  }
  pCVar1 = core_marquee_cpp_CMarquee_ctor_FUN_004cc0e0(pCVar1);
  return pCVar1;
}
