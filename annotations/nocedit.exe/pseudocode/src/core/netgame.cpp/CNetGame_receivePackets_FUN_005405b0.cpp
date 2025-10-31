// Name: core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0
// Address: 005405b0
// Address Range: [[005405b0, 00540652]]
// Convention: __cdecl
// Signature: void core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0(CNetGame * this_ptr)
// Cross-references:
//   core_netgame.cpp_CNetGame_FUN_0053fd00 (0053fd00) at 0053ff6a [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_processClientFrame_FUN_005435a0 (005435a0) at 005435f2 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_processServerFrame_FUN_00543150 (00543150) at 00543221 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_syncPlayers_FUN_005401e0 (005401e0) at 00540372 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_FUN_00541390 (00541390) at 0054183e [UNCONDITIONAL_CALL]
//   core_netgame.cpp_initializeNetworkToJoin_FUN_0053f900 (0053f900) at 0053fac0 [UNCONDITIONAL_CALL]
// Globals:
//   int g_LastPingTime
//   uint g_CurrentGameTime
//   int g_NetworkPacketSize
//   char[1028] g_NetworkReceiveBuffer
// Function calls:
//   core_netgame.cpp_CNetGame_allocSimFrame_FUN_005406a0
//   core_netgame.cpp_CNetGame_removeChatOut_FUN_00541ff0
//   support_trisock.cpp_isSocketValid_FUN_005e1b70
//   support_trisock.cpp_receiveSocketData_FUN_005e1c20
//   wincore_winrun.cpp_getTime_FUN_005f2dc0

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_receivePackets_FUN_005405b0(CNetGame *this_ptr)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  
  iVar1 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  iVar2 = iVar1 / 0x12 - g_LastPingTime;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0x20000 < iVar2) {
    iVar2 = 0x20000;
  }
  g_CurrentGameTime = g_CurrentGameTime + iVar2;
  g_LastPingTime = iVar1 / 0x12;
  while( true ) {
    iVar1 = support_trisock_cpp_isSocketValid_FUN_005e1b70
                      ((SSocketContext *)(this_ptr->field7_0x118 + 0x58));
    if (iVar1 == 0) {
      return;
    }
    iVar1 = support_trisock_cpp_receiveSocketData_FUN_005e1c20
                      ((SSocketContext *)(this_ptr->field7_0x118 + 0x58),g_NetworkReceiveBuffer,
                       0x404,(SNetworkAddr *)&stack0xfffffff8);
    if (iVar1 < 1) break;
    g_NetworkPacketSize = iVar1 + 1;
    core_netgame_cpp_CNetGame_allocSimFrame_FUN_005406a0
              (this_ptr,(SNetworkAddr *)&stack0xfffffffc,(char *)&g_NetworkPacketSize);
  }
  core_netgame_cpp_CNetGame_removeChatOut_FUN_00541ff0();
  return;
}


// Assembly code:
// 005405b0: PUSH EBX
//   Label: core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0
// 005405b1: PUSH ESI
// 005405b2: SUB ESP,0x8
// 005405b5: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005405b9: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 005405be: MOV EDX,EAX
// 005405c0: MOV EBX,0x12
// 005405c5: SAR EDX,0x1f
// 005405c8: IDIV EBX
// 005405ca: MOV ECX,dword ptr [0x02f7c8b4]
//   XREF to: 02f7c8b4 (READ)
// 005405d0: MOV EDX,EAX
// 005405d2: SUB EAX,ECX
// 005405d4: MOV dword ptr [0x02f7c8b4],EDX
//   XREF to: 02f7c8b4 (WRITE)
// 005405da: TEST EAX,EAX
// 005405dc: JL 0x00540604
//   XREF to: 00540604 (CONDITIONAL_JUMP)
// 005405de: CMP EAX,0x20000
// 005405e3: JG 0x00540608
//   XREF to: 00540608 (CONDITIONAL_JUMP)
// 005405e5: ADD dword ptr [0x02f7c8b8],EAX
//   Label: LAB_005405e5
//   XREF to: 02f7c8b8 (READ_WRITE)
// 005405eb: LEA EBX,[ESI + 0x170]
// 005405f1: PUSH EBX
//   Label: LAB_005405f1
// 005405f2: CALL support_trisock.cpp_isSocketValid_FUN_005e1b70
//   XREF to: 005e1b70 (UNCONDITIONAL_CALL)
// 005405f7: ADD ESP,0x4
// 005405fa: TEST EAX,EAX
// 005405fc: JNZ 0x0054060f
//   XREF to: 0054060f (CONDITIONAL_JUMP)
// 005405fe: ADD ESP,0x8
// 00540601: POP ESI
// 00540602: POP EBX
// 00540603: RET
// 00540604: XOR EAX,EAX
//   Label: LAB_00540604
// 00540606: JMP 0x005405e5
//   XREF to: 005405e5 (UNCONDITIONAL_JUMP)
// 00540608: MOV EAX,0x20000
//   Label: LAB_00540608
// 0054060d: JMP 0x005405e5
//   XREF to: 005405e5 (UNCONDITIONAL_JUMP)
// 0054060f: MOV EAX,ESP
//   Label: LAB_0054060f
// 00540611: PUSH EAX
// 00540612: PUSH 0x404
// 00540617: PUSH 0x2fa88cc
//   XREF to: 02fa88cc (DATA)
// 0054061c: PUSH EBX
// 0054061d: CALL support_trisock.cpp_receiveSocketData_FUN_005e1c20
//   XREF to: 005e1c20 (UNCONDITIONAL_CALL)
// 00540622: ADD ESP,0x10
// 00540625: TEST EAX,EAX
// 00540627: JLE 0x00540644
//   XREF to: 00540644 (CONDITIONAL_JUMP)
// 00540629: INC EAX
// 0054062a: PUSH 0x2fa88c8
//   XREF to: 02fa88c8 (DATA)
// 0054062f: MOV [0x02fa88c8],EAX
//   XREF to: 02fa88c8 (WRITE)
// 00540634: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x10] (DATA)
// 00540638: PUSH EAX
// 00540639: PUSH ESI
// 0054063a: CALL core_netgame.cpp_CNetGame_allocSimFrame_FUN_005406a0
//   XREF to: 005406a0 (UNCONDITIONAL_CALL)
// 0054063f: ADD ESP,0xc
// 00540642: JMP 0x005405f1
//   XREF to: 005405f1 (UNCONDITIONAL_JUMP)
// 00540644: PUSH ESI
//   Label: LAB_00540644
// 00540645: CALL core_netgame.cpp_CNetGame_removeChatOut_FUN_00541ff0
//   XREF to: 00541ff0 (UNCONDITIONAL_CALL)
// 0054064a: ADD ESP,0x4
// 0054064d: ADD ESP,0x8
// 00540650: POP ESI
// 00540651: POP EBX
// 00540652: RET
