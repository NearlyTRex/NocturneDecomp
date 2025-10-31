// Name: support_newmsg.cpp_CMouse_dtor_FUN_005443e0
// Address: 005443e0
// Address Range: [[005443e0, 00544414]]
// Convention: __cdecl
// Signature: CMouse * support_newmsg.cpp_CMouse_dtor_FUN_005443e0(CMouse * this_ptr)
// Function calls:
//   core_menu.cpp_freeBitmap_FUN_00514f50
//   support_newmsg.cpp_freeBitmap_FUN_00544730
//   support_newmsg.cpp_freeSkullBitmaps_FUN_00544750

#include "nocturne.h"

CMouse * __cdecl support_newmsg_cpp_CMouse_dtor_FUN_005443e0(CMouse *this_ptr)

{
  int extraout_EAX;
  int extraout_EAX_00;
  CMouse *extraout_EAX_01;
  
  support_newmsg_cpp_freeSkullBitmaps_FUN_00544750(this_ptr->skulls);
  support_newmsg_cpp_freeBitmap_FUN_00544730((CAlphaBitmap **)(extraout_EAX + -0x8c));
  core_menu_cpp_freeBitmap_FUN_00514f50((CAlphaBitmap **)(extraout_EAX_00 + -0xa0));
  return extraout_EAX_01;
}


// Assembly code:
// 005443e0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: support_newmsg.cpp_CMouse_dtor_FUN_005443e0
//   XREF to: Stack[0x4] (READ)
// 005443e4: PUSH 0x0
// 005443e6: ADD EAX,0x12c
// 005443eb: PUSH EAX
// 005443ec: CALL support_newmsg.cpp_freeSkullBitmaps_FUN_00544750
//   XREF to: 00544750 (UNCONDITIONAL_CALL)
// 005443f1: ADD ESP,0x8
// 005443f4: PUSH 0x0
// 005443f6: SUB EAX,0x8c
// 005443fb: PUSH EAX
// 005443fc: CALL support_newmsg.cpp_freeBitmap_FUN_00544730
//   XREF to: 00544730 (UNCONDITIONAL_CALL)
// 00544401: ADD ESP,0x8
// 00544404: PUSH 0x0
// 00544406: SUB EAX,0xa0
// 0054440b: PUSH EAX
// 0054440c: CALL core_menu.cpp_freeBitmap_FUN_00514f50
//   XREF to: 00514f50 (UNCONDITIONAL_CALL)
// 00544411: ADD ESP,0x8
// 00544414: RET
