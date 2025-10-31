// Name: engine_console.cpp_staticInit_FUN_004417e0
// Address: 004417e0
// Address Range: [[004417e0, 00441802]]
// Convention: __cdecl
// Signature: void engine_console.cpp_staticInit_FUN_004417e0(void)
// Globals:
//   WatcomStaticDestructorNode g_ConsoleDestructorNode
//   CConsole g_ConsolePtr
// Function calls:
//   crt_stdlib.c_atexit_FUN_005ff060
//   engine_console.cpp_CConsole_ctor_FUN_00441810

#include "nocturne.h"

void __cdecl engine_console_cpp_staticInit_FUN_004417e0(void)

{
  engine_console_cpp_CConsole_ctor_FUN_00441810(&g_ConsolePtr,0x28,0x20,1,1);
  crt_stdlib_c_atexit_FUN_005ff060(&g_ConsoleDestructorNode);
  return;
}


// Assembly code:
// 004417e0: PUSH 0x1
//   Label: engine_console.cpp_staticInit_FUN_004417e0
// 004417e2: PUSH 0x1
// 004417e4: PUSH 0x20
// 004417e6: PUSH 0x28
// 004417e8: PUSH 0x83b1a4
//   XREF to: 0083b1a4 (DATA)
// 004417ed: CALL engine_console.cpp_CConsole_ctor_FUN_00441810
//   XREF to: 00441810 (UNCONDITIONAL_CALL)
// 004417f2: ADD ESP,0x14
// 004417f5: PUSH 0x66e8d0
//   XREF to: 0066e8d0 (DATA)
// 004417fa: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 004417ff: ADD ESP,0x4
// 00441802: RET
