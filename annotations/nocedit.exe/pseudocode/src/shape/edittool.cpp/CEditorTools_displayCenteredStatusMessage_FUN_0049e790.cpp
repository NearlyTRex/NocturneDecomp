// Name: shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
// Address: 0049e790
// Address Range: [[0049e790, 0049e866]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330 (00479330) at 004798e1 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30 (0047aa30) at 0047aa42 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047e448 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_copyFile_FUN_0047c930 (0047c930) at 0047c9c1 [UNCONDITIONAL_CALL]
//   core_fileman.cpp_CDemonFileManager_addClothFileToExtractList_FUN_004be150 (004be150) at 004be164 [UNCONDITIONAL_CALL]
//   core_fileman.cpp_CDemonFileManager_addDeformableModelToExtractList_FUN_004be070 (004be070) at 004be084 [UNCONDITIONAL_CALL]
//   core_fileman.cpp_CDemonFileManager_addKeyframeModelToExtractList_FUN_004be230 (004be230) at 004be243 [UNCONDITIONAL_CALL]
//   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 (004bda20) at 004bddac [UNCONDITIONAL_CALL]
//   core_fileman.cpp_preprocessMusicFiles_FUN_004bd750 (004bd750) at 004bd8bc [UNCONDITIONAL_CALL]
//   core_menu.cpp_configureCustomKeyBindings_FUN_005138e0 (005138e0) at 00514a64 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_writeFile_FUN_00523600 (00523600) at 00523633 [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052bcb0 (0052bcb0) at 0052bd67 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 00538501 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_00537230 (00537230) at 00537293 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053af50 (0053af50) at 0053afa8 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053d7b0 (0053d7b0) at 0053d7c7 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053ec80 (0053ec80) at 0053ecd4 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 (0053e220) at 0053e264 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 00539155 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_UserInputTempMission_FUN_0053ccf0 (0053ccf0) at 0053ce01 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_WalkAroundOnSet_FUN_00538ba0 (00538ba0) at 00538c21 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_FUN_00541390 (00541390) at 0054197c [UNCONDITIONAL_CALL]
//   core_netgame.cpp_initializeNetworkToHost_FUN_0053f860 (0053f860) at 0053f875 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_initializeNetworkToJoin_FUN_0053f900 (0053f900) at 0053f9d2 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_initializeNetwork_FUN_0053fbc0 (0053fbc0) at 0053fbd3 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_ExportSomething_FUN_0057a0c0 (0057a0c0) at 0057a232 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00581aa0 (00581aa0) at 00581abb [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00583170 (00583170) at 0058318b [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 (00578d80) at 00579701 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_EditingGroundTypesAndSaving_FUN_00578630 (00578630) at 005788c5 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_00581320 (00581320) at 00581383 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_ImportingGroundTextures_FUN_00578420 (00578420) at 00578612 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModel_determinePartsFromS3D_FUN_0058f810 (0058f810) at 0058f86a [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModel_save_FUN_0058f040 (0058f040) at 0058f0e6 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CSkeleton_save_FUN_0058b2c0 (0058b2c0) at 0058b2de [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058b660 (0058b660) at 0058b686 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058bd00 (0058bd00) at 0058bd29 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058c958 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058eaa0 (0058eaa0) at 0058eac2 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058ede0 (0058ede0) at 0058edfd [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00592690 (00592690) at 00592707 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920 (004b3920) at 004b39e7 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 (004b4220) at 004b4457 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0 (004b35a0) at 004b35dd [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bb51d [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 (004ba740) at 004ba92a [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40 (004b9f40) at 004b9fe0 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10 (004b6e10) at 004b71bf [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b8772 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodMounts_FUN_004bcec0 (004bcec0) at 004bd0cb [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 (004b5a50) at 004b5d42 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_undoCheckout_FUN_004bc2b0 (004bc2b0) at 004bc3e5 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_viewPodAuditTrail_FUN_004b7f50 (004b7f50) at 004b8011 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_remountAllPods_FUN_004b5350 (004b5350) at 004b5367 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_synchronizeFilesToDirectory_FUN_004bc650 (004bc650) at 004bc849 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPodFile_verifyChecksum_FUN_00550230 (00550230) at 00550286 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPod_computeAndStoreCRC_FUN_00551000 (00551000) at 0055101e [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_FUN_0051b330 (0051b330) at 0051b3ac [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051a9d0 (0051a9d0) at 0051a9e4 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051ad60 (0051ad60) at 0051ad74 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051c070 (0051c070) at 0051c084 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_testMP3DecoderBenchmark_FUN_00534210 (00534210) at 005343b4 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_testSoundFiles_FUN_005ad5c0 (005ad5c0) at 005ad5e1 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_edittool_cpp_00622eae
//   TerminatedCString s_gEdFont_must_be_set_by_t_00622ec4
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   char[1024] g_StatusMessageBuffer
//   CBitFont* g_EditorFont
//   int g_FontCharacterHeight
//   int g_FontCharacterWidth
//   int g_StatusTextColor
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_vsprintf_FUN_005fdba8
//   engine_3d.c_setRenderAlpha_FUN_00406d80
//   engine_font.cpp_CBitFont_drawTextCenter_FUN_004cdde0
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
          (CEditorTools *this_ptr,char *message)

{
  BADSPACEBASE *in_ESP;
  char *in_stack_00000010;
  
  if (g_EditorFont == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x8d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("gEdFont must be set by the application.");
  }
  g_FontCharacterHeight = g_EditorFont->max_char_height;
  g_FontCharacterWidth = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_EditorFont,0x6a);
  crt_stdio_c_vsprintf_FUN_005fdba8
            (g_StatusMessageBuffer,in_stack_00000010,(va_list_t *)&stack0xfffffff4);
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  engine_font_cpp_CBitFont_drawTextCenter_FUN_004cdde0
            (g_EditorFont,g_WindowWidth / 2,g_WindowHeight / 2,g_StatusTextColor,-1,
             g_StatusMessageBuffer);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  return;
}


// Assembly code:
// 0049e790: PUSH EBX
//   Label: shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
// 0049e791: PUSH ESI
// 0049e792: PUSH EDI
// 0049e793: PUSH EBP
// 0049e794: SUB ESP,0x4
// 0049e797: CMP dword ptr [0x02cf1cd0],0x0
//   XREF to: 02cf1cd0 (READ)
// 0049e79e: JZ 0x0049e83f
//   XREF to: 0049e83f (CONDITIONAL_JUMP)
// 0049e7a4: MOV EAX,[0x02cf1cd0]
//   Label: LAB_0049e7a4
//   XREF to: 02cf1cd0 (READ)
// 0049e7a9: PUSH 0x6a
// 0049e7ab: MOV EDX,dword ptr [EAX + 0x3168]
// 0049e7b1: PUSH EAX
// 0049e7b2: MOV dword ptr [0x02cf2668],EDX
//   XREF to: 02cf2668 (WRITE)
// 0049e7b8: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 0049e7bd: ADD ESP,0x8
// 0049e7c0: MOV [0x02cf266c],EAX
//   XREF to: 02cf266c (WRITE)
// 0049e7c5: LEA EAX,[ESP + 0x20]
//   XREF to: Stack[0xc] (DATA)
// 0049e7c9: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 0049e7cc: MOV EAX,ESP
// 0049e7ce: PUSH EAX
// 0049e7cf: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0049e7d3: PUSH ESI
// 0049e7d4: PUSH 0x2cef930
//   XREF to: 02cef930 (DATA)
// 0049e7d9: XOR EDI,EDI
// 0049e7db: CALL crt_stdio.c_vsprintf_FUN_005fdba8
//   XREF to: 005fdba8 (UNCONDITIONAL_CALL)
// 0049e7e0: ADD ESP,0xc
// 0049e7e3: MOV dword ptr [ESP],EDI
//   XREF to: Stack[-0x14] (DATA)
// 0049e7e6: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0049e7eb: PUSH 0xffff
// 0049e7f0: CALL engine_3d.c_setRenderAlpha_FUN_00406d80
//   XREF to: 00406d80 (UNCONDITIONAL_CALL)
// 0049e7f5: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0049e7fa: MOV EDX,EAX
// 0049e7fc: SAR EDX,0x1f
// 0049e7ff: SUB EAX,EDX
// 0049e801: SAR EAX,0x1
// 0049e803: ADD ESP,0x4
// 0049e806: PUSH 0x2cef930
//   XREF to: 02cef930 (DATA)
// 0049e80b: PUSH -0x1
// 0049e80d: MOV EBP,dword ptr [0x02cf2aa4]
//   XREF to: 02cf2aa4 (READ)
// 0049e813: PUSH EBP
// 0049e814: PUSH EAX
// 0049e815: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0049e81a: MOV EDX,EAX
// 0049e81c: SAR EDX,0x1f
// 0049e81f: SUB EAX,EDX
// 0049e821: SAR EAX,0x1
// 0049e823: PUSH EAX
// 0049e824: MOV EAX,[0x02cf1cd0]
//   XREF to: 02cf1cd0 (READ)
// 0049e829: PUSH EAX
// 0049e82a: CALL engine_font.cpp_CBitFont_drawTextCenter_FUN_004cdde0
//   XREF to: 004cdde0 (UNCONDITIONAL_CALL)
// 0049e82f: ADD ESP,0x18
// 0049e832: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0049e837: ADD ESP,0x4
// 0049e83a: POP EBP
// 0049e83b: POP EDI
// 0049e83c: POP ESI
// 0049e83d: POP EBX
// 0049e83e: RET
// 0049e83f: MOV ECX,0x622eae
//   Label: LAB_0049e83f
//   XREF to: 00622eae (PARAM)
// 0049e844: MOV EBX,0x8d
// 0049e849: PUSH 0x622ec4
//   XREF to: 00622ec4 (DATA)
// 0049e84e: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0049e854: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0049e85a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0049e85f: ADD ESP,0x4
// 0049e862: JMP 0x0049e7a4
//   XREF to: 0049e7a4 (UNCONDITIONAL_JUMP)
