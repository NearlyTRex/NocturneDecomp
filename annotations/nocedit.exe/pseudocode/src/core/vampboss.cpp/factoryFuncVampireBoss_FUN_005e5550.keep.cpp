// Name: core_vampboss.cpp_factoryFuncVampireBoss_FUN_005e5550
// Address: 005e5550
// MANUAL RECONSTRUCTION
// Address Range: [[005e5550, 005e5572]]
// Convention: __cdecl
// Signature: CVampireBoss * __cdecl core_vampboss_cpp_factoryFuncVampireBoss_FUN_005e5550(void)

#include "nocturne.h"

CVampireBoss * __cdecl core_vampboss_cpp_factoryFuncVampireBoss_FUN_005e5550(void)

{
  CVampireBoss *pCVar1;
  
  pCVar1 = (CVampireBoss *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0
                     (sizeof(CVampireBoss),"..\\core\\vampboss.cpp",96);
  if (pCVar1 == (CVampireBoss *)0x0) {
    return (CVampireBoss *)0x0;
  }
  pCVar1 = core_vampboss_cpp_CVampireBoss_ctor_FUN_005e5590(pCVar1);
  return pCVar1;
}
