// Name: core_filmreel.cpp_factoryFuncFilmProjector_FUN_004bea00
// Address: 004bea00
// MANUAL RECONSTRUCTION
// Address Range: [[004bea00, 004bea25]]
// Convention: __cdecl
// Signature: CFilmProjector * __cdecl core_filmreel_cpp_factoryFuncFilmProjector_FUN_004bea00(void)

#include "nocturne.h"

CFilmProjector * __cdecl core_filmreel_cpp_factoryFuncFilmProjector_FUN_004bea00(void)

{
  CFilmProjector *pCVar1;
  
  pCVar1 = (CFilmProjector *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(sizeof(CFilmProjector),"..\\core\\filmreel.cpp",0xf3)
  ;
  if (pCVar1 == (CFilmProjector *)0x0) {
    return (CFilmProjector *)0x0;
  }
  pCVar1 = core_filmreel_cpp_CFilmProjector_ctor_FUN_004bea40(pCVar1);
  return pCVar1;
}
