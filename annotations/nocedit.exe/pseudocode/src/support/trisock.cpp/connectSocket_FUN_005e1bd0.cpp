// Name: support_trisock.cpp_connectSocket_FUN_005e1bd0
// Address: 005e1bd0
// Address Range: [[005e1bd0, 005e1c12]]
// Convention: __cdecl
// Signature: int support_trisock.cpp_connectSocket_FUN_005e1bd0(SOCKET * socket_handle, SNetworkAddr * dest_addr)
// Function calls:
//   crt_wsock32.c_connect
//   support_trisock.cpp_buildSockaddrIn_FUN_005e19d0

#include "nocturne.h"

int __cdecl
support_trisock_cpp_connectSocket_FUN_005e1bd0(SOCKET *socket_handle,SNetworkAddr *dest_addr)

{
  BADSPACEBASE *in_ESP;
  byte bVar1;
  undefined4 auStackY_1800 [1524];
  SOCKADDR *name;
  int iVar2;
  undefined1 auStack_24 [20];
  undefined4 auStack_10 [2];
  
  bVar1 = 0;
  support_trisock_cpp_buildSockaddrIn_FUN_005e19d0(dest_addr,(SOCKADDR_IN *)(auStack_24 + 0xc));
  name = (SOCKADDR *)auStack_24;
  iVar2 = 0x10;
  auStack_24._0_4_ = auStack_24._16_4_;
  *(undefined4 *)(auStack_24 + (uint)bVar1 * -8 + 4) = auStack_10[(uint)bVar1 * -2];
  *(undefined4 *)(auStack_24 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       auStack_10[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  *(undefined4 *)
   ((int)(auStack_24 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) + ((uint)bVar1 * -2 + 1) * 4) =
       (auStack_10 + (uint)bVar1 * -2 + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1];
  iVar2 = crt_wsock32_c_connect(dest_addr->ip_address,name,iVar2);
  return (uint)(iVar2 == 0);
}


// Assembly code:
// 005e1bd0: PUSH ESI
//   Label: support_trisock.cpp_connectSocket_FUN_005e1bd0
// 005e1bd1: PUSH EDI
// 005e1bd2: SUB ESP,0x20
// 005e1bd5: MOV EDX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x8] (READ)
// 005e1bd9: PUSH EDX
// 005e1bda: LEA ESI,[ESP + 0x14]
//   XREF to: Stack[-0x18] (DATA)
// 005e1bde: CALL support_trisock.cpp_buildSockaddrIn_FUN_005e19d0
//   XREF to: 005e19d0 (UNCONDITIONAL_CALL)
// 005e1be3: ADD ESP,0x4
// 005e1be6: MOV EDI,ESP
// 005e1be8: PUSH 0x10
// 005e1bea: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x28] (DATA)
// 005e1bee: LEA ESI,[ESP + 0x14]
//   XREF to: Stack[-0x18] (DATA)
// 005e1bf2: PUSH EAX
// 005e1bf3: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 005e1bf7: MOVSD ES:EDI,ESI
// 005e1bf8: MOVSD ES:EDI,ESI
// 005e1bf9: MOVSD ES:EDI,ESI
// 005e1bfa: MOVSD ES:EDI,ESI
// 005e1bfb: MOV ECX,dword ptr [EAX]
// 005e1bfd: PUSH ECX
// 005e1bfe: CALL crt_wsock32.c_connect
//   XREF to: 00610f1c (UNCONDITIONAL_CALL)
// 005e1c03: TEST EAX,EAX
// 005e1c05: SETZ AL
// 005e1c08: AND EAX,0xff
// 005e1c0d: ADD ESP,0x20
// 005e1c10: POP EDI
// 005e1c11: POP ESI
// 005e1c12: RET
