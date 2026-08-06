// Name: core_vampboss.cpp_factoryFunc_FUN_0054c280
// Address: 0054c280
// Address Range: [[0054c280, 0054c29b]]
// Convention: __cdecl
// Signature: CVampireBoss * __cdecl core_vampboss_cpp_factoryFunc_FUN_0054c280(void)

#include "nocturne.h"

CVampireBoss * __cdecl core_vampboss_cpp_factoryFunc_FUN_0054c280(void)

{
  CVampireBoss *pCVar1;
  
  pCVar1 = operator_new(0xbedc8);
  if (pCVar1 == (CVampireBoss *)0x0) {
    return (CVampireBoss *)0x0;
  }
  pCVar1 = core_vampboss_cpp_CVampireBoss_ctor_FUN_0054c2b0(pCVar1);
  return pCVar1;
}
