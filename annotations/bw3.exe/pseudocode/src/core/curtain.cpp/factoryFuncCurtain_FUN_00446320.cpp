// Name: core_curtain.cpp_factoryFuncCurtain_FUN_00446320
// Address: 00446320
// Address Range: [[00446320, 0044633b]]
// Convention: __cdecl
// Signature: CCurtain * __cdecl core_curtain_cpp_factoryFuncCurtain_FUN_00446320(void)

#include "nocturne.h"

CCurtain * __cdecl core_curtain_cpp_factoryFuncCurtain_FUN_00446320(void)

{
  CCurtain *pCVar1;
  
  pCVar1 = (CCurtain *)operator_new(0x65b38);
  if (pCVar1 == (CCurtain *)0x0) {
    return (CCurtain *)0x0;
  }
  pCVar1 = core_curtain_cpp_CCurtain_ctor_FUN_00446350(pCVar1);
  return pCVar1;
}
