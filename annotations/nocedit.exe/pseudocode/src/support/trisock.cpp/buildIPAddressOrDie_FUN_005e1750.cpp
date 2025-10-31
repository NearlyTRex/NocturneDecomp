// Name: support_trisock.cpp_buildIPAddressOrDie_FUN_005e1750
// Address: 005e1750
// Address Range: [[005e1750, 005e17b4]]
// Convention: __cdecl
// Signature: uint8_t * support_trisock.cpp_buildIPAddressOrDie_FUN_005e1750(uchar * dest_ip, int octet1, int octet2, int octet3, int octet4)
// Cross-references:
//   support_trisock.cpp_staticInit_FUN_005e16b0 (005e16b0) at 005e16c9 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_support_trisock_cpp_006564a3
//   TerminatedCString s_Invalid_IP_values_d_d_d__006564ba
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   support_trisock.cpp_buildIPAddress_FUN_005e1870

#include "nocturne.h"

uint8_t * __cdecl
support_trisock_cpp_buildIPAddressOrDie_FUN_005e1750
          (uchar *dest_ip,int octet1,int octet2,int octet3,int octet4)

{
  int iVar1;
  undefined4 in_stack_00000018;
  
  iVar1 = support_trisock_cpp_buildIPAddress_FUN_005e1870(dest_ip,octet1,octet2,octet3,octet4);
  if (iVar1 != 0) {
    return dest_ip;
  }
  g_CurrentFilename = "..\\support\\trisock.cpp";
  g_CurrentLineNumber = 0x41;
  core_main_c_displayErrorAndQuit_FUN_00506f10
            ("Invalid IP values: %d, %d, %d, %d",octet1,octet2,octet4,in_stack_00000018);
  return dest_ip;
}


// Assembly code:
// 005e1750: PUSH EBX
//   Label: support_trisock.cpp_buildIPAddressOrDie_FUN_005e1750
// 005e1751: PUSH ESI
// 005e1752: PUSH EDI
// 005e1753: PUSH EBP
// 005e1754: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005e1758: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 005e175c: PUSH EDX
// 005e175d: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 005e1761: PUSH ECX
// 005e1762: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 005e1766: PUSH ESI
// 005e1767: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 005e176b: PUSH EDI
// 005e176c: PUSH EBX
// 005e176d: CALL support_trisock.cpp_buildIPAddress_FUN_005e1870
//   XREF to: 005e1870 (UNCONDITIONAL_CALL)
// 005e1772: ADD ESP,0x14
// 005e1775: TEST EAX,EAX
// 005e1777: JZ 0x005e1780
//   XREF to: 005e1780 (CONDITIONAL_JUMP)
// 005e1779: MOV EAX,EBX
// 005e177b: POP EBP
// 005e177c: POP EDI
// 005e177d: POP ESI
// 005e177e: POP EBX
// 005e177f: RET
// 005e1780: MOV EDX,dword ptr [ESP + 0x24]
//   Label: LAB_005e1780
//   XREF to: Stack[0x14] (READ)
// 005e1784: PUSH EDX
// 005e1785: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 005e1789: PUSH ECX
// 005e178a: PUSH ESI
// 005e178b: PUSH EDI
// 005e178c: MOV EBP,0x6564a3
//   XREF to: 006564a3 (DATA)
// 005e1791: MOV EAX,0x41
// 005e1796: PUSH 0x6564ba
//   XREF to: 006564ba (DATA)
// 005e179b: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 005e17a1: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 005e17a6: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005e17ab: ADD ESP,0x14
// 005e17ae: MOV EAX,EBX
// 005e17b0: POP EBP
// 005e17b1: POP EDI
// 005e17b2: POP ESI
// 005e17b3: POP EBX
// 005e17b4: RET
