// Name: core_beast.cpp_factoryFunc_FUN_00415020
// Address: 00415020
// Address Range: [[00415020, 0041503b]]
// Convention: __cdecl
// Signature: CBeast * __cdecl core_beast_cpp_factoryFunc_FUN_00415020(void)

#include "nocturne.h"

CBeast * __cdecl core_beast_cpp_factoryFunc_FUN_00415020(void)

{
  int iVar1;
  CBeast *pCVar2;
  
  iVar1 = FUN_0056497c(0xbd24);
  if (iVar1 == 0) {
    return (CBeast *)0x0;
  }
  pCVar2 = (CBeast *)core_beast_cpp_FUN_00415050(iVar1);
  return pCVar2;
}
