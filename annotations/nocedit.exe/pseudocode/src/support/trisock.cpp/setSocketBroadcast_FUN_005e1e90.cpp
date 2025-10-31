// Name: support_trisock.cpp_setSocketBroadcast_FUN_005e1e90
// Address: 005e1e90
// Address Range: [[005e1e90, 005e1eb4]]
// Convention: __cdecl
// Signature: int support_trisock.cpp_setSocketBroadcast_FUN_005e1e90(SOCKET * socket_handle, int broadcast_flag)
// Function calls:
//   crt_wsock32.c_setsockopt

#include "nocturne.h"

int __cdecl
support_trisock_cpp_setSocketBroadcast_FUN_005e1e90(SOCKET *socket_handle,int broadcast_flag)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  
  iVar1 = crt_wsock32_c_setsockopt(*socket_handle,0xffff,0x20,(char *)&broadcast_flag,4);
  return (uint)(iVar1 == 0);
}


// Assembly code:
// 005e1e90: PUSH 0x4
//   Label: support_trisock.cpp_setSocketBroadcast_FUN_005e1e90
// 005e1e92: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[0x8] (DATA)
// 005e1e96: PUSH EAX
// 005e1e97: PUSH 0x20
// 005e1e99: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005e1e9d: PUSH 0xffff
// 005e1ea2: MOV EDX,dword ptr [EAX]
// 005e1ea4: PUSH EDX
// 005e1ea5: CALL crt_wsock32.c_setsockopt
//   XREF to: 00610ee0 (UNCONDITIONAL_CALL)
// 005e1eaa: TEST EAX,EAX
// 005e1eac: SETZ AL
// 005e1eaf: AND EAX,0xff
// 005e1eb4: RET
