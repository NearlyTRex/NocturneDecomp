// Name: core_succubus.cpp_factoryFunc_FUN_005c6a40
// Address: 005c6a40
// Address Range: [[005c6a40, 005c6a62]]
// Convention: __cdecl
// Signature: CSuccubus * core_succubus.cpp_factoryFunc_FUN_005c6a40(void)

#include "nocturne.h"

CSuccubus * __cdecl core_succubus_cpp_factoryFunc_FUN_005c6a40(void)

{
  CSuccubus *pCVar1;
  
  pCVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xef68,"..\\core\\succubus.cpp",0x4b);
  if (pCVar1 == (CSuccubus *)0x0) {
    return (CSuccubus *)0x0;
  }
  pCVar1 = core_succubus_cpp_CSuccubus_ctor_FUN_005c6a80(pCVar1);
  return pCVar1;
}
