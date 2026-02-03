// Name: support_newmsg.cpp_CMouse_dtor_FUN_005443e0
// Address: 005443e0
// Address Range: [[005443e0, 00544414]]
// Convention: __cdecl
// Signature: CMouse * __cdecl support_newmsg_cpp_CMouse_dtor_FUN_005443e0(CMouse *this_ptr)

#include "nocturne.h"

CMouse * __cdecl support_newmsg_cpp_CMouse_dtor_FUN_005443e0(CMouse *this_ptr)

{
  CAlphaBitmap *pCVar1;
  CMouse *pCVar2;
  
  pCVar1 = support_newmsg_cpp_freeSkullBitmaps_FUN_00544750(this_ptr->skulls);
  pCVar1 = support_newmsg_cpp_freeBitmap_FUN_00544730(pCVar1 + -7);
  pCVar2 = (CMouse *)core_menu_cpp_freeBitmaps_FUN_00514f50(pCVar1 + -8);
  return pCVar2;
}
