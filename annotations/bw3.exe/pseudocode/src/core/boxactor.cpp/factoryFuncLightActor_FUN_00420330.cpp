// Name: core_boxactor.cpp_factoryFuncLightActor_FUN_00420330
// Address: 00420330
// Address Range: [[00420330, 0042034b]]
// Convention: __cdecl
// Signature: CLightActor * __cdecl core_boxactor_cpp_factoryFuncLightActor_FUN_00420330(void)

#include "nocturne.h"

CLightActor * __cdecl core_boxactor_cpp_factoryFuncLightActor_FUN_00420330(void)

{
  CLightActor *pCVar1;
  
  pCVar1 = (CLightActor *)operator_new(0x36f4);
  if (pCVar1 == (CLightActor *)0x0) {
    return (CLightActor *)0x0;
  }
  pCVar1 = core_boxactor_cpp_CLightActor_ctor_FUN_00420360(pCVar1);
  return pCVar1;
}
