// Name: core_filmreel.cpp_factoryFuncFilmReel_FUN_00481c00
// Address: 00481c00
// Address Range: [[00481c00, 00481c1b]]
// Convention: __cdecl
// Signature: CFilmReel * __cdecl core_filmreel_cpp_factoryFuncFilmReel_FUN_00481c00(void)

#include "nocturne.h"

CFilmReel * __cdecl core_filmreel_cpp_factoryFuncFilmReel_FUN_00481c00(void)

{
  CFilmReel *pCVar1;
  
  pCVar1 = operator_new(0x314);
  if (pCVar1 == (CFilmReel *)0x0) {
    return (CFilmReel *)0x0;
  }
  pCVar1 = core_filmreel_cpp_CFilmReel_ctor_FUN_00481c30(pCVar1);
  return pCVar1;
}
