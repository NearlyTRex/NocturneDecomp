// Name: core_dlight.cpp_getRestoreMemory_FUN_00472950
// Address: 00472950
// Address Range: [[00472950, 004729b7]]
// Convention: __cdecl
// Signature: int core_dlight.cpp_getRestoreMemory_FUN_00472950(int pixel_count)
// Cross-references:
//   core_dlight.cpp_CDemonLight_allocMasterZBuffer_FUN_004729d0 (004729d0) at 004729ed [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dlight_cpp_0061eefc
//   TerminatedCString s_getRestoreMemory_Need_mo_0061ef0f
//   uchar[6291656] g_ShadowRestoreBuffer
//   uint g_ShadowRestoreAllocator
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

int __cdecl core_dlight_cpp_getRestoreMemory_FUN_00472950(int pixel_count)

{
  int iVar1;
  int in_stack_00000008;
  
  if (0x300060U - pixel_count < g_ShadowRestoreAllocator) {
    g_CurrentFilename = "..\\core\\dlight.cpp";
    g_CurrentLineNumber = 0xa3;
    core_main_c_displayErrorAndQuit_FUN_00506f10("getRestoreMemory - Need more static memory");
  }
  iVar1 = g_ShadowRestoreAllocator * 2;
  g_ShadowRestoreAllocator = g_ShadowRestoreAllocator + in_stack_00000008 + 8;
  return (uint)(g_ShadowRestoreBuffer + iVar1 + 0x10) & 0xfffffff0;
}


// Assembly code:
// 00472950: PUSH EDI
//   Label: core_dlight.cpp_getRestoreMemory_FUN_00472950
// 00472951: MOV EAX,0x300064
// 00472956: SUB EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0047295a: MOV ECX,dword ptr [0x026a580c]
//   XREF to: 026a580c (READ)
// 00472960: SUB EAX,0x4
// 00472963: CMP EAX,ECX
// 00472965: JC 0x0047298f
//   XREF to: 0047298f (CONDITIONAL_JUMP)
// 00472967: MOV EDX,dword ptr [ESP + 0x8]
//   Label: LAB_00472967
//   XREF to: Stack[0x4] (READ)
// 0047296b: MOV EAX,[0x026a580c]
//   XREF to: 026a580c (READ)
// 00472970: MOV EDI,dword ptr [0x026a580c]
//   XREF to: 026a580c (READ)
// 00472976: ADD EAX,EAX
// 00472978: ADD EDX,0x8
// 0047297b: ADD EAX,0x20a5744
//   XREF to: 020a5744 (DATA)
// 00472980: ADD EDI,EDX
// 00472982: ADD EAX,0x10
// 00472985: MOV dword ptr [0x026a580c],EDI
//   XREF to: 026a580c (WRITE)
// 0047298b: AND AL,0xf0
// 0047298d: POP EDI
// 0047298e: RET
// 0047298f: PUSH ESI
//   Label: LAB_0047298f
// 00472990: PUSH EBX
// 00472991: MOV EBX,0x61eefc
//   XREF to: 0061eefc (PARAM)
// 00472996: MOV ESI,0xa3
// 0047299b: PUSH 0x61ef0f
//   XREF to: 0061ef0f (DATA)
// 004729a0: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 004729a6: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 004729ac: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004729b1: ADD ESP,0x4
// 004729b4: POP EBX
// 004729b5: POP ESI
// 004729b6: JMP 0x00472967
//   XREF to: 00472967 (UNCONDITIONAL_JUMP)
