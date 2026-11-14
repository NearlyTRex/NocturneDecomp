// Name: core_mimic.cpp_factoryFuncMimic_FUN_004f02e0
// Address: 004f02e0
// Address Range: [[004f02e0, 004f02fb]]
// Convention: __cdecl
// Signature: CMimic * __cdecl core_mimic_cpp_factoryFuncMimic_FUN_004f02e0(void)

#include "nocturne.h"

CMimic * __cdecl core_mimic_cpp_factoryFuncMimic_FUN_004f02e0(void)

{
  CMimic *pCVar1;
  
  pCVar1 = (CMimic *)operator_new(0x4c354);
  if (pCVar1 == (CMimic *)0x0) {
    return (CMimic *)0x0;
  }
  pCVar1 = core_mimic_cpp_CMimic_ctor_FUN_004f0310(pCVar1);
  return pCVar1;
}
