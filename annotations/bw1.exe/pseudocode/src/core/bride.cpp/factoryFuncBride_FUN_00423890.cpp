// Name: core_bride.cpp_factoryFuncBride_FUN_00423890
// Address: 00423890
// Address Range: [[00423890, 004238ab]]
// Convention: __cdecl
// Signature: CBride * __cdecl core_bride_cpp_factoryFuncBride_FUN_00423890(void)

#include "nocturne.h"

CBride * __cdecl core_bride_cpp_factoryFuncBride_FUN_00423890(void)

{
  CBride *pCVar1;
  
  pCVar1 = (CBride *)operator_new(0xc29c);
  if (pCVar1 == (CBride *)0x0) {
    return (CBride *)0x0;
  }
  pCVar1 = core_bride_cpp_CBride_ctor_FUN_004238c0(pCVar1);
  return pCVar1;
}
