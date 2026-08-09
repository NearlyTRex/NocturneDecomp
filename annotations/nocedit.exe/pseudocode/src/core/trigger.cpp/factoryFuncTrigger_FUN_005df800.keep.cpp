// Name: core_trigger.cpp_factoryFuncTrigger_FUN_005df800
// Address: 005df800
// MANUAL RECONSTRUCTION
// Address Range: [[005df800, 005df822]]
// Convention: __cdecl
// Signature: CTrigger * __cdecl core_trigger_cpp_factoryFuncTrigger_FUN_005df800(void)

#include "nocturne.h"

CTrigger * __cdecl core_trigger_cpp_factoryFuncTrigger_FUN_005df800(void)

{
  CTrigger *pCVar1;
  
  pCVar1 = (CTrigger *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(sizeof(CTrigger),"..\\core\\trigger.cpp",53);
  if (pCVar1 == (CTrigger *)0x0) {
    return (CTrigger *)0x0;
  }
  pCVar1 = core_trigger_cpp_CTrigger_ctor_FUN_005df840(pCVar1);
  return pCVar1;
}
