// Name: core_filmreel.cpp_factoryFuncFilmProjector_FUN_004ab590
// Address: 004ab590
// Address Range: [[004ab590, 004ab5ab]]
// Convention: __cdecl
// Signature: CFilmProjector * __cdecl core_filmreel_cpp_factoryFuncFilmProjector_FUN_004ab590(void)

#include "nocturne.h"

CFilmProjector * __cdecl core_filmreel_cpp_factoryFuncFilmProjector_FUN_004ab590(void)

{
  CFilmProjector *pCVar1;
  
  pCVar1 = (CFilmProjector *)operator_new(0x3e4);
  if (pCVar1 == (CFilmProjector *)0x0) {
    return (CFilmProjector *)0x0;
  }
  pCVar1 = core_filmreel_cpp_CFilmProjector_ctor_FUN_004ab5c0(pCVar1);
  return pCVar1;
}
