// Name: support_newmsg.cpp_getLocalizedString_FUN_005441f0
// Address: 005441f0
// Address Range: [[005441f0, 0054426f]]
// Convention: __cdecl
// Signature: char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
// Cross-references:
//   core_door.cpp_CDoor_getMoveType_FUN_00481070 (00481070) at 00481098 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_FUN_004e36f0 (004e36f0) at 004e3795 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_displayActStats_FUN_004e3800 (004e3800) at 004e3a20 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_finishAct_FUN_004e3b90 (004e3b90) at 004e3da6 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 (004e12b0) at 004e17e6 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 (004ddaf0) at 004deb60 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004daa3f [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004db7e4 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_saveGame_FUN_004e0cd0 (004e0cd0) at 004e120b [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0 (004e1cb0) at 004e22a1 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_showCustomizableKeys_FUN_004d89d0 (004d89d0) at 004d8e60 [UNCONDITIONAL_CALL]
//   core_game.cpp_SaveRelated_FUN_004dcee0 (004dcee0) at 004dd607 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_addItem_FUN_004fd600 (004fd600) at 004fdcc1 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_checkHasMatchingKey_FUN_005013d0 (005013d0) at 00501422 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_renderAllItems_FUN_00500690 (00500690) at 005012fe [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_select_FUN_004ff800 (004ff800) at 004ff990 [UNCONDITIONAL_CALL]
//   core_main.c_finalizeGameSystems_FUN_00508570 (00508570) at 0050873c [UNCONDITIONAL_CALL]
//   core_main.c_initializeGameSystems_FUN_00507a60 (00507a60) at 00507d24 [UNCONDITIONAL_CALL]
//   core_main.c_showPromoScreen_FUN_00508340 (00508340) at 005084ca [UNCONDITIONAL_CALL]
//   core_menu.cpp_CustomKeySettings_FUN_00511890 (00511890) at 00511a00 [UNCONDITIONAL_CALL]
//   core_menu.cpp_GraphicsOptions_FUN_00510c80 (00510c80) at 00510f41 [UNCONDITIONAL_CALL]
//   core_menu.cpp_MonitorCalibrationPressAnyKeyToContinue_FUN_00510a50 (00510a50) at 00510a82 [UNCONDITIONAL_CALL]
//   core_menu.cpp_RunCalibrationTest_FUN_00510ba0 (00510ba0) at 00510be8 [UNCONDITIONAL_CALL]
//   core_menu.cpp_SetUpGamepadControls_FUN_005104d0 (005104d0) at 005104fc [UNCONDITIONAL_CALL]
//   core_menu.cpp_SettingSoundOptions_FUN_00511e50 (00511e50) at 00512684 [UNCONDITIONAL_CALL]
//   core_menu.cpp_ShowOptionsScreen_FUN_00512d30 (00512d30) at 00512de3 [UNCONDITIONAL_CALL]
//   core_menu.cpp_configureCustomKeyBindings_FUN_005138e0 (005138e0) at 00514d40 [UNCONDITIONAL_CALL]
//   core_menu.cpp_getKeyDisplayName_FUN_005134e0 (005134e0) at 005136a0 [UNCONDITIONAL_CALL]
//   core_menu.cpp_showMainGameMenu_FUN_00512f40 (00512f40) at 005130ab [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_FUN_00523cf0 (00523cf0) at 00523dc6 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_FUN_00524760 (00524760) at 005247f1 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_load_FUN_00522d90 (00522d90) at 00522db7 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_run_FUN_00524420 (00524420) at 005245a4 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_initScene_FUN_0056aa10 (0056aa10) at 0056aa22 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_load_FUN_00569410 (00569410) at 00569caa [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270 (0049f270) at 0049f3dc [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70 (0049fb70) at 0049fc87 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 (004a3b90) at 004a3c42 [UNCONDITIONAL_CALL]
//   sound_sndwav.cpp_enumerateWavInDevice_FUN_005b1560 (005b1560) at 005b159a [UNCONDITIONAL_CALL]
//   sound_sndwav.cpp_enumerateWavOutDevice_FUN_005b1470 (005b1470) at 005b14b6 [UNCONDITIONAL_CALL]
// Globals:
//   int g_LocalizationLoaded
//   int g_LocalizedStringCount
//   char*[500] g_MessageKeys
//   char*[500] g_MessageTexts
// Function calls:
//   crt_string.c_strcmp_FUN_005fef20
//   support_newmsg.cpp_findLocalizedString_FUN_00544170

#include "nocturne.h"

char * __cdecl support_newmsg_cpp_getLocalizedString_FUN_005441f0(char *key)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int upper_bound;
  
  if (g_LocalizationLoaded == 0) {
    return key;
  }
  upper_bound = g_LocalizedStringCount + -1;
  if (upper_bound < 0) {
    return key;
  }
  iVar1 = upper_bound / 2;
  iVar2 = crt_string_c_strcmp_FUN_005fef20(key,g_MessageKeys[iVar1]);
  if (iVar2 < 0) {
    pcVar3 = support_newmsg_cpp_findLocalizedString_FUN_00544170(key,0,iVar1 + -1);
    return pcVar3;
  }
  if (iVar2 < 1) {
    return g_MessageTexts[iVar1];
  }
  pcVar3 = support_newmsg_cpp_findLocalizedString_FUN_00544170(key,iVar1 + 1,upper_bound);
  return pcVar3;
}


// Assembly code:
// 005441f0: PUSH EDI
//   Label: support_newmsg.cpp_getLocalizedString_FUN_005441f0
// 005441f1: PUSH EBP
// 005441f2: MOV EDI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005441f6: CMP dword ptr [0x02fa8cd4],0x0
//   XREF to: 02fa8cd4 (READ)
// 005441fd: JZ 0x00544213
//   XREF to: 00544213 (CONDITIONAL_JUMP)
// 005441ff: PUSH ESI
// 00544200: PUSH EBX
// 00544201: MOV EBX,dword ptr [0x02fa8cd8]
//   XREF to: 02fa8cd8 (READ)
// 00544207: DEC EBX
// 00544208: TEST EBX,EBX
// 0054420a: JGE 0x00544218
//   XREF to: 00544218 (CONDITIONAL_JUMP)
// 0054420c: MOV EAX,EDI
// 0054420e: POP EBX
// 0054420f: POP ESI
// 00544210: POP EBP
// 00544211: POP EDI
// 00544212: RET
// 00544213: MOV EAX,EDI
//   Label: LAB_00544213
// 00544215: POP EBP
// 00544216: POP EDI
// 00544217: RET
// 00544218: MOV EDX,EBX
//   Label: LAB_00544218
// 0054421a: MOV EAX,EBX
// 0054421c: SAR EDX,0x1f
// 0054421f: SUB EAX,EDX
// 00544221: SAR EAX,0x1
// 00544223: MOV ESI,EAX
// 00544225: LEA EBP,[EAX*0x4 + 0x0]
// 0054422c: MOV ECX,dword ptr [EBP + 0x2fa8cdc]
//   XREF to: 02fa8cdc (DATA)
// 00544232: PUSH ECX
// 00544233: PUSH EDI
// 00544234: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 00544239: ADD ESP,0x8
// 0054423c: TEST EAX,EAX
// 0054423e: JL 0x0054424d
//   XREF to: 0054424d (CONDITIONAL_JUMP)
// 00544240: JG 0x0054425f
//   XREF to: 0054425f (CONDITIONAL_JUMP)
// 00544242: MOV EAX,dword ptr [EBP + 0x2fa94ac]
//   XREF to: 02fa94ac (DATA)
// 00544248: POP EBX
// 00544249: POP ESI
// 0054424a: POP EBP
// 0054424b: POP EDI
// 0054424c: RET
// 0054424d: DEC ESI
//   Label: LAB_0054424d
// 0054424e: PUSH ESI
// 0054424f: PUSH 0x0
// 00544251: PUSH EDI
// 00544252: CALL support_newmsg.cpp_findLocalizedString_FUN_00544170
//   XREF to: 00544170 (UNCONDITIONAL_CALL)
// 00544257: ADD ESP,0xc
// 0054425a: POP EBX
// 0054425b: POP ESI
// 0054425c: POP EBP
// 0054425d: POP EDI
// 0054425e: RET
// 0054425f: PUSH EBX
//   Label: LAB_0054425f
// 00544260: INC ESI
// 00544261: PUSH ESI
// 00544262: PUSH EDI
// 00544263: CALL support_newmsg.cpp_findLocalizedString_FUN_00544170
//   XREF to: 00544170 (UNCONDITIONAL_CALL)
// 00544268: ADD ESP,0xc
// 0054426b: POP EBX
// 0054426c: POP ESI
// 0054426d: POP EBP
// 0054426e: POP EDI
// 0054426f: RET
//   XREF to: register:0000001c (WRITE)
