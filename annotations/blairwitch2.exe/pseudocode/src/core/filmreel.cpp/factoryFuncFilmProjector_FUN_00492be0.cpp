// Name: core_filmreel.cpp_factoryFuncFilmProjector_FUN_00492be0
// Address: 00492be0
// Address Range: [[00492be0, 00492bfb]]
// Convention: __cdecl
// Signature: CFilmProjector * __cdecl core_filmreel_cpp_factoryFuncFilmProjector_FUN_00492be0(void)

#include "nocturne.h"

CFilmProjector * __cdecl core_filmreel_cpp_factoryFuncFilmProjector_FUN_00492be0(void)

{
  CFilmProjector *pCVar1;
  
  pCVar1 = (CFilmProjector *)operator_new(0x540);
  if (pCVar1 == (CFilmProjector *)0x0) {
    return (CFilmProjector *)0x0;
  }
  pCVar1 = core_filmreel_cpp_CFilmProjector_ctor_FUN_00492c10(pCVar1);
  return pCVar1;
}
