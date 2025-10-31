// Name: support_trisock.cpp_getSocketName_FUN_005e1df0
// Address: 005e1df0
// Address Range: [[005e1df0, 005e1e42]]
// Convention: __cdecl
// Signature: int support_trisock.cpp_getSocketName_FUN_005e1df0(SOCKET * socket_handle, SNetworkAddr * param_2)
// Cross-references:
//   core_netgame.cpp_initializeNetwork_FUN_0053fbc0 (0053fbc0) at 0053fc3e [UNCONDITIONAL_CALL]
// Function calls:
//   crt_wsock32.c_getsockname
//   support_trisock.cpp_convertSockAddr_FUN_005e1960

#include "nocturne.h"

int __cdecl
support_trisock_cpp_getSocketName_FUN_005e1df0(SOCKET *socket_handle,SNetworkAddr *param_2)

{
  int iVar1;
  SOCKADDR_IN *pSVar2;
  BADSPACEBASE *in_ESP;
  byte bVar3;
  undefined4 *in_stack_0000001c;
  int local_4;
  
  bVar3 = 0;
  local_4 = 0x10;
  iVar1 = crt_wsock32_c_getsockname(*socket_handle,(SOCKADDR *)&stack0xffffffe4,&local_4);
  if (iVar1 != 0) {
    return 0;
  }
  pSVar2 = support_trisock_cpp_convertSockAddr_FUN_005e1960
                     ((SOCKADDR_IN *)&socket_handle,(SOCKADDR *)&stack0xfffffff4);
  *in_stack_0000001c = *(undefined4 *)pSVar2;
  in_stack_0000001c[(uint)bVar3 * -2 + 1] = *(undefined4 *)((int)pSVar2 + (uint)bVar3 * -8 + 4);
  return 1;
}


// Assembly code:
// 005e1df0: SUB ESP,0x1c
//   Label: support_trisock.cpp_getSocketName_FUN_005e1df0
// 005e1df3: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x4] (DATA)
// 005e1df7: PUSH EAX
// 005e1df8: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x1c] (DATA)
// 005e1dfc: MOV EDX,0x10
// 005e1e01: PUSH EAX
// 005e1e02: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 005e1e06: MOV dword ptr [ESP + 0x20],EDX
//   XREF to: Stack[-0x4] (WRITE)
// 005e1e0a: MOV ECX,dword ptr [EAX]
// 005e1e0c: PUSH ECX
// 005e1e0d: CALL crt_wsock32.c_getsockname
//   XREF to: 00610eec (UNCONDITIONAL_CALL)
// 005e1e12: TEST EAX,EAX
// 005e1e14: JZ 0x005e1e1c
//   XREF to: 005e1e1c (CONDITIONAL_JUMP)
// 005e1e16: XOR EAX,EAX
// 005e1e18: ADD ESP,0x1c
// 005e1e1b: RET
// 005e1e1c: PUSH EDI
//   Label: LAB_005e1e1c
// 005e1e1d: PUSH ESI
// 005e1e1e: LEA EAX,[ESP + 0x8]
// 005e1e22: PUSH EAX
// 005e1e23: LEA EAX,[ESP + 0x1c]
// 005e1e27: PUSH EAX
// 005e1e28: CALL support_trisock.cpp_convertSockAddr_FUN_005e1960
//   XREF to: 005e1960 (UNCONDITIONAL_CALL)
// 005e1e2d: ADD ESP,0x8
// 005e1e30: MOV ESI,EAX
// 005e1e32: MOV EDI,dword ptr [ESP + 0x2c]
// 005e1e36: MOV EAX,0x1
// 005e1e3b: MOVSD ES:EDI,ESI
// 005e1e3c: MOVSD ES:EDI,ESI
// 005e1e3d: POP ESI
// 005e1e3e: POP EDI
// 005e1e3f: ADD ESP,0x1c
// 005e1e42: RET
