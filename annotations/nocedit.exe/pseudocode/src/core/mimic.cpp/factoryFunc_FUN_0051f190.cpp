// Name: core_mimic.cpp_factoryFunc_FUN_0051f190
// Address: 0051f190
// Address Range: [[0051f190, 0051f1b2]]
// Convention: __cdecl
// Signature: CMimic * __cdecl core_mimic_cpp_factoryFunc_FUN_0051f190(void)

#include "nocturne.h"

CMimic * __cdecl core_mimic_cpp_factoryFunc_FUN_0051f190(void)

{
  CMimic *pCVar1;
  
  pCVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x4ca58,"..\\core\\mimic.cpp",0x77);
  if (pCVar1 == (CMimic *)0x0) {
    return (CMimic *)0x0;
  }
  pCVar1 = core_mimic_cpp_CMimic_ctor_FUN_0051f1d0(pCVar1);
  return pCVar1;
}
