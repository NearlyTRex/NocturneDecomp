// Name: core_beast.cpp_factoryFuncBeast_FUN_004149d0
// Address: 004149d0
// Address Range: [[004149d0, 004149eb]]
// Convention: __cdecl
// Signature: CBeast * __cdecl core_beast_cpp_factoryFuncBeast_FUN_004149d0(void)

#include "nocturne.h"

CBeast * __cdecl core_beast_cpp_factoryFuncBeast_FUN_004149d0(void)

{
  CBeast *pCVar1;
  
  pCVar1 = (CBeast *)operator_new(0x10af8);
  if (pCVar1 == (CBeast *)0x0) {
    return (CBeast *)0x0;
  }
  pCVar1 = core_beast_cpp_CBeast_ctor_FUN_00414a00(pCVar1);
  return pCVar1;
}
