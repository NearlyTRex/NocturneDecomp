// Name: core_trigger.cpp_factoryFuncTrigger_FUN_005776c0
// Address: 005776c0
// Address Range: [[005776c0, 005776db]]
// Convention: __cdecl
// Signature: CTrigger * __cdecl core_trigger_cpp_factoryFuncTrigger_FUN_005776c0(void)

#include "nocturne.h"

CTrigger * __cdecl core_trigger_cpp_factoryFuncTrigger_FUN_005776c0(void)

{
  CTrigger *pCVar1;
  
  pCVar1 = (CTrigger *)operator_new(0x4d0);
  if (pCVar1 == (CTrigger *)0x0) {
    return (CTrigger *)0x0;
  }
  pCVar1 = core_trigger_cpp_CTrigger_ctor_FUN_005776f0(pCVar1);
  return pCVar1;
}
