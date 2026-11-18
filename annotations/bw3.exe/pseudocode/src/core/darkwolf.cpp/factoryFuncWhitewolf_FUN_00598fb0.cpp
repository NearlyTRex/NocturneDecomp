// Name: core_darkwolf.cpp_factoryFuncWhitewolf_FUN_00598fb0
// Address: 00598fb0
// Address Range: [[00598fb0, 00598fcb]]
// Convention: __cdecl
// Signature: CWhitewolf * __cdecl core_darkwolf_cpp_factoryFuncWhitewolf_FUN_00598fb0(void)

#include "nocturne.h"

CWhitewolf * __cdecl core_darkwolf_cpp_factoryFuncWhitewolf_FUN_00598fb0(void)

{
  CWhitewolf *pCVar1;
  
  pCVar1 = operator_new(0xdc98);
  if (pCVar1 == (CWhitewolf *)0x0) {
    return (CWhitewolf *)0x0;
  }
  pCVar1 = core_darkwolf_cpp_CWhitewolf_ctor_FUN_00598fe0(pCVar1);
  return pCVar1;
}
