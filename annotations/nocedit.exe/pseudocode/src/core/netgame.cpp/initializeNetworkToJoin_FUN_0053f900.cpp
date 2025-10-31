// Name: core_netgame.cpp_initializeNetworkToJoin_FUN_0053f900
// Address: 0053f900
// Address Range: [[0053f900, 0053fbb5]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_initializeNetworkToJoin_FUN_0053f900()
// Cross-references:
//   core_game.cpp_FUN_004e2fc0 (004e2fc0) at 004e3016 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_TheServer_0063d32e
//   TerminatedCString s_Contacting_server_Press__0063d338
//   TerminatedCString s_Connection_refused_compu_0063d364
//   TerminatedCString s_Connection_refused_game__0063d392
//   TerminatedCString s_Connection_refused_alrea_0063d3b4
//   double DOUBLE_0063d3dd = 0.0000152587890625
//   double DOUBLE_0063d3e5 = 30
//   double DOUBLE_0063d3ed = 0.200000000000000
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CGame* g_CGamePtr = 02d81a9c
//   CKeys* g_CKeysPtr = 02dcd7d4
//   int g_ForceMessagePump = 0x1
//   CEditorTools g_CEditorToolsPtr
//   undefined4 g_CGameInstance.hero_number
//   undefined4 DAT_02d81b60
//   void* g_CKeysPtr
//   uint g_CurrentGameTime
//   undefined4 DAT_02f7c8bc
//   uchar[4] g_AnyAddressIP
// Function calls:
//   core_netgame.cpp_CNetGame_addPlayer_FUN_005412b0
//   core_netgame.cpp_CNetGame_FUN_0053fd00
//   core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0
//   core_netgame.cpp_CNetGame_send_FUN_005411c0
//   core_netgame.cpp_initializeNetwork_FUN_0053fbc0
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   support_trisock.cpp_createNetworkAddr_FUN_005e1940
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20

#include "nocturne.h"

undefined4 core_netgame_cpp_initializeNetworkToJoin_FUN_0053f900(void)

{
  char cVar1;
  CEditorTools *this_ptr;
  int iVar2;
  undefined4 uVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  byte bVar7;
  CNetGame *in_stack_00000004;
  uint32_t *in_stack_00000008;
  float fStack_44;
  undefined4 local_37;
  char acStack_33 [7];
  SNetworkAddr SStack_2c;
  undefined4 uStack_1f;
  undefined1 auStack_1b [11];
  
  bVar7 = 0;
  core_netgame_cpp_CNetGame_FUN_0053fd00(in_stack_00000004);
  in_stack_00000004->player_count = 0;
  support_trisock_cpp_createNetworkAddr_FUN_005e1940(&SStack_2c,(uint32_t *)g_AnyAddressIP,0x1ddf);
  iVar2 = core_netgame_cpp_CNetGame_addPlayer_FUN_005412b0();
  in_stack_00000004->local_player_index = iVar2;
  iVar2 = core_netgame_cpp_initializeNetwork_FUN_0053fbc0();
  if (iVar2 == 0) {
    return 0;
  }
  support_trisock_cpp_createNetworkAddr_FUN_005e1940
            ((SNetworkAddr *)(auStack_1b + 3),in_stack_00000008,0x1ddf);
  uVar3 = core_netgame_cpp_CNetGame_addPlayer_FUN_005412b0();
  uVar5 = g_CurrentGameTime;
  in_stack_00000004->connection_type = 2;
  this_ptr = g_CEditorToolsPtr;
  in_stack_00000004->network_mode = 1;
  *(undefined4 *)in_stack_00000004->padding = uVar3;
  uVar5 = uVar5 - 0x50000;
  DAT_02f7c8bc = 0;
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (this_ptr,"Contacting server.  Press ESC to give up...");
  iVar2 = *(int *)in_stack_00000004->padding;
  g_ForceMessagePump = 0;
  do {
    if (iVar2 < 0) {
      core_netgame_cpp_CNetGame_FUN_0053fd00(in_stack_00000004);
      return 0;
    }
    iVar2 = g_CurrentGameTime - uVar5;
    fStack_44 = (float)iVar2 * (float)DOUBLE_0063d3dd;
    if (fStack_44 < 0.0) {
      fStack_44 = 0.0;
    }
    if ((float)DOUBLE_0063d3e5 < fStack_44) {
      fStack_44 = 30.0;
    }
    if ((float)DOUBLE_0063d3ed < fStack_44) {
      (&local_37)[(uint)bVar7 * -2] = *(undefined4 *)(&stack0xfffffff8 + (uint)bVar7 * -8);
      uStack_1f = *(undefined4 *)
                   (in_stack_00000004->players[in_stack_00000004->local_player_index].name + 0x14);
      auStack_1b._0_4_ =
           *(undefined4 *)
            (in_stack_00000004->players[in_stack_00000004->local_player_index].name + 0x18);
      pcVar6 = acStack_33;
      pcVar4 = in_stack_00000004->network_data;
      do {
        cVar1 = *pcVar4;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      core_netgame_cpp_CNetGame_send_FUN_005411c0();
      uVar5 = g_CurrentGameTime;
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_netgame_cpp_CNetGame_receivePackets_FUN_005405b0(in_stack_00000004);
    if (DAT_02f7c8bc == 1) {
      g_ForceMessagePump = iVar2;
      return 1;
    }
    if (DAT_02f7c8bc < 3) {
      if (DAT_02f7c8bc == 2) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Connection refused - computer is not a server");
        core_netgame_cpp_CNetGame_FUN_0053fd00(in_stack_00000004);
        return 0;
      }
    }
    else {
      if (DAT_02f7c8bc < 4) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Connection refused - game is full");
        core_netgame_cpp_CNetGame_FUN_0053fd00(in_stack_00000004);
        return 0;
      }
      if (DAT_02f7c8bc == 4) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Connection refused - already in the game");
        goto LAB_0053fb81;
      }
    }
    iVar2 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,1);
    if (iVar2 != 0) {
LAB_0053fb81:
      core_netgame_cpp_CNetGame_FUN_0053fd00(in_stack_00000004);
      return 0;
    }
    iVar2 = *(int *)in_stack_00000004->padding;
  } while( true );
}


// Assembly code:
// 0053f900: PUSH EBX
//   Label: core_netgame.cpp_initializeNetworkToJoin_FUN_0053f900
// 0053f901: PUSH ESI
// 0053f902: PUSH EDI
// 0053f903: PUSH EBP
// 0053f904: MOV EBP,ESP
// 0053f906: SUB ESP,0x4c
// 0053f909: AND ESP,0xfffffff8
// 0053f90c: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0053f90f: PUSH 0x0
// 0053f911: PUSH EBX
// 0053f912: CALL core_netgame.cpp_CNetGame_FUN_0053fd00
//   XREF to: 0053fd00 (UNCONDITIONAL_CALL)
// 0053f917: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 0053f91c: MOV dword ptr [EBX + 0x1c],0x0
// 0053f923: ADD ESP,0x8
// 0053f926: MOV EDX,dword ptr [EAX + 0xc4]
//   XREF to: 02d81b60 (READ)
// 0053f92c: PUSH EDX
// 0053f92d: MOV ECX,dword ptr [EAX + 0xc0]
//   XREF to: 02d81b5c (READ)
// 0053f933: PUSH ECX
// 0053f934: LEA ESI,[EBX + 0x8]
// 0053f937: PUSH ESI
// 0053f938: PUSH 0x1ddf
// 0053f93d: PUSH 0x3f87498
//   XREF to: 03f87498 (DATA)
// 0053f942: LEA EAX,[ESP + 0x44]
//   XREF to: Stack[-0x30] (DATA)
// 0053f946: PUSH EAX
// 0053f947: CALL support_trisock.cpp_createNetworkAddr_FUN_005e1940
//   XREF to: 005e1940 (UNCONDITIONAL_CALL)
// 0053f94c: ADD ESP,0xc
// 0053f94f: PUSH EAX
// 0053f950: PUSH EBX
// 0053f951: CALL core_netgame.cpp_CNetGame_addPlayer_FUN_005412b0
//   XREF to: 005412b0 (UNCONDITIONAL_CALL)
// 0053f956: ADD ESP,0x14
// 0053f959: PUSH EBX
// 0053f95a: MOV dword ptr [EBX + 0x114],EAX
// 0053f960: CALL core_netgame.cpp_initializeNetwork_FUN_0053fbc0
//   XREF to: 0053fbc0 (UNCONDITIONAL_CALL)
// 0053f965: ADD ESP,0x4
// 0053f968: TEST EAX,EAX
// 0053f96a: JNZ 0x0053f973
//   XREF to: 0053f973 (CONDITIONAL_JUMP)
// 0053f96c: MOV ESP,EBP
// 0053f96e: POP EBP
// 0053f96f: POP EDI
// 0053f970: POP ESI
// 0053f971: POP EBX
// 0053f972: RET
// 0053f973: PUSH 0x1ddf
//   Label: LAB_0053f973
// 0053f978: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0053f97b: PUSH EDI
// 0053f97c: LEA EAX,[ESP + 0x40]
//   XREF to: Stack[-0x28] (DATA)
// 0053f980: PUSH EAX
// 0053f981: CALL support_trisock.cpp_createNetworkAddr_FUN_005e1940
//   XREF to: 005e1940 (UNCONDITIONAL_CALL)
// 0053f986: ADD ESP,0xc
// 0053f989: PUSH 0x0
// 0053f98b: PUSH 0x0
// 0053f98d: PUSH 0x63d32e
//   XREF to: 0063d32e (DATA)
// 0053f992: LEA EAX,[ESP + 0x44]
//   XREF to: Stack[-0x28] (DATA)
// 0053f996: PUSH EAX
// 0053f997: PUSH EBX
// 0053f998: CALL core_netgame.cpp_CNetGame_addPlayer_FUN_005412b0
//   XREF to: 005412b0 (UNCONDITIONAL_CALL)
// 0053f99d: MOV EDI,dword ptr [0x02f7c8b8]
//   XREF to: 02f7c8b8 (READ)
// 0053f9a3: ADD ESP,0x14
// 0053f9a6: MOV dword ptr [EBX],0x2
// 0053f9ac: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0053f9b2: MOV dword ptr [EBX + 0x4],0x1
// 0053f9b9: PUSH 0x63d338
//   XREF to: 0063d338 (DATA)
// 0053f9be: MOV dword ptr [EBX + 0x110],EAX
// 0053f9c4: XOR EAX,EAX
// 0053f9c6: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0053f9c7: SUB EDI,0x50000
// 0053f9cd: MOV [0x02f7c8bc],EAX
//   XREF to: 02f7c8bc (WRITE)
// 0053f9d2: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 0053f9d7: MOV EAX,[0x006849a8]
//   XREF to: 006849a8 (READ)
// 0053f9dc: ADD ESP,0x8
// 0053f9df: XOR ECX,ECX
// 0053f9e1: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0053f9e5: MOV EAX,dword ptr [EBX + 0x110]
// 0053f9eb: MOV dword ptr [0x006849a8],ECX
//   XREF to: 006849a8 (WRITE)
// 0053f9f1: TEST EAX,EAX
// 0053f9f3: JL 0x0053fb09
//   XREF to: 0053fb09 (CONDITIONAL_JUMP)
// 0053f9f9: MOV dword ptr [ESP + 0x48],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 0053f9fd: MOV EAX,[0x02f7c8b8]
//   Label: LAB_0053f9fd
//   XREF to: 02f7c8b8 (READ)
// 0053fa02: SUB EAX,EDI
// 0053fa04: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0053fa08: FILD dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x20] (READ)
// 0053fa0c: FMUL double ptr [0x0063d3dd]
//   XREF to: 0063d3dd (READ)
// 0053fa12: FST float ptr [ESP]
//   XREF to: Stack[-0x60] (DATA)
// 0053fa15: FLDZ
// 0053fa17: FCOMPP
// 0053fa19: FNSTSW AX
// 0053fa1b: SAHF
// 0053fa1c: JBE 0x0053fa23
//   XREF to: 0053fa23 (CONDITIONAL_JUMP)
// 0053fa1e: XOR ECX,ECX
// 0053fa20: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x60] (DATA)
// 0053fa23: FLD float ptr [ESP]
//   Label: LAB_0053fa23
//   XREF to: Stack[-0x60] (DATA)
// 0053fa26: FCOMP double ptr [0x0063d3e5]
//   XREF to: 0063d3e5 (READ)
// 0053fa2c: FNSTSW AX
// 0053fa2e: SAHF
// 0053fa2f: JBE 0x0053fa38
//   XREF to: 0053fa38 (CONDITIONAL_JUMP)
// 0053fa31: MOV dword ptr [ESP],0x41f00000
//   XREF to: Stack[-0x60] (DATA)
// 0053fa38: FLD float ptr [ESP]
//   Label: LAB_0053fa38
//   XREF to: Stack[-0x60] (DATA)
// 0053fa3b: FCOMP double ptr [0x0063d3ed]
//   XREF to: 0063d3ed (READ)
// 0053fa41: FNSTSW AX
// 0053fa43: SAHF
// 0053fa44: JBE 0x0053faba
//   XREF to: 0053faba (CONDITIONAL_JUMP)
// 0053fa46: MOV EDI,0x29
// 0053fa4b: MOV AH,0x1
// 0053fa4d: LEA ESI,[ESP + 0x38]
//   XREF to: Stack[-0x28] (DATA)
// 0053fa51: MOV dword ptr [ESP + 0x4],EDI
//   XREF to: Stack[-0x5c] (WRITE)
// 0053fa55: LEA EDI,[ESP + 0x9]
//   XREF to: Stack[-0x57] (DATA)
// 0053fa59: MOV byte ptr [ESP + 0x8],AH
//   XREF to: Stack[-0x58] (WRITE)
// 0053fa5d: MOVSD ES:EDI,ESI
// 0053fa5e: MOVSD ES:EDI,ESI
// 0053fa5f: IMUL EAX,dword ptr [EBX + 0x114],0x78
// 0053fa66: MOV EAX,dword ptr [EBX + EAX*0x1 + 0x34]
// 0053fa6a: MOV dword ptr [ESP + 0x25],EAX
//   XREF to: Stack[-0x3b] (WRITE)
// 0053fa6e: IMUL EAX,dword ptr [EBX + 0x114],0x78
// 0053fa75: MOV ESI,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x18] (READ)
// 0053fa79: MOV EAX,dword ptr [EBX + EAX*0x1 + 0x38]
// 0053fa7d: LEA EDI,[ESP + 0x11]
//   XREF to: Stack[-0x4f] (DATA)
// 0053fa81: MOV dword ptr [ESP + 0x29],EAX
//   XREF to: Stack[-0x37] (WRITE)
// 0053fa85: PUSH EDI
// 0053fa86: MOV AL,byte ptr [ESI]
//   Label: LAB_0053fa86
// 0053fa88: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x4f] (DATA)
// 0053fa8a: CMP AL,0x0
// 0053fa8c: JZ 0x0053fa9e
//   XREF to: 0053fa9e (CONDITIONAL_JUMP)
// 0053fa8e: MOV AL,byte ptr [ESI + 0x1]
// 0053fa91: ADD ESI,0x2
// 0053fa94: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x4e] (WRITE)
// 0053fa97: ADD EDI,0x2
// 0053fa9a: CMP AL,0x0
// 0053fa9c: JNZ 0x0053fa86
//   XREF to: 0053fa86 (CONDITIONAL_JUMP)
// 0053fa9e: POP EDI
//   Label: LAB_0053fa9e
// 0053fa9f: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x5c] (DATA)
// 0053faa3: PUSH EAX
// 0053faa4: MOV ESI,dword ptr [EBX + 0x110]
// 0053faaa: PUSH ESI
// 0053faab: PUSH EBX
// 0053faac: CALL core_netgame.cpp_CNetGame_send_FUN_005411c0
//   XREF to: 005411c0 (UNCONDITIONAL_CALL)
// 0053fab1: MOV EDI,dword ptr [0x02f7c8b8]
//   XREF to: 02f7c8b8 (READ)
// 0053fab7: ADD ESP,0xc
// 0053faba: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   Label: LAB_0053faba
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0053fabf: PUSH EBX
// 0053fac0: CALL core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0
//   XREF to: 005405b0 (UNCONDITIONAL_CALL)
// 0053fac5: MOV EAX,[0x02f7c8bc]
//   XREF to: 02f7c8bc (READ)
// 0053faca: ADD ESP,0x4
// 0053facd: CMP EAX,0x1
// 0053fad0: JZ 0x0053fba1
//   XREF to: 0053fba1 (CONDITIONAL_JUMP)
// 0053fad6: CMP EAX,0x3
// 0053fad9: JNC 0x0053fb95
//   XREF to: 0053fb95 (CONDITIONAL_JUMP)
// 0053fadf: CMP EAX,0x2
// 0053fae2: JZ 0x0053fb1d
//   XREF to: 0053fb1d (CONDITIONAL_JUMP)
// 0053fae4: PUSH 0x1
//   Label: LAB_0053fae4
// 0053fae6: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0053faeb: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0053faec: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0053faee: CALL dword ptr [EDX + 0x4]
// 0053faf1: ADD ESP,0x8
// 0053faf4: TEST EAX,EAX
// 0053faf6: JNZ 0x0053fb81
//   XREF to: 0053fb81 (CONDITIONAL_JUMP)
// 0053fafc: CMP dword ptr [EBX + 0x110],0x0
// 0053fb03: JGE 0x0053f9fd
//   XREF to: 0053f9fd (CONDITIONAL_JUMP)
// 0053fb09: PUSH 0x1
//   Label: LAB_0053fb09
// 0053fb0b: PUSH EBX
// 0053fb0c: CALL core_netgame.cpp_CNetGame_FUN_0053fd00
//   XREF to: 0053fd00 (UNCONDITIONAL_CALL)
// 0053fb11: ADD ESP,0x8
// 0053fb14: XOR EAX,EAX
// 0053fb16: MOV ESP,EBP
// 0053fb18: POP EBP
// 0053fb19: POP EDI
// 0053fb1a: POP ESI
// 0053fb1b: POP EBX
// 0053fb1c: RET
// 0053fb1d: PUSH 0x63d364
//   Label: LAB_0053fb1d
//   XREF to: 0063d364 (DATA)
// 0053fb22: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0053fb28: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 0053fb29: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0053fb2e: ADD ESP,0x8
// 0053fb31: PUSH 0x0
// 0053fb33: PUSH EBX
// 0053fb34: CALL core_netgame.cpp_CNetGame_FUN_0053fd00
//   XREF to: 0053fd00 (UNCONDITIONAL_CALL)
// 0053fb39: ADD ESP,0x8
// 0053fb3c: XOR EAX,EAX
// 0053fb3e: MOV ESP,EBP
// 0053fb40: POP EBP
// 0053fb41: POP EDI
// 0053fb42: POP ESI
// 0053fb43: POP EBX
// 0053fb44: RET
// 0053fb45: PUSH 0x63d392
//   Label: LAB_0053fb45
//   XREF to: 0063d392 (DATA)
// 0053fb4a: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0053fb50: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0053fb51: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0053fb56: ADD ESP,0x8
// 0053fb59: PUSH 0x0
// 0053fb5b: PUSH EBX
// 0053fb5c: CALL core_netgame.cpp_CNetGame_FUN_0053fd00
//   XREF to: 0053fd00 (UNCONDITIONAL_CALL)
// 0053fb61: ADD ESP,0x8
// 0053fb64: XOR EAX,EAX
// 0053fb66: MOV ESP,EBP
// 0053fb68: POP EBP
// 0053fb69: POP EDI
// 0053fb6a: POP ESI
// 0053fb6b: POP EBX
// 0053fb6c: RET
// 0053fb6d: PUSH 0x63d3b4
//   Label: LAB_0053fb6d
//   XREF to: 0063d3b4 (DATA)
// 0053fb72: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0053fb78: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0053fb79: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0053fb7e: ADD ESP,0x8
// 0053fb81: PUSH 0x0
//   Label: LAB_0053fb81
// 0053fb83: PUSH EBX
// 0053fb84: CALL core_netgame.cpp_CNetGame_FUN_0053fd00
//   XREF to: 0053fd00 (UNCONDITIONAL_CALL)
// 0053fb89: ADD ESP,0x8
// 0053fb8c: XOR EAX,EAX
// 0053fb8e: MOV ESP,EBP
// 0053fb90: POP EBP
// 0053fb91: POP EDI
// 0053fb92: POP ESI
// 0053fb93: POP EBX
// 0053fb94: RET
// 0053fb95: JBE 0x0053fb45
//   Label: LAB_0053fb95
//   XREF to: 0053fb45 (CONDITIONAL_JUMP)
// 0053fb97: CMP EAX,0x4
// 0053fb9a: JZ 0x0053fb6d
//   XREF to: 0053fb6d (CONDITIONAL_JUMP)
// 0053fb9c: JMP 0x0053fae4
//   XREF to: 0053fae4 (UNCONDITIONAL_JUMP)
// 0053fba1: MOV EAX,dword ptr [ESP + 0x44]
//   Label: LAB_0053fba1
//   XREF to: Stack[-0x1c] (READ)
// 0053fba5: MOV [0x006849a8],EAX
//   XREF to: 006849a8 (WRITE)
// 0053fbaa: MOV EAX,0x1
// 0053fbaf: MOV ESP,EBP
// 0053fbb1: POP EBP
// 0053fbb2: POP EDI
// 0053fbb3: POP ESI
// 0053fbb4: POP EBX
// 0053fbb5: RET
