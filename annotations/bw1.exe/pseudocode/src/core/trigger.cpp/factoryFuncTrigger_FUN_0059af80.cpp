// Name: core_trigger.cpp_factoryFuncTrigger_FUN_0059af80
// Address: 0059af80
// Address Range: [[0059af80, 0059af9b]]
// Convention: __cdecl
// Signature: CTrigger * __cdecl core_trigger_cpp_factoryFuncTrigger_FUN_0059af80(void)

#include "nocturne.h"

CTrigger * __cdecl core_trigger_cpp_factoryFuncTrigger_FUN_0059af80(void)

{
  CTrigger *pCVar1;
  
  pCVar1 = (CTrigger *)operator_new(0x374);
  if (pCVar1 == (CTrigger *)0x0) {
    return (CTrigger *)0x0;
  }
  pCVar1 = core_trigger_cpp_CTrigger_ctor_FUN_0059afb0(pCVar1);
  return pCVar1;
}
