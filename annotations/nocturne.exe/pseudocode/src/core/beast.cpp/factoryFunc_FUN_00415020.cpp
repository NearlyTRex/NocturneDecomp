// Name: core_beast.cpp_factoryFunc_FUN_00415020
// Address: 00415020
// Address Range: [[00415020, 0041503b]]
// Convention: __cdecl
// Signature: CBeast * __cdecl core_beast_cpp_factoryFunc_FUN_00415020(void)

#include "nocturne.h"

CBeast * __cdecl core_beast_cpp_factoryFunc_FUN_00415020(void)

{
  CBeast *pCVar1;
  
  pCVar1 = operator_new(0xbd24);
  if (pCVar1 == (CBeast *)0x0) {
    return (CBeast *)0x0;
  }
  pCVar1 = core_beast_cpp_CBeast_ctor_FUN_00415050(pCVar1);
  return pCVar1;
}
