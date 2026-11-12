// Name: core_scat.cpp_factoryFuncScat_FUN_0051e970
// Address: 0051e970
// Address Range: [[0051e970, 0051e98b]]
// Convention: __cdecl
// Signature: CScat * __cdecl core_scat_cpp_factoryFuncScat_FUN_0051e970(void)

#include "nocturne.h"

CScat * __cdecl core_scat_cpp_factoryFuncScat_FUN_0051e970(void)

{
  CScat *pCVar1;
  
  pCVar1 = (CScat *)operator_new(0x2566c);
  if (pCVar1 == (CScat *)0x0) {
    return (CScat *)0x0;
  }
  pCVar1 = core_scat_cpp_CScat_ctor_FUN_0051e9a0(pCVar1);
  return pCVar1;
}
