// Name: core_boxactor.cpp_factoryFuncLightActor_FUN_0041cf30
// Address: 0041cf30
// Address Range: [[0041cf30, 0041cf4b]]
// Convention: __cdecl
// Signature: CLightActor * __cdecl core_boxactor_cpp_factoryFuncLightActor_FUN_0041cf30(void)

#include "nocturne.h"

CLightActor * __cdecl core_boxactor_cpp_factoryFuncLightActor_FUN_0041cf30(void)

{
  CLightActor *pCVar1;
  
  pCVar1 = (CLightActor *)operator_new(0x37e4);
  if (pCVar1 == (CLightActor *)0x0) {
    return (CLightActor *)0x0;
  }
  pCVar1 = core_boxactor_cpp_CLightActor_ctor_FUN_0041cf60(pCVar1);
  return pCVar1;
}
