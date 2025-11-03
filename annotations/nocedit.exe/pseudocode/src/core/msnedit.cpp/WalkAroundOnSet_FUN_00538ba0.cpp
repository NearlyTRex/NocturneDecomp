// Name: core_msnedit.cpp_WalkAroundOnSet_FUN_00538ba0
// Address: 00538ba0
// Address Range: [[00538ba0, 00538d5c]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_WalkAroundOnSet_FUN_00538ba0()
// Cross-references:
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 00538730 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_No_sets_to_walk_around_0063c23a
//   TerminatedCString s_Backing_up_to_s_0063c252
//   TerminatedCString s_Preparing_actors_0063c266
//   TerminatedCString s_Preparing_set_0063c27a
//   TerminatedCString s_Preparing_0063c28b
//   TerminatedCString s_Running_0063c298
//   TerminatedCString s_Reloading_mission_from_s_0063c2a3
//   TerminatedCString s_world_s_0063c2bd
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEventList* g_CEventListPtr = 02d05310
//   CGame* g_CGamePtr = 02d81a9c
//   TerminatedCString s_PLAYMSN_TMP_00680820
//   undefined4 s_YMSN.TMP_00680824
//   undefined4 s_.TMP_00680828
//   undefined4 s__0068082c
//   CBitFont* g_SmallEditorFont
//   CBitFont* g_EditorFont
//   CEditorTools g_CEditorToolsPtr
//   CEventList g_CEventListInstance
//   CGame g_CGameInstance
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
// Function calls:
//   core_event.cpp_CEventList_FUN_004b0460
//   core_game.cpp_CGame_runGameSession_FUN_004daf80
//   core_mission.cpp_CDemonMission_buildActiveSetActorList_FUN_00524120
//   core_mission.cpp_CDemonMission_createHeros_FUN_00524a80
//   core_mission.cpp_CDemonMission_FUN_00523cf0
//   core_mission.cpp_CDemonMission_FUN_00523fb0
//   core_mission.cpp_CDemonMission_FUN_00524760
//   core_mission.cpp_CDemonMission_load_FUN_00522d90
//   core_mission.cpp_CDemonMission_save_FUN_00522e30
//   crt_io.c_deleteFile_FUN_005ff9d0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740

#include "nocturne.h"

/* Signature: undefined1 core_msnedit.cpp_WalkAroundOnSet(undefined4 param_1) */

void core_msnedit_cpp_WalkAroundOnSet_FUN_00538ba0(void)

{
  CEditorTools *this_ptr;
  int iVar1;
  BADSPACEBASE *in_ESP;
  CDemonMission *in_stack_00000004;
  char acStack_e0 [4];
  char acStack_dc [196];
  char local_18 [4];
  char acStack_14 [4];
  char acStack_10 [4];
  char cStack_c;
  
  if (0 < (int)in_stack_00000004->set_list) {
    local_18 = (char  [4])"$PLAYMSN.TMP"._0_4_;
    acStack_14 = (char  [4])"$PLAYMSN.TMP"._4_4_;
    acStack_10 = (char  [4])"$PLAYMSN.TMP"._8_4_;
    cStack_c = "$PLAYMSN.TMP"[0xc];
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Backing up to %s...");
    core_mission_cpp_CDemonMission_save_FUN_00522e30(in_stack_00000004);
    in_stack_00000004->field0_0x0[4] = '\0';
    in_stack_00000004->field0_0x0[5] = '\0';
    in_stack_00000004->field0_0x0[6] = '\0';
    in_stack_00000004->field0_0x0[7] = '\0';
    iVar1 = core_mission_cpp_CDemonMission_createHeros_FUN_00524a80(in_stack_00000004,0);
    if (iVar1 != 0) {
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Preparing actors...");
      core_mission_cpp_CDemonMission_FUN_00523cf0(in_stack_00000004);
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Preparing set...");
      in_stack_00000004->field0_0x0[0] = -1;
      in_stack_00000004->field0_0x0[1] = -1;
      in_stack_00000004->field0_0x0[2] = -1;
      in_stack_00000004->field0_0x0[3] = -1;
      core_mission_cpp_CDemonMission_FUN_00523fb0(in_stack_00000004);
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Preparing...");
      core_event_cpp_CEventList_FUN_004b0460(g_CEventListPtr);
      iVar1 = core_mission_cpp_CDemonMission_FUN_00524760(in_stack_00000004);
      if (iVar1 != 0) {
        core_mission_cpp_CDemonMission_buildActiveSetActorList_FUN_00524120(in_stack_00000004);
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Running...");
        core_game_cpp_CGame_runGameSession_FUN_004daf80(g_CGamePtr);
      }
    }
    this_ptr = g_CEditorToolsPtr;
    g_EditorFont = g_SmallEditorFont;
    in_stack_00000004->field0_0x0[4] = '\x01';
    in_stack_00000004->field0_0x0[5] = '\0';
    in_stack_00000004->field0_0x0[6] = '\0';
    in_stack_00000004->field0_0x0[7] = '\0';
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (this_ptr,"Reloading mission from %s");
    core_mission_cpp_CDemonMission_load_FUN_00522d90(in_stack_00000004,&stack0x00000020,1);
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_e0,"world\\%s",&stack0x00000024);
    crt_io_c_deleteFile_FUN_005ff9d0(acStack_dc);
    core_event_cpp_CEventList_FUN_004b0460(g_CEventListPtr);
    return;
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
            (g_CEditorToolsPtr,"No sets to walk around!");
  return;
}


// Assembly code:
// 00538ba0: PUSH EBX
//   Label: core_msnedit.cpp_WalkAroundOnSet_FUN_00538ba0
// 00538ba1: PUSH EBP
// 00538ba2: SUB ESP,0x114
// 00538ba8: MOV EBX,dword ptr [ESP + 0x120]
//   XREF to: Stack[0x4] (READ)
// 00538baf: CMP dword ptr [EBX + 0x144],0x1
// 00538bb6: JL 0x00538d41
//   XREF to: 00538d41 (CONDITIONAL_JUMP)
// 00538bbc: PUSH EDI
// 00538bbd: PUSH ESI
// 00538bbe: LEA EAX,[ESP + 0x10c]
//   XREF to: Stack[-0x18] (DATA)
// 00538bc5: PUSH EAX
// 00538bc6: LEA EDI,[ESP + 0x110]
//   XREF to: Stack[-0x18] (DATA)
// 00538bcd: PUSH 0x63c252
//   XREF to: 0063c252 (DATA)
// 00538bd2: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00538bd8: MOV ESI,0x680820
//   XREF to: 00680820 (DATA)
// 00538bdd: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 00538bde: MOVSD ES:EDI,ESI
//   XREF to: 00680820 (READ)
// 00538bdf: MOVSD ES:EDI,ESI
//   XREF to: 00680824 (READ)
// 00538be0: MOVSD ES:EDI,ESI
//   XREF to: 00680828 (READ)
// 00538be1: MOVSB ES:EDI,ESI
//   XREF to: 0068082c (READ)
// 00538be2: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 00538be7: ADD ESP,0xc
// 00538bea: LEA EAX,[ESP + 0x10c]
//   XREF to: Stack[-0x18] (DATA)
// 00538bf1: PUSH EAX
// 00538bf2: PUSH EBX
// 00538bf3: CALL core_mission.cpp_CDemonMission_save_FUN_00522e30
//   XREF to: 00522e30 (UNCONDITIONAL_CALL)
// 00538bf8: ADD ESP,0x8
// 00538bfb: PUSH 0x0
// 00538bfd: PUSH EBX
// 00538bfe: MOV dword ptr [EBX + 0x4],0x0
// 00538c05: CALL core_mission.cpp_CDemonMission_createHeros_FUN_00524a80
//   XREF to: 00524a80 (UNCONDITIONAL_CALL)
// 00538c0a: ADD ESP,0x8
// 00538c0d: TEST EAX,EAX
// 00538c0f: JZ 0x00538cc0
//   XREF to: 00538cc0 (CONDITIONAL_JUMP)
// 00538c15: PUSH 0x63c266
//   XREF to: 0063c266 (DATA)
// 00538c1a: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00538c20: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 00538c21: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 00538c26: ADD ESP,0x8
// 00538c29: PUSH EBX
// 00538c2a: CALL core_mission.cpp_CDemonMission_FUN_00523cf0
//   XREF to: 00523cf0 (UNCONDITIONAL_CALL)
// 00538c2f: ADD ESP,0x4
// 00538c32: PUSH 0x63c27a
//   XREF to: 0063c27a (DATA)
// 00538c37: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00538c3d: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 00538c3e: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 00538c43: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 00538c48: MOV dword ptr [EBX],0xffffffff
// 00538c4e: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 00538c55: ADD ESP,0x8
// 00538c58: MOV EBP,dword ptr [EAX + 0x2c]
// 00538c5b: PUSH EBP
// 00538c5c: PUSH EBX
// 00538c5d: CALL core_mission.cpp_CDemonMission_FUN_00523fb0
//   XREF to: 00523fb0 (UNCONDITIONAL_CALL)
// 00538c62: ADD ESP,0x8
// 00538c65: PUSH 0x63c28b
//   XREF to: 0063c28b (DATA)
// 00538c6a: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00538c6f: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 00538c70: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 00538c75: ADD ESP,0x8
// 00538c78: MOV EDX,dword ptr [0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 00538c7e: PUSH EDX
//   XREF to: 02d05310 (DATA)
// 00538c7f: CALL core_event.cpp_CEventList_FUN_004b0460
//   XREF to: 004b0460 (UNCONDITIONAL_CALL)
// 00538c84: ADD ESP,0x4
// 00538c87: PUSH EBX
// 00538c88: CALL core_mission.cpp_CDemonMission_FUN_00524760
//   XREF to: 00524760 (UNCONDITIONAL_CALL)
// 00538c8d: ADD ESP,0x4
// 00538c90: TEST EAX,EAX
// 00538c92: JZ 0x00538cc0
//   XREF to: 00538cc0 (CONDITIONAL_JUMP)
// 00538c94: PUSH EBX
// 00538c95: CALL core_mission.cpp_CDemonMission_buildActiveSetActorList_FUN_00524120
//   XREF to: 00524120 (UNCONDITIONAL_CALL)
// 00538c9a: ADD ESP,0x4
// 00538c9d: PUSH 0x63c298
//   XREF to: 0063c298 (DATA)
// 00538ca2: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00538ca8: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 00538ca9: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 00538cae: ADD ESP,0x8
// 00538cb1: MOV ESI,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 00538cb7: PUSH ESI
//   XREF to: 02d81a9c (DATA)
// 00538cb8: CALL core_game.cpp_CGame_runGameSession_FUN_004daf80
//   XREF to: 004daf80 (UNCONDITIONAL_CALL)
// 00538cbd: ADD ESP,0x4
// 00538cc0: MOV EAX,[0x020a5724]
//   Label: LAB_00538cc0
//   XREF to: 020a5724 (READ)
// 00538cc5: MOV [0x02cf1cd0],EAX
//   XREF to: 02cf1cd0 (WRITE)
// 00538cca: LEA EAX,[ESP + 0x10c]
//   XREF to: Stack[-0x18] (DATA)
// 00538cd1: PUSH EAX
// 00538cd2: PUSH 0x63c2a3
//   XREF to: 0063c2a3 (DATA)
// 00538cd7: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00538cdd: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 00538cde: MOV dword ptr [EBX + 0x4],0x1
// 00538ce5: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 00538cea: ADD ESP,0xc
// 00538ced: PUSH 0x1
// 00538cef: LEA EAX,[ESP + 0x110]
//   XREF to: Stack[-0x18] (DATA)
// 00538cf6: PUSH EAX
// 00538cf7: PUSH EBX
// 00538cf8: CALL core_mission.cpp_CDemonMission_load_FUN_00522d90
//   XREF to: 00522d90 (UNCONDITIONAL_CALL)
// 00538cfd: ADD ESP,0xc
// 00538d00: LEA EAX,[ESP + 0x10c]
//   XREF to: Stack[-0x18] (DATA)
// 00538d07: PUSH EAX
// 00538d08: PUSH 0x63c2bd
//   XREF to: 0063c2bd (DATA)
// 00538d0d: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x11c] (DATA)
// 00538d11: PUSH EAX
// 00538d12: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00538d17: ADD ESP,0xc
// 00538d1a: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x11c] (DATA)
// 00538d1e: PUSH EAX
// 00538d1f: CALL crt_io.c_deleteFile_FUN_005ff9d0
//   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
// 00538d24: ADD ESP,0x4
// 00538d27: MOV EBP,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 00538d2d: PUSH EBP
//   XREF to: 02d05310 (DATA)
// 00538d2e: CALL core_event.cpp_CEventList_FUN_004b0460
//   XREF to: 004b0460 (UNCONDITIONAL_CALL)
// 00538d33: ADD ESP,0x4
// 00538d36: POP ESI
// 00538d37: POP EDI
// 00538d38: ADD ESP,0x114
// 00538d3e: POP EBP
// 00538d3f: POP EBX
// 00538d40: RET
// 00538d41: PUSH 0x63c23a
//   Label: LAB_00538d41
//   XREF to: 0063c23a (DATA)
// 00538d46: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (DATA)
//   XREF to: 00678a60 (READ)
// 00538d4b: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 00538d4c: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 00538d51: ADD ESP,0x8
// 00538d54: ADD ESP,0x114
// 00538d5a: POP EBP
// 00538d5b: POP EBX
// 00538d5c: RET
