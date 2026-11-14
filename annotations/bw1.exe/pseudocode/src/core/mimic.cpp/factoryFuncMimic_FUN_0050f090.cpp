// Name: core_mimic.cpp_factoryFuncMimic_FUN_0050f090
// Address: 0050f090
// Address Range: [[0050f090, 0050f0ab]]
// Convention: __cdecl
// Signature: CMimic * __cdecl core_mimic_cpp_factoryFuncMimic_FUN_0050f090(void)

#include "nocturne.h"

CMimic * __cdecl core_mimic_cpp_factoryFuncMimic_FUN_0050f090(void)

{
  CMimic *pCVar1;
  
  pCVar1 = (CMimic *)operator_new(0x47ac4);
  if (pCVar1 == (CMimic *)0x0) {
    return (CMimic *)0x0;
  }
  pCVar1 = core_mimic_cpp_CMimic_ctor_FUN_0050f0c0(pCVar1);
  return pCVar1;
}
