// Name: core_bride.cpp_factoryFuncBride_FUN_0041fb80
// Address: 0041fb80
// Address Range: [[0041fb80, 0041fb9b]]
// Convention: __cdecl
// Signature: CBride * __cdecl core_bride_cpp_factoryFuncBride_FUN_0041fb80(void)

#include "nocturne.h"

CBride * __cdecl core_bride_cpp_factoryFuncBride_FUN_0041fb80(void)

{
  CBride *pCVar1;
  
  pCVar1 = operator_new(0xbd54);
  if (pCVar1 == (CBride *)0x0) {
    return (CBride *)0x0;
  }
  pCVar1 = core_bride_cpp_CBride_ctor_FUN_0041fbb0(pCVar1);
  return pCVar1;
}
