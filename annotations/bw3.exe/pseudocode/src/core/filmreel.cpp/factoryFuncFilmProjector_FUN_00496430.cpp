// Name: core_filmreel.cpp_factoryFuncFilmProjector_FUN_00496430
// Address: 00496430
// Address Range: [[00496430, 0049644b]]
// Convention: __cdecl
// Signature: CFilmProjector * __cdecl core_filmreel_cpp_factoryFuncFilmProjector_FUN_00496430(void)

#include "nocturne.h"

CFilmProjector * __cdecl core_filmreel_cpp_factoryFuncFilmProjector_FUN_00496430(void)

{
  CFilmProjector *pCVar1;
  
  pCVar1 = (CFilmProjector *)operator_new(0x3e4);
  if (pCVar1 == (CFilmProjector *)0x0) {
    return (CFilmProjector *)0x0;
  }
  pCVar1 = core_filmreel_cpp_CFilmProjector_ctor_FUN_00496460(pCVar1);
  return pCVar1;
}
