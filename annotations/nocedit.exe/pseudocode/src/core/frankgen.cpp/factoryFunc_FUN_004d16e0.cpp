// Name: core_frankgen.cpp_factoryFunc_FUN_004d16e0
// Address: 004d16e0
// Address Range: [[004d16e0, 004d1702]]
// Convention: __cdecl
// Signature: CFrankenstienMachine * __cdecl core_frankgen_cpp_factoryFunc_FUN_004d16e0(void)

#include "nocturne.h"

CFrankenstienMachine * __cdecl core_frankgen_cpp_factoryFunc_FUN_004d16e0(void)

{
  CFrankenstienMachine *pCVar1;
  
  pCVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x49c,"..\\core\\frankgen.cpp",0x75);
  if (pCVar1 == (CFrankenstienMachine *)0x0) {
    return (CFrankenstienMachine *)0x0;
  }
  pCVar1 = core_frankgen_cpp_CFrankenstienMachine_ctor_FUN_004d1720(pCVar1);
  return pCVar1;
}
