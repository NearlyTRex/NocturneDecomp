// Name: core_vampboss.cpp_factoryFuncVampireBoss_FUN_00581500
// Address: 00581500
// Address Range: [[00581500, 0058151b]]
// Convention: __cdecl
// Signature: CVampireBoss * __cdecl core_vampboss_cpp_factoryFuncVampireBoss_FUN_00581500(void)

#include "nocturne.h"

CVampireBoss * __cdecl core_vampboss_cpp_factoryFuncVampireBoss_FUN_00581500(void)

{
  CVampireBoss *pCVar1;
  
  pCVar1 = (CVampireBoss *)operator_new(0xc3b9c);
  if (pCVar1 == (CVampireBoss *)0x0) {
    return (CVampireBoss *)0x0;
  }
  pCVar1 = core_vampboss_cpp_CVampireBoss_ctor_FUN_00581530(pCVar1);
  return pCVar1;
}
