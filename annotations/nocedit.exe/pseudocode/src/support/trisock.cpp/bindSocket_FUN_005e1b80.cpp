// Name: support_trisock.cpp_bindSocket_FUN_005e1b80
// Address: 005e1b80
// Address Range: [[005e1b80, 005e1bc5]]
// Convention: __cdecl
// Signature: int support_trisock.cpp_bindSocket_FUN_005e1b80(uint16_t port, SOCKET * socket_handle)
// Cross-references:
//   core_netgame.cpp_initializeNetwork_FUN_0053fbc0 (0053fbc0) at 0053fc14 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_wsock32.c_bind
//   crt_wsock32.c_htons

#include "nocturne.h"

int __cdecl support_trisock_cpp_bindSocket_FUN_005e1b80(uint16_t port,SOCKET *socket_handle)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  SOCKET *in_stack_0000000c;
  ushort uStack_6;
  char acStack_4 [4];
  
  uStack_6 = crt_wsock32_c_htons((ushort)socket_handle);
  acStack_4[0] = '\0';
  acStack_4[1] = '\0';
  acStack_4[2] = '\0';
  acStack_4[3] = '\0';
  iVar1 = crt_wsock32_c_bind(*in_stack_0000000c,(SOCKADDR *)&stack0xfffffff8,0x10);
  return (uint)(iVar1 == 0);
}


// Assembly code:
// 005e1b80: SUB ESP,0x10
//   Label: support_trisock.cpp_bindSocket_FUN_005e1b80
// 005e1b83: XOR EAX,EAX
// 005e1b85: MOV AX,word ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005e1b8a: MOV EDX,0x2
// 005e1b8f: PUSH EAX
// 005e1b90: MOV word ptr [ESP + 0x4],DX
//   XREF to: Stack[-0x10] (WRITE)
// 005e1b95: CALL crt_wsock32.c_htons
//   XREF to: 00610f2e (UNCONDITIONAL_CALL)
// 005e1b9a: PUSH 0x10
// 005e1b9c: MOV word ptr [ESP + 0x6],AX
// 005e1ba1: LEA EAX,[ESP + 0x4]
// 005e1ba5: XOR EDX,EDX
// 005e1ba7: PUSH EAX
// 005e1ba8: MOV EAX,dword ptr [ESP + 0x1c]
// 005e1bac: MOV dword ptr [ESP + 0xc],EDX
// 005e1bb0: MOV ECX,dword ptr [EAX]
// 005e1bb2: PUSH ECX
// 005e1bb3: CALL crt_wsock32.c_bind
//   XREF to: 00610f22 (UNCONDITIONAL_CALL)
// 005e1bb8: TEST EAX,EAX
// 005e1bba: SETZ AL
// 005e1bbd: AND EAX,0xff
// 005e1bc2: ADD ESP,0x10
// 005e1bc5: RET
