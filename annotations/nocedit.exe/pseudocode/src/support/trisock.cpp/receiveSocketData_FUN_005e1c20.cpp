// Name: support_trisock.cpp_receiveSocketData_FUN_005e1c20
// Address: 005e1c20
// Address Range: [[005e1c20, 005e1c9a]]
// Convention: __cdecl
// Signature: int support_trisock.cpp_receiveSocketData_FUN_005e1c20(SSocketContext * socket_ctx, char * buffer, int length, SNetworkAddr * source_addr)
// Cross-references:
//   core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0 (005405b0) at 0054061d [UNCONDITIONAL_CALL]
//   core_netgame.cpp_FUN_00540550 (00540550) at 0054058e [UNCONDITIONAL_CALL]
// Function calls:
//   crt_wsock32.c_recv
//   crt_wsock32.c_recvfrom
//   support_trisock.cpp_convertSockAddr_FUN_005e1960

#include "nocturne.h"

int __cdecl
support_trisock_cpp_receiveSocketData_FUN_005e1c20
          (SSocketContext *socket_ctx,char *buffer,int length,SNetworkAddr *source_addr)

{
  undefined4 uVar1;
  SNetworkAddr *pSVar2;
  int iVar3;
  SOCKADDR_IN *pSVar4;
  BADSPACEBASE *in_ESP;
  byte bVar5;
  SOCKADDR local_2c;
  undefined4 uStack_1c;
  
  bVar5 = 0;
  if (source_addr == (SNetworkAddr *)0x0) {
    iVar3 = crt_wsock32_c_recv(socket_ctx->socket,buffer,length,0);
  }
  else {
    iVar3 = crt_wsock32_c_recvfrom
                      (socket_ctx->socket,buffer,length,0,&local_2c,(int *)&stack0xffffffec);
    if (0 < iVar3) {
      uStack_1c = 0x5e1c87;
      pSVar4 = support_trisock_cpp_convertSockAddr_FUN_005e1960
                         ((SOCKADDR_IN *)&stack0x00000000,(SOCKADDR *)&stack0xfffffff0);
      pSVar2 = source_addr + -(uint)bVar5;
      source_addr->ip_address = *(uint *)pSVar4;
      uVar1 = *(undefined4 *)((int)pSVar4 + (uint)bVar5 * -8 + 4);
      pSVar2->port = (short)uVar1;
      pSVar2->padding[0] = (char)((uint)uVar1 >> 0x10);
      pSVar2->padding[1] = (char)((uint)uVar1 >> 0x18);
      return iVar3;
    }
  }
  return iVar3;
}


// Assembly code:
// 005e1c20: PUSH EBX
//   Label: support_trisock.cpp_receiveSocketData_FUN_005e1c20
// 005e1c21: PUSH ESI
// 005e1c22: PUSH EDI
// 005e1c23: PUSH EBP
// 005e1c24: SUB ESP,0x1c
// 005e1c27: MOV EDX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 005e1c2b: MOV ECX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x8] (READ)
// 005e1c2f: MOV EBX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0xc] (READ)
// 005e1c33: MOV EDI,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x10] (READ)
// 005e1c37: TEST EDI,EDI
// 005e1c39: JNZ 0x005e1c55
//   XREF to: 005e1c55 (CONDITIONAL_JUMP)
// 005e1c3b: PUSH EDI
// 005e1c3c: PUSH EBX
// 005e1c3d: PUSH ECX
// 005e1c3e: MOV ECX,dword ptr [EDX]
// 005e1c40: PUSH ECX
// 005e1c41: CALL crt_wsock32.c_recv
//   XREF to: 00610f16 (UNCONDITIONAL_CALL)
// 005e1c46: MOV EBX,EAX
// 005e1c48: CMP EBX,-0x1
//   Label: LAB_005e1c48
// 005e1c4b: MOV EAX,EBX
// 005e1c4d: ADD ESP,0x1c
// 005e1c50: POP EBP
// 005e1c51: POP EDI
// 005e1c52: POP ESI
// 005e1c53: POP EBX
// 005e1c54: RET
// 005e1c55: LEA EAX,[ESP + 0x18]
//   Label: LAB_005e1c55
//   XREF to: Stack[-0x14] (DATA)
// 005e1c59: PUSH EAX
// 005e1c5a: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x2c] (DATA)
// 005e1c5e: PUSH EAX
// 005e1c5f: PUSH 0x0
// 005e1c61: MOV ESI,0x10
// 005e1c66: PUSH EBX
// 005e1c67: MOV dword ptr [ESP + 0x28],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 005e1c6b: PUSH ECX
// 005e1c6c: MOV EBP,dword ptr [EDX]
// 005e1c6e: PUSH EBP
// 005e1c6f: CALL crt_wsock32.c_recvfrom
//   XREF to: 00610f10 (UNCONDITIONAL_CALL)
// 005e1c74: MOV EBX,EAX
// 005e1c76: TEST EAX,EAX
// 005e1c78: JLE 0x005e1c48
//   XREF to: 005e1c48 (CONDITIONAL_JUMP)
// 005e1c7a: MOV EAX,ESP
// 005e1c7c: PUSH EAX
// 005e1c7d: LEA EAX,[ESP + 0x14]
// 005e1c81: PUSH EAX
// 005e1c82: CALL support_trisock.cpp_convertSockAddr_FUN_005e1960
//   XREF to: 005e1960 (UNCONDITIONAL_CALL)
// 005e1c87: MOV ESI,EAX
// 005e1c89: ADD ESP,0x8
// 005e1c8c: MOVSD ES:EDI,ESI
// 005e1c8d: MOVSD ES:EDI,ESI
// 005e1c8e: CMP EBX,-0x1
// 005e1c91: MOV EAX,EBX
// 005e1c93: ADD ESP,0x1c
// 005e1c96: POP EBP
// 005e1c97: POP EDI
// 005e1c98: POP ESI
// 005e1c99: POP EBX
// 005e1c9a: RET
