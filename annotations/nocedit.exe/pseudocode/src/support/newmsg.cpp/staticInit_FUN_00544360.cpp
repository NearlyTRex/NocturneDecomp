// Name: support_newmsg.cpp_staticInit_FUN_00544360
// Address: 00544360
// Address Range: [[00544360, 0054437a]]
// Convention: __cdecl
// Signature: void support_newmsg.cpp_staticInit_FUN_00544360(void)
// Globals:
//   WatcomStaticDestructorNode g_CMouseDestructorNode
//   CMouse g_CMouseInstance
// Function calls:
//   crt_stdlib.c_atexit_FUN_005ff060
//   support_newmsg.cpp_CMouse_ctor_FUN_00544380

#include "nocturne.h"

void __cdecl support_newmsg_cpp_staticInit_FUN_00544360(void)

{
  support_newmsg_cpp_CMouse_ctor_FUN_00544380(&g_CMouseInstance);
  crt_stdlib_c_atexit_FUN_005ff060(&g_CMouseDestructorNode);
  return;
}


// Assembly code:
// 00544360: PUSH 0x2fd8a80
//   Label: support_newmsg.cpp_staticInit_FUN_00544360
//   XREF to: 02fd8a80 (DATA)
// 00544365: CALL support_newmsg.cpp_CMouse_ctor_FUN_00544380
//   XREF to: 00544380 (UNCONDITIONAL_CALL)
// 0054436a: ADD ESP,0x4
// 0054436d: PUSH 0x680b70
//   XREF to: 00680b70 (DATA)
// 00544372: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 00544377: ADD ESP,0x4
// 0054437a: RET
