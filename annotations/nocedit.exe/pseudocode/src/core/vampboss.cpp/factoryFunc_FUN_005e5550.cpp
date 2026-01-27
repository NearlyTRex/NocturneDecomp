// Name: core_vampboss.cpp_factoryFunc_FUN_005e5550
// Address: 005e5550
// Address Range: [[005e5550, 005e5572]]
// Convention: __cdecl
// Signature: CVampireBoss * core_vampboss.cpp_factoryFunc_FUN_005e5550(void)

#include "nocturne.h"

CVampireBoss * __cdecl core_vampboss_cpp_factoryFunc_FUN_005e5550(void)

{
  CVampireBoss *pCVar1;
  
  pCVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xce920,"..\\core\\vampboss.cpp",0x60);
  if (pCVar1 == (CVampireBoss *)0x0) {
    return (CVampireBoss *)0x0;
  }
  pCVar1 = core_vampboss_cpp_CVampireBoss_ctor_FUN_005e5590(pCVar1);
  return pCVar1;
}
