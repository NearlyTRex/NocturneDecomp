// Name: support_trisock.cpp_parseIPAddress_FUN_005e1700
// Address: 005e1700
// Address Range: [[005e1700, 005e174a]]
// Convention: __cdecl
// Signature: uint support_trisock.cpp_parseIPAddress_FUN_005e1700(uint * result_ptr, char * dotted_decimal_string)
// Cross-references:
//   core_game.cpp_FUN_004e2fc0 (004e2fc0) at 004e3006 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_support_trisock_cpp_0065646a
//   TerminatedCString s_Invalid_dotted_decimal_s_00656481
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   support_trisock.cpp_parseIPComponents_FUN_005e1800

#include "nocturne.h"

uint __cdecl
support_trisock_cpp_parseIPAddress_FUN_005e1700(uint *result_ptr,char *dotted_decimal_string)

{
  int iVar1;
  undefined4 in_stack_0000000c;
  
  iVar1 = support_trisock_cpp_parseIPComponents_FUN_005e1800(result_ptr,dotted_decimal_string);
  if (iVar1 != 0) {
    return (uint)result_ptr;
  }
  g_CurrentFilename = "..\\support\\trisock.cpp";
  g_CurrentLineNumber = 0x36;
  core_main_c_displayErrorAndQuit_FUN_00506f10
            ("Invalid dotted decimal string: %s",in_stack_0000000c);
  return (uint)result_ptr;
}


// Assembly code:
// 005e1700: PUSH EBX
//   Label: support_trisock.cpp_parseIPAddress_FUN_005e1700
// 005e1701: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005e1705: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005e1709: PUSH EDX
// 005e170a: PUSH EBX
// 005e170b: CALL support_trisock.cpp_parseIPComponents_FUN_005e1800
//   XREF to: 005e1800 (UNCONDITIONAL_CALL)
// 005e1710: ADD ESP,0x8
// 005e1713: TEST EAX,EAX
// 005e1715: JZ 0x005e171b
//   XREF to: 005e171b (CONDITIONAL_JUMP)
// 005e1717: MOV EAX,EBX
// 005e1719: POP EBX
// 005e171a: RET
// 005e171b: PUSH EDI
//   Label: LAB_005e171b
// 005e171c: PUSH ESI
// 005e171d: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005e1721: PUSH EDI
// 005e1722: MOV ECX,0x65646a
//   XREF to: 0065646a (DATA)
// 005e1727: MOV ESI,0x36
// 005e172c: PUSH 0x656481
//   XREF to: 00656481 (DATA)
// 005e1731: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005e1737: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 005e173d: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005e1742: ADD ESP,0x8
// 005e1745: POP ESI
// 005e1746: POP EDI
// 005e1747: MOV EAX,EBX
// 005e1749: POP EBX
// 005e174a: RET
