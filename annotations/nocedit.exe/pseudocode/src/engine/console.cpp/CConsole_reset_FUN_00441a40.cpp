// Name: engine_console.cpp_CConsole_reset_FUN_00441a40
// Address: 00441a40
// Address Range: [[00441a40, 00441a7a]]
// Convention: __cdecl
// Signature: void engine_console.cpp_CConsole_reset_FUN_00441a40(CConsole * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004daf9b [UNCONDITIONAL_CALL]
//   engine_console.cpp_CConsole_ctor_FUN_00441810 (00441810) at 0044185c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_console_txt_0066e8e8
// Function calls:
//   crt_io.c_deleteFile_FUN_005ff9d0
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

void __cdecl engine_console_cpp_CConsole_reset_FUN_00441a40(CConsole *this_ptr)

{
  crt_memory_c_memset_FUN_005fde40(this_ptr->consoleBuffer,0,4000);
  this_ptr->currentColumn = 0;
  this_ptr->currentRow = 0;
  crt_io_c_deleteFile_FUN_005ff9d0("console.txt");
  return;
}


// Assembly code:
// 00441a40: PUSH EBX
//   Label: engine_console.cpp_CConsole_reset_FUN_00441a40
// 00441a41: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00441a45: PUSH 0xfa0
// 00441a4a: PUSH 0x0
// 00441a4c: LEA EAX,[EBX + 0x4]
// 00441a4f: PUSH EAX
// 00441a50: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 00441a55: ADD ESP,0xc
// 00441a58: MOV dword ptr [EBX + 0xfa4],0x0
// 00441a62: PUSH 0x66e8e8
//   XREF to: 0066e8e8 (DATA)
// 00441a67: MOV dword ptr [EBX + 0xfa8],0x0
// 00441a71: CALL crt_io.c_deleteFile_FUN_005ff9d0
//   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
// 00441a76: ADD ESP,0x4
// 00441a79: POP EBX
// 00441a7a: RET
