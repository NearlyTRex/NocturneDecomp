// Name: core_mimic.cpp_factoryFunc_FUN_004d4420
// Address: 004d4420
// Address Range: [[004d4420, 004d443b]]
// Convention: __cdecl
// Signature: CMimic * __cdecl core_mimic_cpp_factoryFunc_FUN_004d4420(void)

#include "nocturne.h"

CMimic * __cdecl core_mimic_cpp_factoryFunc_FUN_004d4420(void)

{
  CMimic *pCVar1;
  
  pCVar1 = operator_new(0x47580);
  if (pCVar1 == (CMimic *)0x0) {
    return (CMimic *)0x0;
  }
  pCVar1 = core_mimic_cpp_CMimic_ctor_FUN_004d4450(pCVar1);
  return pCVar1;
}
