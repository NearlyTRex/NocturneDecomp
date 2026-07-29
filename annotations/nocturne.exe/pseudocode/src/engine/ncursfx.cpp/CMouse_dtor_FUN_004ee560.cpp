// Name: engine_ncursfx.cpp_CMouse_dtor_FUN_004ee560
// Address: 004ee560
// Address Range: [[004ee560, 004ee594]]
// Convention: __cdecl
// Signature: CMouse * __cdecl engine_ncursfx_cpp_CMouse_dtor_FUN_004ee560(CMouse *this_ptr,uint flags)

#include "nocturne.h"

CMouse * __cdecl engine_ncursfx_cpp_CMouse_dtor_FUN_004ee560(CMouse *this_ptr,uint flags)

{
  CAlphaBitmap *pCVar1;
  CMouse *pCVar2;
  
  pCVar1 = engine_ncursfx_cpp_CAlphaBitmap_arrdtor2_FUN_004ee8d0(this_ptr->skulls,0);
  pCVar1 = engine_ncursfx_cpp_CAlphaBitmap_arrdtor1_FUN_004ee8b0(pCVar1 + -7,0);
  pCVar2 = (CMouse *)core_menu_cpp_CAlphaBitmap_arrdtor_FUN_004d4370(pCVar1 + -8,0);
  return pCVar2;
}
