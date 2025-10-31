// Name: support_trisock.cpp_convertSockAddr_FUN_005e1960
// Address: 005e1960
// Address Range: [[005e1960, 005e19c4]]
// Convention: __cdecl
// Signature: SOCKADDR_IN * support_trisock.cpp_convertSockAddr_FUN_005e1960(SOCKADDR_IN * dest_addr, SOCKADDR * src_addr)
// Cross-references:
//   support_trisock.cpp_acceptConnection_FUN_005e1d80 (005e1d80) at 005e1dd2 [UNCONDITIONAL_CALL]
//   support_trisock.cpp_getSocketName_FUN_005e1df0 (005e1df0) at 005e1e28 [UNCONDITIONAL_CALL]
//   support_trisock.cpp_receiveSocketData_FUN_005e1c20 (005e1c20) at 005e1c82 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_support_trisock_cpp_006564f4
//   TerminatedCString s_sockaddr_is_not_of_AF_IN_0065650b
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_wsock32.c_ntohs
//   support_trisock.cpp_copyIPAddress_FUN_005e16f0

#include "nocturne.h"

SOCKADDR_IN * __cdecl
support_trisock_cpp_convertSockAddr_FUN_005e1960(SOCKADDR_IN *dest_addr,SOCKADDR *src_addr)

{
  uint uVar1;
  ushort uVar2;
  uint *puVar3;
  BADSPACEBASE *in_ESP;
  
  if (src_addr->sa_family != 2) {
    g_CurrentFilename = "..\\support\\trisock.cpp";
    g_CurrentLineNumber = 0xa5;
    core_main_c_displayErrorAndQuit_FUN_00506f10("sockaddr is not of AF_INET family!");
  }
  uVar2 = crt_wsock32_c_ntohs(*(ushort *)src_addr->sa_data);
  *(ushort *)&dest_addr->sin_addr = uVar2;
  puVar3 = support_trisock_cpp_copyIPAddress_FUN_005e16f0
                     ((uint *)&stack0x00000000,(uint *)(src_addr->sa_data + 2));
  uVar1 = *puVar3;
  dest_addr->sin_family = (short)uVar1;
  dest_addr->sin_port = (short)(uVar1 >> 0x10);
  return dest_addr;
}


// Assembly code:
// 005e1960: PUSH EBX
//   Label: support_trisock.cpp_convertSockAddr_FUN_005e1960
// 005e1961: PUSH ESI
// 005e1962: SUB ESP,0x4
// 005e1965: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005e1969: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005e196d: CMP word ptr [ESI],0x2
// 005e1971: JNZ 0x005e19a0
//   XREF to: 005e19a0 (CONDITIONAL_JUMP)
// 005e1973: XOR EAX,EAX
//   Label: LAB_005e1973
// 005e1975: MOV AX,word ptr [ESI + 0x2]
// 005e1979: PUSH EAX
// 005e197a: CALL crt_wsock32.c_ntohs
//   XREF to: 00610f34 (UNCONDITIONAL_CALL)
// 005e197f: MOV word ptr [EBX + 0x4],AX
// 005e1983: LEA EAX,[ESI + 0x4]
// 005e1986: PUSH EAX
// 005e1987: LEA EAX,[ESP + 0x4]
// 005e198b: PUSH EAX
// 005e198c: CALL support_trisock.cpp_copyIPAddress_FUN_005e16f0
//   XREF to: 005e16f0 (UNCONDITIONAL_CALL)
// 005e1991: MOV EAX,dword ptr [EAX]
// 005e1993: ADD ESP,0x8
// 005e1996: MOV dword ptr [EBX],EAX
// 005e1998: MOV EAX,EBX
// 005e199a: ADD ESP,0x4
// 005e199d: POP ESI
// 005e199e: POP EBX
// 005e199f: RET
// 005e19a0: MOV EDX,0x6564f4
//   Label: LAB_005e19a0
//   XREF to: 006564f4 (PARAM)
// 005e19a5: MOV ECX,0xa5
// 005e19aa: PUSH 0x65650b
//   XREF to: 0065650b (DATA)
// 005e19af: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 005e19b5: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 005e19bb: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005e19c0: ADD ESP,0x4
// 005e19c3: JMP 0x005e1973
//   XREF to: 005e1973 (UNCONDITIONAL_JUMP)
