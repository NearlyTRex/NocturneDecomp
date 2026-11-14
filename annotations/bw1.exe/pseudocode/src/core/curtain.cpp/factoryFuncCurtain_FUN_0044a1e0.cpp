// Name: core_curtain.cpp_factoryFuncCurtain_FUN_0044a1e0
// Address: 0044a1e0
// Address Range: [[0044a1e0, 0044a1fb]]
// Convention: __cdecl
// Signature: CCurtain * __cdecl core_curtain_cpp_factoryFuncCurtain_FUN_0044a1e0(void)

#include "nocturne.h"

CCurtain * __cdecl core_curtain_cpp_factoryFuncCurtain_FUN_0044a1e0(void)

{
  CCurtain *pCVar1;
  
  pCVar1 = (CCurtain *)operator_new(0x65b38);
  if (pCVar1 == (CCurtain *)0x0) {
    return (CCurtain *)0x0;
  }
  pCVar1 = core_curtain_cpp_CCurtain_ctor_FUN_0044a210(pCVar1);
  return pCVar1;
}
