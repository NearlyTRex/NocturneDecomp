// Name: core_trigger.cpp_factoryFunc_FUN_00547880
// Address: 00547880
// Address Range: [[00547880, 0054789b]]
// Convention: __cdecl
// Signature: CTrigger * __cdecl core_trigger_cpp_factoryFunc_FUN_00547880(void)

#include "nocturne.h"

CTrigger * __cdecl core_trigger_cpp_factoryFunc_FUN_00547880(void)

{
  CTrigger *pCVar1;
  
  pCVar1 = operator_new(0x368);
  if (pCVar1 == (CTrigger *)0x0) {
    return (CTrigger *)0x0;
  }
  pCVar1 = core_trigger_cpp_CTrigger_ctor_FUN_005478b0(pCVar1);
  return pCVar1;
}
