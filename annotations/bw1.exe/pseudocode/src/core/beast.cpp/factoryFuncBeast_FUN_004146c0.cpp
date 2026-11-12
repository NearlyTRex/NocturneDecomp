// Name: core_beast.cpp_factoryFuncBeast_FUN_004146c0
// Address: 004146c0
// Address Range: [[004146c0, 004146db]]
// Convention: __cdecl
// Signature: CBeast * __cdecl core_beast_cpp_factoryFuncBeast_FUN_004146c0(void)

#include "nocturne.h"

CBeast * __cdecl core_beast_cpp_factoryFuncBeast_FUN_004146c0(void)

{
  CBeast *pCVar1;
  
  pCVar1 = (CBeast *)operator_new(0xc268);
  if (pCVar1 == (CBeast *)0x0) {
    return (CBeast *)0x0;
  }
  pCVar1 = core_beast_cpp_CBeast_ctor_FUN_004146f0(pCVar1);
  return pCVar1;
}
