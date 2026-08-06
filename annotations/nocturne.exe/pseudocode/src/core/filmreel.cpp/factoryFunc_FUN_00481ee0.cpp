// Name: core_filmreel.cpp_factoryFunc_FUN_00481ee0
// Address: 00481ee0
// Address Range: [[00481ee0, 00481efb]]
// Convention: __cdecl
// Signature: CFilmProjector * __cdecl core_filmreel_cpp_factoryFunc_FUN_00481ee0(void)

#include "nocturne.h"

CFilmProjector * __cdecl core_filmreel_cpp_factoryFunc_FUN_00481ee0(void)

{
  CFilmProjector *pCVar1;
  
  pCVar1 = operator_new(0x3dc);
  if (pCVar1 == (CFilmProjector *)0x0) {
    return (CFilmProjector *)0x0;
  }
  pCVar1 = core_filmreel_cpp_CFilmProjector_ctor_FUN_00481f10(pCVar1);
  return pCVar1;
}
