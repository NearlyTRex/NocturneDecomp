// Name: engine_ncursfx.cpp_CMouse_dtor_FUN_00510070
// Address: 00510070
// Address Range: [[00510070, 005100a4]]
// Convention: __cdecl
// Signature: CMouse * __cdecl engine_ncursfx_cpp_CMouse_dtor_FUN_00510070(CMouse *this_ptr,uint flags)

#include "nocturne.h"

CMouse * __cdecl engine_ncursfx_cpp_CMouse_dtor_FUN_00510070(CMouse *this_ptr,uint flags)

{
  CAlphaBitmap *pCVar1;
  CMouse *pCVar2;
  
  pCVar1 = engine_ncursfx_cpp_FUN_005103e0((CAlphaBitmap *)&this_ptr->field_0x12c,0);
  pCVar1 = engine_ncursfx_cpp_CAlphaBitmap_arrdtor7_FUN_005103c0(pCVar1 + -7,0);
  pCVar2 = (CMouse *)core_menu_cpp_CAlphaBitmap_arrdtor8_FUN_004f0230(pCVar1 + -8,0);
  return pCVar2;
}
