// Name: core_trigger.cpp_factoryFunc_FUN_005df800
// Address: 005df800
// Address Range: [[005df800, 005df822]]
// Convention: __cdecl
// Signature: CTrigger * __cdecl core_trigger_cpp_factoryFunc_FUN_005df800(void)

#include "nocturne.h"

CTrigger * __cdecl core_trigger_cpp_factoryFunc_FUN_005df800(void)

{
  CTrigger *pCVar1;
  
  pCVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x370,"..\\core\\trigger.cpp",0x35);
  if (pCVar1 == (CTrigger *)0x0) {
    return (CTrigger *)0x0;
  }
  pCVar1 = core_trigger_cpp_CTrigger_ctor_FUN_005df840(pCVar1);
  return pCVar1;
}
