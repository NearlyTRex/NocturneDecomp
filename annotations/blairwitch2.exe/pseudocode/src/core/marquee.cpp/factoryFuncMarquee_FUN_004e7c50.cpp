// Name: core_marquee.cpp_factoryFuncMarquee_FUN_004e7c50
// Address: 004e7c50
// Address Range: [[004e7c50, 004e7c6b]]
// Convention: __cdecl
// Signature: CMarquee * __cdecl core_marquee_cpp_factoryFuncMarquee_FUN_004e7c50(void)

#include "nocturne.h"

CMarquee * __cdecl core_marquee_cpp_factoryFuncMarquee_FUN_004e7c50(void)

{
  CMarquee *pCVar1;
  
  pCVar1 = (CMarquee *)operator_new(0x318);
  if (pCVar1 == (CMarquee *)0x0) {
    return (CMarquee *)0x0;
  }
  pCVar1 = core_marquee_cpp_CMarquee_ctor_FUN_004e7c80(pCVar1);
  return pCVar1;
}
