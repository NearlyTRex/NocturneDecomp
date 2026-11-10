// Name: engine_ncursfx.cpp_CMouse_dtor_FUN_00508b50
// Address: 00508b50
// Address Range: [[00508b50, 00508b84]]
// Convention: __cdecl
// Signature: CMouse * __cdecl engine_ncursfx_cpp_CMouse_dtor_FUN_00508b50(CMouse *this_ptr,uint flags)

#include "nocturne.h"

CMouse * __cdecl engine_ncursfx_cpp_CMouse_dtor_FUN_00508b50(CMouse *this_ptr,uint flags)

{
  CAlphaBitmap *pCVar1;
  CMouse *pCVar2;
  
  pCVar1 = engine_ncursfx_cpp_CAlphaBitmap_arrdtor15_FUN_00508ec0(this_ptr->skulls,0);
  pCVar1 = engine_ncursfx_cpp_CAlphaBitmap_arrdtor7_FUN_00508ea0(pCVar1 + -7,0);
  pCVar2 = (CMouse *)core_game_cpp_CAlphaBitmap_arrdtor8_FUN_004c4d60(pCVar1 + -8,0);
  return pCVar2;
}
