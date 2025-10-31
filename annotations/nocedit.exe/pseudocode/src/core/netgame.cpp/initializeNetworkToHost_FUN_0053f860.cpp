// Name: core_netgame.cpp_initializeNetworkToHost_FUN_0053f860
// Address: 0053f860
// Address Range: [[0053f860, 0053f8fd]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_initializeNetworkToHost_FUN_0053f860()
// Cross-references:
//   core_game.cpp_FUN_004e2f10 (004e2f10) at 004e2f1a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Initializing_network_to__0063d30c
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CGame* g_CGamePtr = 02d81a9c
//   CEditorTools g_CEditorToolsPtr
//   undefined4 g_CGameInstance.hero_number
//   undefined4 DAT_02d81b60
//   uchar[4] g_AnyAddressIP
// Function calls:
//   core_netgame.cpp_CNetGame_addPlayer_FUN_005412b0
//   core_netgame.cpp_CNetGame_FUN_0053fd00
//   core_netgame.cpp_initializeNetwork_FUN_0053fbc0
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   support_trisock.cpp_createNetworkAddr_FUN_005e1940

#include "nocturne.h"

undefined4 core_netgame_cpp_initializeNetworkToHost_FUN_0053f860(void)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  CNetGame *in_stack_00000004;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Initializing network to host game");
  core_netgame_cpp_CNetGame_FUN_0053fd00(in_stack_00000004);
  in_stack_00000004->player_count = 0;
  support_trisock_cpp_createNetworkAddr_FUN_005e1940
            ((SNetworkAddr *)&stack0xfffffff8,(uint32_t *)g_AnyAddressIP,0x1ddf);
  iVar1 = core_netgame_cpp_CNetGame_addPlayer_FUN_005412b0();
  in_stack_00000004->local_player_index = iVar1;
  *(int *)in_stack_00000004->padding = iVar1;
  iVar1 = core_netgame_cpp_initializeNetwork_FUN_0053fbc0();
  if (iVar1 == 0) {
    return 0;
  }
  in_stack_00000004->network_mode = 1;
  in_stack_00000004->connection_type = 1;
  return 1;
}


// Assembly code:
// 0053f860: PUSH EBX
//   Label: core_netgame.cpp_initializeNetworkToHost_FUN_0053f860
// 0053f861: PUSH ESI
// 0053f862: SUB ESP,0x8
// 0053f865: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0053f869: PUSH 0x63d30c
//   XREF to: 0063d30c (DATA)
// 0053f86e: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0053f874: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0053f875: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 0053f87a: ADD ESP,0x8
// 0053f87d: PUSH 0x0
// 0053f87f: PUSH EBX
// 0053f880: CALL core_netgame.cpp_CNetGame_FUN_0053fd00
//   XREF to: 0053fd00 (UNCONDITIONAL_CALL)
// 0053f885: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 0053f88a: MOV dword ptr [EBX + 0x1c],0x0
// 0053f891: ADD ESP,0x8
// 0053f894: MOV ECX,dword ptr [EAX + 0xc4]
//   XREF to: 02d81b60 (READ)
// 0053f89a: PUSH ECX
// 0053f89b: MOV ESI,dword ptr [EAX + 0xc0]
//   XREF to: 02d81b5c (READ)
// 0053f8a1: PUSH ESI
// 0053f8a2: LEA EAX,[EBX + 0x8]
// 0053f8a5: PUSH EAX
// 0053f8a6: PUSH 0x1ddf
// 0053f8ab: PUSH 0x3f87498
//   XREF to: 03f87498 (DATA)
// 0053f8b0: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x10] (DATA)
// 0053f8b4: PUSH EAX
// 0053f8b5: CALL support_trisock.cpp_createNetworkAddr_FUN_005e1940
//   XREF to: 005e1940 (UNCONDITIONAL_CALL)
// 0053f8ba: ADD ESP,0xc
// 0053f8bd: PUSH EAX
// 0053f8be: PUSH EBX
// 0053f8bf: CALL core_netgame.cpp_CNetGame_addPlayer_FUN_005412b0
//   XREF to: 005412b0 (UNCONDITIONAL_CALL)
// 0053f8c4: ADD ESP,0x14
// 0053f8c7: MOV dword ptr [EBX + 0x114],EAX
// 0053f8cd: PUSH EBX
// 0053f8ce: MOV dword ptr [EBX + 0x110],EAX
// 0053f8d4: CALL core_netgame.cpp_initializeNetwork_FUN_0053fbc0
//   XREF to: 0053fbc0 (UNCONDITIONAL_CALL)
// 0053f8d9: ADD ESP,0x4
// 0053f8dc: TEST EAX,EAX
// 0053f8de: JNZ 0x0053f8e6
//   XREF to: 0053f8e6 (CONDITIONAL_JUMP)
// 0053f8e0: ADD ESP,0x8
// 0053f8e3: POP ESI
// 0053f8e4: POP EBX
// 0053f8e5: RET
// 0053f8e6: MOV dword ptr [EBX + 0x4],0x1
//   Label: LAB_0053f8e6
// 0053f8ed: MOV EAX,0x1
// 0053f8f2: MOV dword ptr [EBX],0x1
// 0053f8f8: ADD ESP,0x8
// 0053f8fb: POP ESI
// 0053f8fc: POP EBX
// 0053f8fd: RET
