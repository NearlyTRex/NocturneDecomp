// Name: core_netgame.cpp_staticInit_FUN_0053f310
// Address: 0053f310
// Address Range: [[0053f310, 0053f354]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_staticInit_FUN_0053f310()
// Globals:
//   WatcomTypeInfo g_SChatHistoryTypeInfo
//   WatcomStaticDestructorNode DAT_006809f0
//   undefined4 DAT_02f7c740
//   SChatHistory[400] g_ChatHistory
//   int g_NetworkPacketSize
//   char[1028] g_NetworkReceiveBuffer
// Function calls:
//   core_netgame.cpp_CNetGame_ctor_FUN_0053f6d0
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   crt_stdlib.c_atexit_FUN_005ff060

#include "nocturne.h"

void core_netgame_cpp_staticInit_FUN_0053f310(void)

{
  core_netgame_cpp_CNetGame_ctor_FUN_0053f6d0((CNetGame *)&DAT_02f7c740);
  crt_stdlib_c_atexit_FUN_005ff060(&DAT_006809f0);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_ChatHistory,400,&g_SChatHistoryTypeInfo);
  g_NetworkPacketSize = 0x405;
  g_NetworkReceiveBuffer[0] = '\0';
  return;
}


// Assembly code:
// 0053f310: PUSH 0x2f7c740
//   Label: core_netgame.cpp_staticInit_FUN_0053f310
//   XREF to: 02f7c740 (DATA)
// 0053f315: CALL core_netgame.cpp_CNetGame_ctor_FUN_0053f6d0
//   XREF to: 0053f6d0 (UNCONDITIONAL_CALL)
// 0053f31a: ADD ESP,0x4
// 0053f31d: PUSH 0x6809f0
//   XREF to: 006809f0 (DATA)
// 0053f322: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 0053f327: ADD ESP,0x4
// 0053f32a: PUSH 0x661cc0
//   XREF to: 00661cc0 (DATA)
// 0053f32f: PUSH 0x190
// 0053f334: PUSH 0x2f7c8d0
//   XREF to: 02f7c8d0 (DATA)
// 0053f339: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 0053f33e: MOV EDX,0x405
// 0053f343: ADD ESP,0xc
// 0053f346: XOR AH,AH
// 0053f348: MOV dword ptr [0x02fa88c8],EDX
//   XREF to: 02fa88c8 (WRITE)
// 0053f34e: MOV byte ptr [0x02fa88cc],AH
//   XREF to: 02fa88cc (WRITE)
// 0053f354: RET
