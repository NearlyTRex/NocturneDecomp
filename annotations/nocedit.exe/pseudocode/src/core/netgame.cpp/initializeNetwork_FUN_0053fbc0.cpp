// Name: core_netgame.cpp_initializeNetwork_FUN_0053fbc0
// Address: 0053fbc0
// Address Range: [[0053fbc0, 0053fcfa]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_initializeNetwork_FUN_0053fbc0()
// Cross-references:
//   core_netgame.cpp_initializeNetworkToHost_FUN_0053f860 (0053f860) at 0053f8d4 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_initializeNetworkToJoin_FUN_0053f900 (0053f900) at 0053f960 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Initializing_network_0063d3f5
//   TerminatedCString s_Can_t_create_datagram_so_0063d40d
//   TerminatedCString s_Can_t_turn_off_blocking__0063d42a
//   TerminatedCString s_Can_t_bind_UDP_socket_0063d452
//   TerminatedCString s_Can_t_querry_back_for_so_0063d468
//   TerminatedCString s_Initializing_network_OK_0063d48d
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
//   int g_LastPingTime
//   uint g_CurrentGameTime
// Function calls:
//   core_netgame.cpp_FUN_00540550
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   support_trisock.cpp_bindAndInvalidateSocket_FUN_005e1d20
//   support_trisock.cpp_bindSocket_FUN_005e1b80
//   support_trisock.cpp_createUDPSocket_FUN_005e1b40
//   support_trisock.cpp_getSocketName_FUN_005e1df0
//   support_trisock.cpp_setSocketBlocking_FUN_005e1e50
//   wincore_winrun.cpp_getTime_FUN_005f2dc0

#include "nocturne.h"

undefined4 core_netgame_cpp_initializeNetwork_FUN_0053fbc0(void)

{
  SSocketContext *socket_ctx;
  int iVar1;
  int in_stack_00000004;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Initializing network...");
  socket_ctx = (SSocketContext *)(in_stack_00000004 + 0x170);
  support_trisock_cpp_bindAndInvalidateSocket_FUN_005e1d20(socket_ctx);
  iVar1 = support_trisock_cpp_createUDPSocket_FUN_005e1b40(socket_ctx);
  if (iVar1 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't create datagram socket");
    return 0;
  }
  iVar1 = support_trisock_cpp_setSocketBlocking_FUN_005e1e50((SOCKET *)socket_ctx,0);
  if (iVar1 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't turn off blocking mode for socket");
    return 0;
  }
  iVar1 = support_trisock_cpp_bindSocket_FUN_005e1b80((uint16_t)socket_ctx,(SOCKET *)0x1ddf);
  if (iVar1 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't bind UDP socket");
    return 0;
  }
  iVar1 = support_trisock_cpp_getSocketName_FUN_005e1df0
                    ((SOCKET *)socket_ctx,
                     (SNetworkAddr *)
                     (*(int *)(in_stack_00000004 + 0x114) * 0x78 + in_stack_00000004 + 0x3c));
  if (iVar1 != 0) {
    core_netgame_cpp_FUN_00540550();
    g_CurrentGameTime = 1;
    iVar1 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    g_LastPingTime = iVar1 / 0x12;
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Initializing network...OK");
    return 1;
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
            (g_CEditorToolsPtr,"Can't querry back for socket address");
  return 0;
}


// Assembly code:
// 0053fbc0: PUSH EBX
//   Label: core_netgame.cpp_initializeNetwork_FUN_0053fbc0
// 0053fbc1: PUSH ESI
// 0053fbc2: PUSH EBP
// 0053fbc3: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0053fbc7: PUSH 0x63d3f5
//   XREF to: 0063d3f5 (DATA)
// 0053fbcc: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0053fbd2: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0053fbd3: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 0053fbd8: ADD ESP,0x8
// 0053fbdb: LEA EBX,[ESI + 0x170]
// 0053fbe1: PUSH EBX
// 0053fbe2: CALL support_trisock.cpp_bindAndInvalidateSocket_FUN_005e1d20
//   XREF to: 005e1d20 (UNCONDITIONAL_CALL)
// 0053fbe7: ADD ESP,0x4
// 0053fbea: PUSH EBX
// 0053fbeb: CALL support_trisock.cpp_createUDPSocket_FUN_005e1b40
//   XREF to: 005e1b40 (UNCONDITIONAL_CALL)
// 0053fbf0: ADD ESP,0x4
// 0053fbf3: TEST EAX,EAX
// 0053fbf5: JZ 0x0053fc91
//   XREF to: 0053fc91 (CONDITIONAL_JUMP)
// 0053fbfb: PUSH 0x0
// 0053fbfd: PUSH EBX
// 0053fbfe: CALL support_trisock.cpp_setSocketBlocking_FUN_005e1e50
//   XREF to: 005e1e50 (UNCONDITIONAL_CALL)
// 0053fc03: ADD ESP,0x8
// 0053fc06: TEST EAX,EAX
// 0053fc08: JZ 0x0053fcab
//   XREF to: 0053fcab (CONDITIONAL_JUMP)
// 0053fc0e: PUSH 0x1ddf
// 0053fc13: PUSH EBX
// 0053fc14: CALL support_trisock.cpp_bindSocket_FUN_005e1b80
//   XREF to: 005e1b80 (UNCONDITIONAL_CALL)
// 0053fc19: ADD ESP,0x8
// 0053fc1c: TEST EAX,EAX
// 0053fc1e: JZ 0x0053fcc5
//   XREF to: 0053fcc5 (CONDITIONAL_JUMP)
// 0053fc24: MOV EAX,dword ptr [ESI + 0x114]
// 0053fc2a: SHL EAX,0x3
// 0053fc2d: MOV EDX,EAX
// 0053fc2f: SHL EAX,0x4
// 0053fc32: SUB EAX,EDX
// 0053fc34: LEA EDX,[ESI + 0x20]
// 0053fc37: ADD EAX,EDX
// 0053fc39: ADD EAX,0x1c
// 0053fc3c: PUSH EAX
// 0053fc3d: PUSH EBX
// 0053fc3e: CALL support_trisock.cpp_getSocketName_FUN_005e1df0
//   XREF to: 005e1df0 (UNCONDITIONAL_CALL)
// 0053fc43: ADD ESP,0x8
// 0053fc46: TEST EAX,EAX
// 0053fc48: JZ 0x0053fcdf
//   XREF to: 0053fcdf (CONDITIONAL_JUMP)
// 0053fc4e: PUSH ESI
// 0053fc4f: MOV EBP,0x1
// 0053fc54: CALL core_netgame.cpp_FUN_00540550
//   XREF to: 00540550 (UNCONDITIONAL_CALL)
// 0053fc59: ADD ESP,0x4
// 0053fc5c: MOV dword ptr [0x02f7c8b8],EBP
//   XREF to: 02f7c8b8 (WRITE)
// 0053fc62: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 0053fc67: MOV EDX,EAX
// 0053fc69: MOV EBX,0x12
// 0053fc6e: SAR EDX,0x1f
// 0053fc71: IDIV EBX
// 0053fc73: PUSH 0x63d48d
//   XREF to: 0063d48d (DATA)
// 0053fc78: MOV [0x02f7c8b4],EAX
//   XREF to: 02f7c8b4 (WRITE)
// 0053fc7d: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 0053fc82: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 0053fc83: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 0053fc88: ADD ESP,0x8
// 0053fc8b: MOV EAX,EBP
// 0053fc8d: POP EBP
// 0053fc8e: POP ESI
// 0053fc8f: POP EBX
// 0053fc90: RET
// 0053fc91: PUSH 0x63d40d
//   Label: LAB_0053fc91
//   XREF to: 0063d40d (DATA)
// 0053fc96: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0053fc9c: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0053fc9d: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0053fca2: ADD ESP,0x8
// 0053fca5: XOR EAX,EAX
// 0053fca7: POP EBP
// 0053fca8: POP ESI
// 0053fca9: POP EBX
// 0053fcaa: RET
// 0053fcab: PUSH 0x63d42a
//   Label: LAB_0053fcab
//   XREF to: 0063d42a (DATA)
// 0053fcb0: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0053fcb6: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 0053fcb7: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0053fcbc: ADD ESP,0x8
// 0053fcbf: XOR EAX,EAX
// 0053fcc1: POP EBP
// 0053fcc2: POP ESI
// 0053fcc3: POP EBX
// 0053fcc4: RET
// 0053fcc5: PUSH 0x63d452
//   Label: LAB_0053fcc5
//   XREF to: 0063d452 (DATA)
// 0053fcca: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0053fcd0: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 0053fcd1: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0053fcd6: ADD ESP,0x8
// 0053fcd9: XOR EAX,EAX
// 0053fcdb: POP EBP
// 0053fcdc: POP ESI
// 0053fcdd: POP EBX
// 0053fcde: RET
// 0053fcdf: PUSH EDI
//   Label: LAB_0053fcdf
// 0053fce0: PUSH 0x63d468
//   XREF to: 0063d468 (DATA)
// 0053fce5: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0053fceb: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 0053fcec: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0053fcf1: ADD ESP,0x8
// 0053fcf4: XOR EAX,EAX
// 0053fcf6: POP EDI
// 0053fcf7: POP EBP
// 0053fcf8: POP ESI
// 0053fcf9: POP EBX
// 0053fcfa: RET
