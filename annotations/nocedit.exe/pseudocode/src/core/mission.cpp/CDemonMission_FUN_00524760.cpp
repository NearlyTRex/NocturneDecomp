// Name: core_mission.cpp_CDemonMission_FUN_00524760
// Address: 00524760
// Address Range: [[00524760, 00524893]]
// Convention: __cdecl
// Signature: int core_mission.cpp_CDemonMission_FUN_00524760(CDemonMission * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 (004e12b0) at 004e1a0f [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0 (004e1cb0) at 004e2049 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_run_FUN_00524420 (00524420) at 00524587 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_WalkAroundOnSet_FUN_00538ba0 (00538ba0) at 00538c88 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_FUN_00541390 (00541390) at 005419cf [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Can_t_run_mission_no_her_00639346
//   TerminatedCString s_Can_t_run_mission_no_loc_00639363
//   TerminatedCString s_Loading_script_00639385
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEventList* g_CEventListInstance = 02d05310
//   CGame* g_CGamePtr = 02d81a9c
//   CLevelLoader* g_CLevelLoaderPtr = 02dcd850
//   CScript* g_CScriptPtr = 0310f858
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CEditorTools g_CEditorToolsPtr
//   undefined4 DAT_02d05310
//   CGame g_CGameInstance
//   undefined4 DAT_02d81cc4
//   undefined4 DAT_02d81cd0
//   int g_HeroCount
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
//   CLevelLoader g_CLevelLoaderInstance
//   CScript g_CScriptInstance
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_event.cpp_FUN_004aaa70
//   core_level.cpp_CLevelLoader_update_FUN_00504160
//   core_mission.cpp_CDemonMission_FUN_005235b0
//   core_mission.cpp_CDemonMission_FUN_00523cf0
//   core_mission.cpp_CDemonMission_FUN_00523fb0
//   core_script.cpp_CScript_checkInitSection_FUN_0055a6c0
//   core_script.cpp_FUN_0055a540
//   core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00575b20
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   support_newmsg.cpp_getLocalizedString_FUN_005441f0

#include "nocturne.h"

int __cdecl core_mission_cpp_CDemonMission_FUN_00524760(CDemonMission *this_ptr)

{
  char *text;
  int extraout_EAX;
  int unaff_EBX;
  CScript *pCStack00000008;
  
  if (g_HeroCount < 1) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't run mission - no heros");
    return 0;
  }
  if (g_HeroActors[g_LocalHeroIndex] != (CHero *)0x0) {
    core_mission_cpp_CDemonMission_FUN_00523cf0(this_ptr);
    this_ptr->field6_0x54c[0x10] = -1;
    this_ptr->field6_0x54c[0x11] = -1;
    this_ptr->field6_0x54c[0x12] = -1;
    this_ptr->field6_0x54c[0x13] = -1;
    this_ptr->field6_0x54c[0xc] = '\0';
    this_ptr->field6_0x54c[0xd] = '\0';
    this_ptr->field6_0x54c[0xe] = '\0';
    this_ptr->field6_0x54c[0xf] = '\0';
    *(undefined4 *)(this_ptr->field6_0x54c + 8) = *(undefined4 *)(this_ptr->field6_0x54c + 0xc);
    *(undefined4 *)(this_ptr->field6_0x54c + 4) = *(undefined4 *)(this_ptr->field6_0x54c + 8);
    core_event_cpp_FUN_004aaa70();
    g_CGamePtr->letterbox_mode = 0;
    core_mission_cpp_CDemonMission_FUN_00523fb0(this_ptr);
    text = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Loading script");
    core_level_cpp_CLevelLoader_update_FUN_00504160(g_CLevelLoaderPtr,text,unaff_EBX);
    core_mission_cpp_CDemonMission_FUN_005235b0(this_ptr);
    if (extraout_EAX == 0) {
      return 0;
    }
    core_script_cpp_FUN_0055a540();
    pCStack00000008 = g_CScriptPtr;
    core_script_cpp_CScript_checkInitSection_FUN_0055a6c0();
    pCStack00000008 = (CScript *)0x524887;
    core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00575b20(g_CDemonSetPtr);
    return 1;
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
            (g_CEditorToolsPtr,"Can't run mission - no local hero");
  return 0;
}


// Assembly code:
// 00524760: PUSH EBX
//   Label: core_mission.cpp_CDemonMission_FUN_00524760
// 00524761: PUSH ESI
// 00524762: PUSH EDI
// 00524763: PUSH EBP
// 00524764: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00524768: CMP dword ptr [0x02db87bc],0x1
//   XREF to: 02db87bc (READ)
// 0052476f: JL 0x00524827
//   XREF to: 00524827 (CONDITIONAL_JUMP)
// 00524775: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 0052477a: CMP dword ptr [EAX*0x4 + 0x2db87c0],0x0
//   XREF to: 02db87c0 (DATA)
// 00524782: JZ 0x00524842
//   XREF to: 00524842 (CONDITIONAL_JUMP)
// 00524788: PUSH EBX
// 00524789: CALL core_mission.cpp_CDemonMission_FUN_00523cf0
//   XREF to: 00523cf0 (UNCONDITIONAL_CALL)
// 0052478e: ADD ESP,0x4
// 00524791: LEA EAX,[EBX + 0x550]
// 00524797: MOV dword ptr [EBX + 0x55c],0xffffffff
// 005247a1: MOV ESI,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 005247a7: MOV dword ptr [EAX + 0x8],0x0
// 005247ae: PUSH ESI
//   XREF to: 02d05310 (DATA)
// 005247af: MOV EDX,dword ptr [EAX + 0x8]
// 005247b2: MOV dword ptr [EAX + 0x4],EDX
// 005247b5: MOV EDX,dword ptr [EAX + 0x4]
// 005247b8: MOV dword ptr [EAX],EDX
// 005247ba: CALL core_event.cpp_FUN_004aaa70
//   XREF to: 004aaa70 (UNCONDITIONAL_CALL)
// 005247bf: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 005247c4: MOV dword ptr [EAX + 0x228],0x0
//   XREF to: 02d81cc4 (WRITE)
// 005247ce: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 005247d3: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 005247da: ADD ESP,0x4
// 005247dd: MOV EDI,dword ptr [EAX + 0x2c]
// 005247e0: PUSH EDI
// 005247e1: PUSH EBX
// 005247e2: CALL core_mission.cpp_CDemonMission_FUN_00523fb0
//   XREF to: 00523fb0 (UNCONDITIONAL_CALL)
// 005247e7: ADD ESP,0x8
// 005247ea: PUSH 0x0
// 005247ec: PUSH 0x639385
//   XREF to: 00639385 (DATA)
// 005247f1: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 005247f6: ADD ESP,0x4
// 005247f9: PUSH EAX
// 005247fa: MOV EBP,dword ptr [0x0067cf80]
//   XREF to: 0067cf80 (READ)
// 00524800: PUSH EBP
//   XREF to: 02dcd850 (DATA)
// 00524801: CALL core_level.cpp_CLevelLoader_update_FUN_00504160
//   XREF to: 00504160 (UNCONDITIONAL_CALL)
// 00524806: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 0052480b: ADD ESP,0xc
// 0052480e: MOV EDX,dword ptr [EAX + 0x234]
//   XREF to: 02d81cd0 (READ)
// 00524814: PUSH EDX
// 00524815: PUSH EBX
// 00524816: CALL core_mission.cpp_CDemonMission_FUN_005235b0
//   XREF to: 005235b0 (UNCONDITIONAL_CALL)
// 0052481b: ADD ESP,0x8
// 0052481e: TEST EAX,EAX
// 00524820: JNZ 0x0052485d
//   XREF to: 0052485d (CONDITIONAL_JUMP)
// 00524822: POP EBP
// 00524823: POP EDI
// 00524824: POP ESI
// 00524825: POP EBX
// 00524826: RET
// 00524827: PUSH 0x639346
//   Label: LAB_00524827
//   XREF to: 00639346 (DATA)
// 0052482c: MOV EBP,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00524832: PUSH EBP
//   XREF to: 02cf1cd4 (DATA)
// 00524833: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 00524838: ADD ESP,0x8
// 0052483b: XOR EAX,EAX
// 0052483d: POP EBP
// 0052483e: POP EDI
// 0052483f: POP ESI
// 00524840: POP EBX
// 00524841: RET
// 00524842: PUSH 0x639363
//   Label: LAB_00524842
//   XREF to: 00639363 (DATA)
// 00524847: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0052484d: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 0052484e: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 00524853: ADD ESP,0x8
// 00524856: XOR EAX,EAX
// 00524858: POP EBP
// 00524859: POP EDI
// 0052485a: POP ESI
// 0052485b: POP EBX
// 0052485c: RET
// 0052485d: MOV ECX,dword ptr [0x00680d50]
//   Label: LAB_0052485d
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 00524863: PUSH ECX
//   XREF to: 0310f858 (DATA)
// 00524864: CALL core_script.cpp_FUN_0055a540
//   XREF to: 0055a540 (UNCONDITIONAL_CALL)
// 00524869: ADD ESP,0x4
// 0052486c: MOV EBX,dword ptr [0x00680d50]
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 00524872: PUSH EBX
//   XREF to: 0310f858 (DATA)
// 00524873: CALL core_script.cpp_CScript_checkInitSection_FUN_0055a6c0
//   XREF to: 0055a6c0 (UNCONDITIONAL_CALL)
// 00524878: ADD ESP,0x4
// 0052487b: MOV ESI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 00524881: PUSH ESI
//   XREF to: 03114278 (DATA)
// 00524882: CALL core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00575b20
//   XREF to: 00575b20 (UNCONDITIONAL_CALL)
// 00524887: MOV EAX,0x1
// 0052488c: ADD ESP,0x4
// 0052488f: POP EBP
// 00524890: POP EDI
// 00524891: POP ESI
// 00524892: POP EBX
// 00524893: RET
