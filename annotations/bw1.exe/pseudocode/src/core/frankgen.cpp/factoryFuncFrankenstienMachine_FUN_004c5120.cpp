// Name: core_frankgen.cpp_factoryFuncFrankenstienMachine_FUN_004c5120
// Address: 004c5120
// Address Range: [[004c5120, 004c513b]]
// Convention: __cdecl
// Signature: CFrankenstienMachine * __cdecl core_frankgen_cpp_factoryFuncFrankenstienMachine_FUN_004c5120(void)

#include "nocturne.h"

CFrankenstienMachine * __cdecl core_frankgen_cpp_factoryFuncFrankenstienMachine_FUN_004c5120(void)

{
  CFrankenstienMachine *pCVar1;
  
  pCVar1 = (CFrankenstienMachine *)operator_new(0x49c);
  if (pCVar1 == (CFrankenstienMachine *)0x0) {
    return (CFrankenstienMachine *)0x0;
  }
  pCVar1 = core_frankgen_cpp_CFrankenstienMachine_ctor_FUN_004c5150(pCVar1);
  return pCVar1;
}
