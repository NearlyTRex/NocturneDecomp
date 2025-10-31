// Name: support_trisock.cpp_buildSockaddrIn_FUN_005e19d0
// Address: 005e19d0
// Address Range: [[005e19d0, 005e1a26]]
// Convention: __cdecl
// Signature: SOCKADDR_IN * support_trisock.cpp_buildSockaddrIn_FUN_005e19d0(SNetworkAddr * net_addr, SOCKADDR_IN * dest_buffer)
// Cross-references:
//   support_trisock.cpp_connectSocket_FUN_005e1bd0 (005e1bd0) at 005e1bde [UNCONDITIONAL_CALL]
//   support_trisock.cpp_performSocketOperation_FUN_005e1ca0 (005e1ca0) at 005e1cde [UNCONDITIONAL_CALL]
// Function calls:
//   crt_memory.c_memset_FUN_005fde40
//   crt_wsock32.c_htons
//   support_trisock.cpp_getIPAddress_FUN_005e1930

#include "nocturne.h"

SOCKADDR_IN * __cdecl
support_trisock_cpp_buildSockaddrIn_FUN_005e19d0(SNetworkAddr *net_addr,SOCKADDR_IN *dest_buffer)

{
  BADSPACEBASE *in_ESP;
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  undefined4 auStackY_17e8 [509];
  undefined4 auStackY_ff4 [1014];
  undefined4 uStack_c;
  
  bVar3 = 0;
  crt_wsock32_c_htons(net_addr->port);
  support_trisock_cpp_getIPAddress_FUN_005e1930(net_addr);
  crt_memory_c_memset_FUN_005fde40(&stack0xfffffffc,0,8);
  puVar1 = (undefined4 *)((int)dest_buffer + (uint)bVar3 * -8 + 4);
  dest_buffer->sin_family = (undefined2)uStack_c;
  dest_buffer->sin_port = uStack_c._2_2_;
  puVar2 = puVar1 + (uint)bVar3 * -2 + 1;
  *puVar1 = *(undefined4 *)(&stack0xfffffff8 + (uint)bVar3 * -8);
  *puVar2 = *(undefined4 *)(&stack0xfffffffc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  puVar2[(uint)bVar3 * -2 + 1] =
       *(undefined4 *)
        ((int)(&stack0xfffffffc + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4)
  ;
  return dest_buffer;
}


// Assembly code:
// 005e19d0: PUSH EBX
//   Label: support_trisock.cpp_buildSockaddrIn_FUN_005e19d0
// 005e19d1: PUSH EDI
// 005e19d2: SUB ESP,0x10
// 005e19d5: MOV EBX,ESI
// 005e19d7: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 005e19db: MOV EDX,0x2
// 005e19e0: XOR EAX,EAX
// 005e19e2: MOV word ptr [ESP],DX
//   XREF to: Stack[-0x18] (DATA)
// 005e19e6: MOV AX,word ptr [ESI + 0x4]
// 005e19ea: PUSH EAX
// 005e19eb: CALL crt_wsock32.c_htons
//   XREF to: 00610f2e (UNCONDITIONAL_CALL)
// 005e19f0: PUSH ESI
// 005e19f1: MOV word ptr [ESP + 0x6],AX
// 005e19f6: CALL support_trisock.cpp_getIPAddress_FUN_005e1930
//   XREF to: 005e1930 (UNCONDITIONAL_CALL)
// 005e19fb: ADD ESP,0x4
// 005e19fe: PUSH 0x8
// 005e1a00: LEA EDX,[ESP + 0x4]
// 005e1a04: PUSH 0x0
// 005e1a06: MOV dword ptr [EDX + 0x4],EAX
// 005e1a09: LEA EAX,[EDX + 0x8]
// 005e1a0c: PUSH EAX
// 005e1a0d: MOV EDI,EBX
// 005e1a0f: LEA ESI,[ESP + 0xc]
// 005e1a13: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005e1a18: ADD ESP,0xc
// 005e1a1b: MOVSD ES:EDI,ESI
// 005e1a1c: MOVSD ES:EDI,ESI
// 005e1a1d: MOVSD ES:EDI,ESI
// 005e1a1e: MOVSD ES:EDI,ESI
// 005e1a1f: MOV EAX,EBX
// 005e1a21: ADD ESP,0x10
// 005e1a24: POP EDI
// 005e1a25: POP EBX
// 005e1a26: RET
