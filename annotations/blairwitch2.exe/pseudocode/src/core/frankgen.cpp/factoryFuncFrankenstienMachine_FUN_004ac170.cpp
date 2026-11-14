// Name: core_frankgen.cpp_factoryFuncFrankenstienMachine_FUN_004ac170
// Address: 004ac170
// Address Range: [[004ac170, 004ac18b]]
// Convention: __cdecl
// Signature: CFrankenstienMachine * __cdecl core_frankgen_cpp_factoryFuncFrankenstienMachine_FUN_004ac170(void)

#include "nocturne.h"

CFrankenstienMachine * __cdecl core_frankgen_cpp_factoryFuncFrankenstienMachine_FUN_004ac170(void)

{
  CFrankenstienMachine *pCVar1;
  
  pCVar1 = (CFrankenstienMachine *)operator_new(0x5f8);
  if (pCVar1 == (CFrankenstienMachine *)0x0) {
    return (CFrankenstienMachine *)0x0;
  }
  pCVar1 = core_frankgen_cpp_CFrankenstienMachine_ctor_FUN_004ac1a0(pCVar1);
  return pCVar1;
}
