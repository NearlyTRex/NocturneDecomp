// Name: core_ammobox.cpp_LogConsoleOpenPCTFile_FUN_00411690
// Address: 00411690
// Address Range: [[00411690, 004116f2]]
// Convention: unknown
// Signature: undefined core_ammobox.cpp_LogConsoleOpenPCTFile_FUN_00411690()
// Cross-references:
//   core_gabriela.cpp_FUN_004d2ea0 (004d2ea0) at 004d3c02 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bc0fb [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Open_pct_f_00614bd1
//   CConsole* g_CConsolePtr = 0083b1a4
//   CConsole g_ConsolePtr
// Function calls:
//   engine_console.cpp_CConsole_printf_FUN_00441890

#include "nocturne.h"

/* Signature: undefined1 actors_other_ammobox.cpp_LogConsoleOpenPCTFile(undefined4 param_1,
   undefined4 param_2) */

void core_ammobox_cpp_LogConsoleOpenPCTFile_FUN_00411690
               (undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX,undefined4 param_4,
               int param_5,float param_6)

{
  *(float *)(param_5 + 0x31c) = param_6;
  engine_console_cpp_CConsole_printf_FUN_00441890
            (g_CConsolePtr,"Open pct : %f\n",(double)param_6,unaff_EBX);
  if ((*(int *)(param_5 + 0x348) == 0) &&
     (*(undefined4 *)(param_5 + 0x348) = 1, *(char *)(param_5 + 0x328) != '\0')) {
    (**(code **)(*(int *)(param_5 + 0x154) + 0x24))();
    return;
  }
  return;
}


// Assembly code:
// 00411690: PUSH EBX
//   Label: core_ammobox.cpp_LogConsoleOpenPCTFile_FUN_00411690
// 00411691: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00411695: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00411699: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0041169d: MOV dword ptr [EBX + 0x31c],EAX
// 004116a3: SUB ESP,0x8
// 004116a6: FSTP double ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 004116a9: PUSH 0x614bd1
//   XREF to: 00614bd1 (DATA)
// 004116ae: MOV EDX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 004116b4: PUSH EDX
//   XREF to: 0083b1a4 (DATA)
// 004116b5: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 004116ba: MOV ECX,dword ptr [EBX + 0x348]
// 004116c0: ADD ESP,0x10
// 004116c3: TEST ECX,ECX
// 004116c5: JNZ 0x004116db
//   XREF to: 004116db (CONDITIONAL_JUMP)
// 004116c7: MOV AH,byte ptr [EBX + 0x328]
// 004116cd: MOV dword ptr [EBX + 0x348],0x1
// 004116d7: TEST AH,AH
// 004116d9: JNZ 0x004116dd
//   XREF to: 004116dd (CONDITIONAL_JUMP)
// 004116db: POP EBX
//   Label: LAB_004116db
// 004116dc: RET
// 004116dd: LEA EDX,[EBX + 0x328]
//   Label: LAB_004116dd
// 004116e3: PUSH EDX
// 004116e4: MOV EAX,dword ptr [EBX + 0x154]
// 004116ea: PUSH EBX
// 004116eb: CALL dword ptr [EAX + 0x24]
// 004116ee: ADD ESP,0x8
// 004116f1: POP EBX
// 004116f2: RET
