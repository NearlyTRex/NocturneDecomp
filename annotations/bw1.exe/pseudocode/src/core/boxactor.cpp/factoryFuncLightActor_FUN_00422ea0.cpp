// Name: core_boxactor.cpp_factoryFuncLightActor_FUN_00422ea0
// Address: 00422ea0
// Address Range: [[00422ea0, 00422ebb]]
// Convention: __cdecl
// Signature: CLightActor * __cdecl core_boxactor_cpp_factoryFuncLightActor_FUN_00422ea0(void)

#include "nocturne.h"

CLightActor * __cdecl core_boxactor_cpp_factoryFuncLightActor_FUN_00422ea0(void)

{
  CLightActor *pCVar1;
  
  pCVar1 = (CLightActor *)operator_new(0x3684);
  if (pCVar1 == (CLightActor *)0x0) {
    return (CLightActor *)0x0;
  }
  pCVar1 = core_boxactor_cpp_CLightActor_ctor_FUN_00422ed0(pCVar1);
  return pCVar1;
}
