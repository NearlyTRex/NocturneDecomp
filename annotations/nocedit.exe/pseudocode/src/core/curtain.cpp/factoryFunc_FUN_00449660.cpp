// Name: core_curtain.cpp_factoryFunc_FUN_00449660
// Address: 00449660
// Address Range: [[00449660, 00449682]]
// Convention: __cdecl
// Signature: CCurtain * __cdecl core_curtain_cpp_factoryFunc_FUN_00449660(void)

#include "nocturne.h"

CCurtain * __cdecl core_curtain_cpp_factoryFunc_FUN_00449660(void)

{
  CCurtain *pCVar1;
  
  pCVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x65b38,"..\\core\\curtain.cpp",0x36);
  if (pCVar1 == (CCurtain *)0x0) {
    return (CCurtain *)0x0;
  }
  pCVar1 = core_curtain_cpp_CCurtain_ctor_FUN_004496a0(pCVar1);
  return pCVar1;
}
