// Name: core_marquee.cpp_factoryFunc_FUN_0050bb20
// Address: 0050bb20
// Address Range: [[0050bb20, 0050bb42]]
// Convention: __cdecl
// Signature: CMarquee * __cdecl core_marquee_cpp_factoryFunc_FUN_0050bb20(void)

#include "nocturne.h"

CMarquee * __cdecl core_marquee_cpp_factoryFunc_FUN_0050bb20(void)

{
  CMarquee *pCVar1;
  
  pCVar1 = (CMarquee *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(0x1bc,"..\\core\\marquee.cpp",0x22);
  if (pCVar1 == (CMarquee *)0x0) {
    return (CMarquee *)0x0;
  }
  pCVar1 = core_marquee_cpp_CMarquee_ctor_FUN_0050bb60(pCVar1);
  return pCVar1;
}
