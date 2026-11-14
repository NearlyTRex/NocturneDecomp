// Name: core_filmreel.cpp_factoryFuncFilmReel_FUN_004ab2a0
// Address: 004ab2a0
// Address Range: [[004ab2a0, 004ab2bb]]
// Convention: __cdecl
// Signature: CFilmReel * __cdecl core_filmreel_cpp_factoryFuncFilmReel_FUN_004ab2a0(void)

#include "nocturne.h"

CFilmReel * __cdecl core_filmreel_cpp_factoryFuncFilmReel_FUN_004ab2a0(void)

{
  CFilmReel *pCVar1;
  
  pCVar1 = (CFilmReel *)operator_new(0x31c);
  if (pCVar1 == (CFilmReel *)0x0) {
    return (CFilmReel *)0x0;
  }
  pCVar1 = core_filmreel_cpp_CFilmReel_ctor_FUN_004ab2d0(pCVar1);
  return pCVar1;
}
