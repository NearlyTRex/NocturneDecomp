// Name: core_vampboss.cpp_factoryFuncVampireBoss_FUN_005a5140
// Address: 005a5140
// Address Range: [[005a5140, 005a515b]]
// Convention: __cdecl
// Signature: CVampireBoss * __cdecl core_vampboss_cpp_factoryFuncVampireBoss_FUN_005a5140(void)

#include "nocturne.h"

CVampireBoss * __cdecl core_vampboss_cpp_factoryFuncVampireBoss_FUN_005a5140(void)

{
  CVampireBoss *pCVar1;
  
  pCVar1 = (CVampireBoss *)operator_new(0xbf3fc);
  if (pCVar1 == (CVampireBoss *)0x0) {
    return (CVampireBoss *)0x0;
  }
  pCVar1 = core_vampboss_cpp_CVampireBoss_ctor_FUN_005a5170(pCVar1);
  return pCVar1;
}
