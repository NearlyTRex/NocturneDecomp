// Name: support_trisock.cpp_performSocketOperation_FUN_005e1ca0
// Address: 005e1ca0
// Address Range: [[005e1ca0, 005e1d1a]]
// Convention: __cdecl
// Signature: int support_trisock.cpp_performSocketOperation_FUN_005e1ca0(SSocketContext * socket_ctx, char * buffer, int length, SNetworkAddr * dest_addr)
// Cross-references:
//   core_netgame.cpp_CNetGame_FUN_00541230 (00541230) at 0054124d [UNCONDITIONAL_CALL]
// Function calls:
//   crt_wsock32.c_send
//   crt_wsock32.c_sendto
//   support_trisock.cpp_buildSockaddrIn_FUN_005e19d0

#include "nocturne.h"

int __cdecl
support_trisock_cpp_performSocketOperation_FUN_005e1ca0
          (SSocketContext *socket_ctx,char *buffer,int length,SNetworkAddr *dest_addr)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  byte bVar2;
  uint auStackY_1804 [1521];
  uint uStack_28;
  uint local_1c;
  
  bVar2 = 0;
  if (dest_addr == (SNetworkAddr *)0x0) {
    iVar1 = crt_wsock32_c_send(socket_ctx->socket,buffer,length,0);
    return iVar1;
  }
  support_trisock_cpp_buildSockaddrIn_FUN_005e19d0(dest_addr,(SOCKADDR_IN *)&stack0xffffffd4);
  local_1c = uStack_28;
  *(undefined4 *)(&stack0xffffffe8 + (uint)bVar2 * -8) =
       *(undefined4 *)(&stack0xffffffdc + (uint)bVar2 * -8);
  *(undefined4 *)(&stack0xffffffec + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(undefined4 *)(&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  *(undefined4 *)
   ((int)(&stack0xffffffec + (uint)bVar2 * -8 + (uint)bVar2 * -8) + ((uint)bVar2 * -2 + 1) * 4) =
       *(undefined4 *)
        ((int)(&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) + ((uint)bVar2 * -2 + 1) * 4)
  ;
  iVar1 = crt_wsock32_c_sendto
                    (*(SOCKET *)buffer,(char *)length,(int)dest_addr,0,(SOCKADDR *)&stack0xffffffe8,
                     0x10);
  return iVar1;
}


// Assembly code:
// 005e1ca0: PUSH ESI
//   Label: support_trisock.cpp_performSocketOperation_FUN_005e1ca0
// 005e1ca1: PUSH EDI
// 005e1ca2: PUSH EBP
// 005e1ca3: SUB ESP,0x20
// 005e1ca6: MOV ESI,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x10] (READ)
// 005e1caa: TEST ESI,ESI
// 005e1cac: JNZ 0x005e1cd5
//   XREF to: 005e1cd5 (CONDITIONAL_JUMP)
// 005e1cae: PUSH EBX
// 005e1caf: PUSH ESI
// 005e1cb0: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0xc] (READ)
// 005e1cb4: PUSH EDX
// 005e1cb5: MOV ECX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x8] (READ)
// 005e1cb9: MOV ESI,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x4] (READ)
// 005e1cbd: PUSH ECX
// 005e1cbe: MOV EBX,dword ptr [ESI]
// 005e1cc0: PUSH EBX
// 005e1cc1: CALL crt_wsock32.c_send
//   XREF to: 00610f0a (UNCONDITIONAL_CALL)
// 005e1cc6: MOV ESI,EAX
// 005e1cc8: POP EBX
// 005e1cc9: CMP ESI,-0x1
// 005e1ccc: MOV EAX,ESI
// 005e1cce: ADD ESP,0x20
// 005e1cd1: POP EBP
// 005e1cd2: POP EDI
// 005e1cd3: POP ESI
// 005e1cd4: RET
// 005e1cd5: PUSH ESI
//   Label: LAB_005e1cd5
// 005e1cd6: LEA ESI,[ESP + 0x4]
//   XREF to: Stack[-0x2c] (DATA)
// 005e1cda: LEA EDI,[ESP + 0x14]
//   XREF to: Stack[-0x1c] (DATA)
// 005e1cde: CALL support_trisock.cpp_buildSockaddrIn_FUN_005e19d0
//   XREF to: 005e19d0 (UNCONDITIONAL_CALL)
// 005e1ce3: LEA ESI,[ESP + 0x4]
//   XREF to: Stack[-0x2c] (DATA)
// 005e1ce7: ADD ESP,0x4
// 005e1cea: MOVSD ES:EDI,ESI
// 005e1ceb: MOVSD ES:EDI,ESI
// 005e1cec: MOVSD ES:EDI,ESI
// 005e1ced: MOVSD ES:EDI,ESI
// 005e1cee: PUSH 0x10
// 005e1cf0: LEA ESI,[ESP + 0x14]
//   XREF to: Stack[-0x1c] (DATA)
// 005e1cf4: PUSH ESI
// 005e1cf5: PUSH 0x0
// 005e1cf7: MOV ESI,dword ptr [ESP + 0x44]
//   XREF to: Stack[0xc] (READ)
// 005e1cfb: PUSH ESI
// 005e1cfc: MOV EDI,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x8] (READ)
// 005e1d00: MOV ESI,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 005e1d04: PUSH EDI
// 005e1d05: MOV EBP,dword ptr [ESI]
// 005e1d07: PUSH EBP
// 005e1d08: CALL crt_wsock32.c_sendto
//   XREF to: 00610f04 (UNCONDITIONAL_CALL)
// 005e1d0d: MOV ESI,EAX
// 005e1d0f: CMP ESI,-0x1
// 005e1d12: MOV EAX,ESI
// 005e1d14: ADD ESP,0x20
// 005e1d17: POP EBP
// 005e1d18: POP EDI
// 005e1d19: POP ESI
// 005e1d1a: RET
