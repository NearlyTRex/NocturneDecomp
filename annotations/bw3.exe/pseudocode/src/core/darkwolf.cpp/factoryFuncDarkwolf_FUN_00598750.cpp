// Name: core_darkwolf.cpp_factoryFuncDarkwolf_FUN_00598750
// Address: 00598750
// Address Range: [[00598750, 0059876b]]
// Convention: __cdecl
// Signature: CDarkwolf * __cdecl core_darkwolf_cpp_factoryFuncDarkwolf_FUN_00598750(void)

#include "nocturne.h"

CDarkwolf * __cdecl core_darkwolf_cpp_factoryFuncDarkwolf_FUN_00598750(void)

{
  CDarkwolf *pCVar1;
  
  pCVar1 = (CDarkwolf *)operator_new(0xdc98);
  if (pCVar1 == (CDarkwolf *)0x0) {
    return (CDarkwolf *)0x0;
  }
  pCVar1 = core_darkwolf_cpp_CDarkwolf_ctor_FUN_00598780(pCVar1);
  return pCVar1;
}
