// Name: core_shovel.cpp_fire_FUN_00588c20
// Address: 00588c20
// Address Range: [[00588c20, 00588c3b]]
// Convention: unknown
// Signature: undefined core_shovel.cpp_fire_FUN_00588c20()
// Globals:
//   TerminatedCString s_Warning_called_fire_for__00649ba6
//   CConsole* g_CConsolePtr = 0083b1a4
//   CConsole g_ConsolePtr
// Function calls:
//   engine_console.cpp_CConsole_printf_FUN_00441890

#include "nocturne.h"

/* Signature: undefined1 actors_weapon_melee.cpp_fire_FUN_00588c20(undefined4 param_1) */

undefined4 core_shovel_cpp_fire_FUN_00588c20(void)

{
  undefined4 in_stack_00000004;
  
  engine_console_cpp_CConsole_printf_FUN_00441890
            (g_CConsolePtr,"Warning: called fire() for melee weapon %s\n",in_stack_00000004);
  return 0;
}


// Assembly code:
// 00588c20: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_shovel.cpp_fire_FUN_00588c20
//   XREF to: Stack[0x4] (READ)
// 00588c24: PUSH EDX
// 00588c25: PUSH 0x649ba6
//   XREF to: 00649ba6 (DATA)
// 00588c2a: MOV ECX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 00588c30: PUSH ECX
//   XREF to: 0083b1a4 (DATA)
// 00588c31: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 00588c36: ADD ESP,0xc
// 00588c39: XOR EAX,EAX
// 00588c3b: RET
