// Name: engine_ncursfx.cpp_CMouse_dtor_FUN_00531280
// Address: 00531280
// Address Range: [[00531280, 005312b4]]
// Convention: __cdecl
// Signature: CMouse * __cdecl engine_ncursfx_cpp_CMouse_dtor_FUN_00531280(CMouse *this_ptr,uint flags)

#include "nocturne.h"

CMouse * __cdecl engine_ncursfx_cpp_CMouse_dtor_FUN_00531280(CMouse *this_ptr,uint flags)

{
  CAlphaBitmap *pCVar1;
  CMouse *pCVar2;
  
  pCVar1 = engine_ncursfx_cpp_CAlphaBitmap_arrdtor15_FUN_005315f0(this_ptr->skulls,0);
  pCVar1 = engine_ncursfx_cpp_CAlphaBitmap_arrdtor7_FUN_005315d0(pCVar1 + -7,0);
  pCVar2 = (CMouse *)core_game_cpp_CAlphaBitmap_arrdtor8_FUN_004dc1f0(pCVar1 + -8,0);
  return pCVar2;
}
