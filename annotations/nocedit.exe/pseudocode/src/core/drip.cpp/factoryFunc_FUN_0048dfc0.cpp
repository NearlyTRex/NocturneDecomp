// Name: core_drip.cpp_factoryFunc_FUN_0048dfc0
// Address: 0048dfc0
// Address Range: [[0048dfc0, 0048dfe2]]
// Convention: __cdecl
// Signature: CDrip * __cdecl core_drip_cpp_factoryFunc_FUN_0048dfc0(void)

#include "nocturne.h"

CDrip * __cdecl core_drip_cpp_factoryFunc_FUN_0048dfc0(void)

{
  CDrip *pCVar1;
  
  pCVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x33c,"..\\core\\drip.cpp",0x32);
  if (pCVar1 == (CDrip *)0x0) {
    return (CDrip *)0x0;
  }
  pCVar1 = core_drip_cpp_CDrip_ctor_FUN_0048e000(pCVar1);
  return pCVar1;
}
