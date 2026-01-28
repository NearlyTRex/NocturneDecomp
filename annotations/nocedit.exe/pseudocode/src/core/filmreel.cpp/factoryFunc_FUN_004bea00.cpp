// Name: core_filmreel.cpp_factoryFunc_FUN_004bea00
// Address: 004bea00
// Address Range: [[004bea00, 004bea25]]
// Convention: __cdecl
// Signature: CFilmProjector * __cdecl core_filmreel_cpp_factoryFunc_FUN_004bea00(void)

#include "nocturne.h"

CFilmProjector * __cdecl core_filmreel_cpp_factoryFunc_FUN_004bea00(void)

{
  CFilmProjector *pCVar1;
  
  pCVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x3e4,"..\\core\\filmreel.cpp",0xf3);
  if (pCVar1 == (CFilmProjector *)0x0) {
    return (CFilmProjector *)0x0;
  }
  pCVar1 = core_filmreel_cpp_CFilmProjector_ctor_FUN_004bea40(pCVar1);
  return pCVar1;
}
