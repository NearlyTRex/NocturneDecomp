// Name: core_icepick.cpp_factoryFunc_FUN_004f7db0
// Address: 004f7db0
// Address Range: [[004f7db0, 004f7dd2]]
// Convention: __cdecl
// Signature: CIcePick * core_icepick.cpp_factoryFunc_FUN_004f7db0(void)

#include "nocturne.h"

CIcePick * __cdecl core_icepick_cpp_factoryFunc_FUN_004f7db0(void)

{
  CIcePick *pCVar1;
  
  pCVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x1fc04,"..\\core\\icepick.cpp",0x66);
  if (pCVar1 == (CIcePick *)0x0) {
    return (CIcePick *)0x0;
  }
  pCVar1 = core_icepick_cpp_CIcePick_ctor_FUN_004f7df0(pCVar1);
  return pCVar1;
}
