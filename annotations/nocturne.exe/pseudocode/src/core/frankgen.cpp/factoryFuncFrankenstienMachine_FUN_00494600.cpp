// Name: core_frankgen.cpp_factoryFuncFrankenstienMachine_FUN_00494600
// Address: 00494600
// Address Range: [[00494600, 0049461b]]
// Convention: __cdecl
// Signature: CFrankenstienMachine * __cdecl core_frankgen_cpp_factoryFuncFrankenstienMachine_FUN_00494600(void)

#include "nocturne.h"

CFrankenstienMachine * __cdecl core_frankgen_cpp_factoryFuncFrankenstienMachine_FUN_00494600(void)

{
  CFrankenstienMachine *pCVar1;
  
  pCVar1 = operator_new(0x494);
  if (pCVar1 == (CFrankenstienMachine *)0x0) {
    return (CFrankenstienMachine *)0x0;
  }
  pCVar1 = core_frankgen_cpp_CFrankenstienMachine_ctor_FUN_00494630(pCVar1);
  return pCVar1;
}
