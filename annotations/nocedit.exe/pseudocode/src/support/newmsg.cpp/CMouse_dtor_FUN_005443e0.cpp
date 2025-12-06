// Name: support_newmsg.cpp_CMouse_dtor_FUN_005443e0
// Address: 005443e0
// Address Range: [[005443e0, 00544414]]
// Convention: __cdecl
// Signature: CMouse * support_newmsg.cpp_CMouse_dtor_FUN_005443e0(CMouse * this_ptr)

#include "nocturne.h"

CMouse * __cdecl support_newmsg_cpp_CMouse_dtor_FUN_005443e0(CMouse *this_ptr)

{
  int extraout_EAX;
  int extraout_EAX_00;
  CMouse *extraout_EAX_01;
  
  support_newmsg_cpp_freeSkullBitmaps_FUN_00544750(this_ptr->skulls);
  support_newmsg_cpp_freeBitmap_FUN_00544730((CAlphaBitmap **)(extraout_EAX + -0x8c));
  core_menu_cpp_freeBitmaps_FUN_00514f50((CAlphaBitmap **)(extraout_EAX_00 + -0xa0));
  return extraout_EAX_01;
}
