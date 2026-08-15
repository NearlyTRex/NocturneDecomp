// Name: engine_ncursfx.cpp_CMouse_dtor_FUN_005443e0
// Address: 005443e0
// Address Range: [[005443e0, 00544414]]
// Convention: __cdecl
// Signature: CMouse * __cdecl engine_ncursfx_cpp_CMouse_dtor_FUN_005443e0(CMouse *this_ptr,uint flags)

#include "nocturne.h"

CMouse * __cdecl engine_ncursfx_cpp_CMouse_dtor_FUN_005443e0(CMouse *this_ptr,uint flags)

{
  CMouse_ptr_300 pCVar1;
  CMouse_ptr_160 pCVar2;
  CMouse *pCVar3;
  
  pCVar1 = (CMouse_ptr_300)
           engine_ncursfx_cpp_CAlphaBitmap_arrdtor15_FUN_00544750(this_ptr->skulls,0);
  pCVar2 = (CMouse_ptr_160)
           engine_ncursfx_cpp_CAlphaBitmap_arrdtor7_FUN_00544730(ADJ(pCVar1)->flames,0);
  pCVar3 = (CMouse *)core_menu_cpp_CAlphaBitmap_arrdtor8_FUN_00514f50(ADJ(pCVar2)->cursors,0);
  return pCVar3;
}
