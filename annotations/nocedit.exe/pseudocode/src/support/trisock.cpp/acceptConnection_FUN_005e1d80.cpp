// Name: support_trisock.cpp_acceptConnection_FUN_005e1d80
// Address: 005e1d80
// Address Range: [[005e1d80, 005e1de8]]
// Convention: __cdecl
// Signature: int support_trisock.cpp_acceptConnection_FUN_005e1d80(SOCKET * listen_socket, SNetworkAddr * client_addr, SOCKET * new_socket)
// Function calls:
//   crt_wsock32.c_accept
//   support_trisock.cpp_convertSockAddr_FUN_005e1960

#include "nocturne.h"

int __cdecl
support_trisock_cpp_acceptConnection_FUN_005e1d80
          (SOCKET *listen_socket,SNetworkAddr *client_addr,SOCKET *new_socket)

{
  SOCKET SVar1;
  SOCKADDR_IN *pSVar2;
  BADSPACEBASE *in_ESP;
  byte bVar3;
  SOCKET *in_stack_00000018;
  undefined4 local_20;
  int local_8;
  
  bVar3 = 0;
  local_8 = 0x10;
  SVar1 = crt_wsock32_c_accept(*listen_socket,(SOCKADDR *)&local_20,&local_8);
  *in_stack_00000018 = SVar1;
  if (SVar1 == 0xffffffff) {
    return 0;
  }
  if (new_socket == (SOCKET *)0x0) {
    return 1;
  }
  local_20._0_2_ = 0x1dd7;
  local_20._2_1_ = '^';
  local_20._3_1_ = '\0';
  pSVar2 = support_trisock_cpp_convertSockAddr_FUN_005e1960
                     ((SOCKADDR_IN *)&stack0x00000000,(SOCKADDR *)&stack0xfffffff0);
  *new_socket = *(SOCKET *)pSVar2;
  new_socket[(uint)bVar3 * -2 + 1] = *(SOCKET *)((int)pSVar2 + (uint)bVar3 * -8 + 4);
  return 1;
}


// Assembly code:
// 005e1d80: PUSH EDI
//   Label: support_trisock.cpp_acceptConnection_FUN_005e1d80
// 005e1d81: SUB ESP,0x1c
// 005e1d84: MOV EDI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0xc] (READ)
// 005e1d88: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x8] (DATA)
// 005e1d8c: PUSH EAX
// 005e1d8d: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x20] (DATA)
// 005e1d91: MOV EDX,0x10
// 005e1d96: PUSH EAX
// 005e1d97: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 005e1d9b: MOV dword ptr [ESP + 0x20],EDX
//   XREF to: Stack[-0x8] (WRITE)
// 005e1d9f: MOV ECX,dword ptr [EAX]
// 005e1da1: PUSH ECX
// 005e1da2: CALL crt_wsock32.c_accept
//   XREF to: 00610ef2 (UNCONDITIONAL_CALL)
// 005e1da7: MOV EDX,dword ptr [ESP + 0x28]
// 005e1dab: MOV dword ptr [EDX],EAX
// 005e1dad: CMP EAX,-0x1
// 005e1db0: JZ 0x005e1dc0
//   XREF to: 005e1dc0 (CONDITIONAL_JUMP)
// 005e1db2: TEST EDI,EDI
// 005e1db4: JNZ 0x005e1dc7
//   XREF to: 005e1dc7 (CONDITIONAL_JUMP)
// 005e1db6: MOV EAX,0x1
// 005e1dbb: ADD ESP,0x1c
// 005e1dbe: POP EDI
// 005e1dbf: RET
// 005e1dc0: XOR EAX,EAX
//   Label: LAB_005e1dc0
// 005e1dc2: ADD ESP,0x1c
// 005e1dc5: POP EDI
// 005e1dc6: RET
// 005e1dc7: PUSH ESI
//   Label: LAB_005e1dc7
// 005e1dc8: LEA EAX,[ESP + 0x4]
// 005e1dcc: PUSH EAX
// 005e1dcd: LEA EAX,[ESP + 0x18]
// 005e1dd1: PUSH EAX
// 005e1dd2: CALL support_trisock.cpp_convertSockAddr_FUN_005e1960
//   XREF to: 005e1960 (UNCONDITIONAL_CALL)
// 005e1dd7: MOV ESI,EAX
// 005e1dd9: ADD ESP,0x8
// 005e1ddc: MOVSD ES:EDI,ESI
// 005e1ddd: MOVSD ES:EDI,ESI
// 005e1dde: POP ESI
// 005e1ddf: MOV EAX,0x1
// 005e1de4: ADD ESP,0x1c
// 005e1de7: POP EDI
// 005e1de8: RET
