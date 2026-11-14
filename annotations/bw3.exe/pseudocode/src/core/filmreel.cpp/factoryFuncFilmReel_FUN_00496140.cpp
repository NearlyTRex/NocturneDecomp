// Name: core_filmreel.cpp_factoryFuncFilmReel_FUN_00496140
// Address: 00496140
// Address Range: [[00496140, 0049615b]]
// Convention: __cdecl
// Signature: CFilmReel * __cdecl core_filmreel_cpp_factoryFuncFilmReel_FUN_00496140(void)

#include "nocturne.h"

CFilmReel * __cdecl core_filmreel_cpp_factoryFuncFilmReel_FUN_00496140(void)

{
  CFilmReel *pCVar1;
  
  pCVar1 = (CFilmReel *)operator_new(0x31c);
  if (pCVar1 == (CFilmReel *)0x0) {
    return (CFilmReel *)0x0;
  }
  pCVar1 = core_filmreel_cpp_CFilmReel_ctor_FUN_00496170(pCVar1);
  return pCVar1;
}
