// Name: core_drone.cpp_factoryFunc_FUN_0048eb10
// Address: 0048eb10
// Address Range: [[0048eb10, 0048eb32]]
// Convention: __cdecl
// Signature: CDrone * __cdecl core_drone_cpp_factoryFunc_FUN_0048eb10(void)

#include "nocturne.h"

CDrone * __cdecl core_drone_cpp_factoryFunc_FUN_0048eb10(void)

{
  CDrone *pCVar1;
  
  pCVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xbed4,"..\\core\\drone.cpp",0x38);
  if (pCVar1 == (CDrone *)0x0) {
    return (CDrone *)0x0;
  }
  pCVar1 = core_drone_cpp_CDrone_ctor_FUN_0048eb50(pCVar1);
  return pCVar1;
}
