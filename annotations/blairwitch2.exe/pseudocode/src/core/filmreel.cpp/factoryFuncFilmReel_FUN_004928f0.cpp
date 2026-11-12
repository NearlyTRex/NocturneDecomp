// Name: core_filmreel.cpp_factoryFuncFilmReel_FUN_004928f0
// Address: 004928f0
// Address Range: [[004928f0, 0049290b]]
// Convention: __cdecl
// Signature: CFilmReel * __cdecl core_filmreel_cpp_factoryFuncFilmReel_FUN_004928f0(void)

#include "nocturne.h"

CFilmReel * __cdecl core_filmreel_cpp_factoryFuncFilmReel_FUN_004928f0(void)

{
  CFilmReel *pCVar1;
  
  pCVar1 = (CFilmReel *)operator_new(0x478);
  if (pCVar1 == (CFilmReel *)0x0) {
    return (CFilmReel *)0x0;
  }
  pCVar1 = core_filmreel_cpp_CFilmReel_ctor_FUN_00492920(pCVar1);
  return pCVar1;
}
