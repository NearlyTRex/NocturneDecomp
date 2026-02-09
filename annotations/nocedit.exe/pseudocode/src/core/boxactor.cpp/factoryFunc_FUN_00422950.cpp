// Name: core_boxactor.cpp_factoryFunc_FUN_00422950
// Address: 00422950
// Address Range: [[00422950, 00422975]]
// Convention: __cdecl
// Signature: CLightActor * __cdecl core_boxactor_cpp_factoryFunc_FUN_00422950(void)

#include "nocturne.h"

CLightActor * __cdecl core_boxactor_cpp_factoryFunc_FUN_00422950(void)

{
  CLightActor *pCVar1;
  
  pCVar1 = (CLightActor *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x3678,"..\\core\\boxactor.cpp",0x2e3);
  if (pCVar1 == (CLightActor *)0x0) {
    return (CLightActor *)0x0;
  }
  pCVar1 = core_boxactor_cpp_CLightActor_ctor_FUN_00422990(pCVar1);
  return pCVar1;
}
