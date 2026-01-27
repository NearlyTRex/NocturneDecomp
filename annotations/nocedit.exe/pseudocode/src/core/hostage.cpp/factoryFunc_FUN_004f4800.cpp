// Name: core_hostage.cpp_factoryFunc_FUN_004f4800
// Address: 004f4800
// Address Range: [[004f4800, 004f4822]]
// Convention: __cdecl
// Signature: CHostage * core_hostage.cpp_factoryFunc_FUN_004f4800(void)

#include "nocturne.h"

CHostage * __cdecl core_hostage_cpp_factoryFunc_FUN_004f4800(void)

{
  CHostage *pCVar1;
  
  pCVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x1faf0,"..\\core\\hostage.cpp",0x59);
  if (pCVar1 == (CHostage *)0x0) {
    return (CHostage *)0x0;
  }
  pCVar1 = core_hostage_cpp_CHostage_ctor_FUN_004f4840(pCVar1);
  return pCVar1;
}
