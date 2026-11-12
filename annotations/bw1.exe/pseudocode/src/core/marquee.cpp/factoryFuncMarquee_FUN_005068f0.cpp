// Name: core_marquee.cpp_factoryFuncMarquee_FUN_005068f0
// Address: 005068f0
// Address Range: [[005068f0, 0050690b]]
// Convention: __cdecl
// Signature: CMarquee * __cdecl core_marquee_cpp_factoryFuncMarquee_FUN_005068f0(void)

#include "nocturne.h"

CMarquee * __cdecl core_marquee_cpp_factoryFuncMarquee_FUN_005068f0(void)

{
  CMarquee *pCVar1;
  
  pCVar1 = (CMarquee *)operator_new(0x1bc);
  if (pCVar1 == (CMarquee *)0x0) {
    return (CMarquee *)0x0;
  }
  pCVar1 = core_marquee_cpp_CMarquee_ctor_FUN_00506920(pCVar1);
  return pCVar1;
}
