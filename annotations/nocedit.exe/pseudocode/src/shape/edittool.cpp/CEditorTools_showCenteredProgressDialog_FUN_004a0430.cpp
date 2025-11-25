// Name: shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
// Address: 004a0430
// Address Range: [[004a0430, 004a052c]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430(CEditorTools * this_ptr, char * message_text)
// Cross-references:
//   core_course.cpp_OpeningCourseFile2_FUN_00442d70 (00442d70) at 00442e2c [UNCONDITIONAL_CALL]
//   core_course.cpp_OpeningCourseFileMaybe_FUN_00442bc0 (00442bc0) at 00442cba [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0 (0047b1e0) at 0047b261 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_weldAndRemoveUnusedVertices_FUN_0047ada0 (0047ada0) at 0047ae80 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_consolidateTriList_FUN_00494450 (00494450) at 00494467 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_crunch_FUN_00495310 (00495310) at 004955c5 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0 (004947a0) at 00494ae7 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053eb40 (0053eb40) at 0053ebbe [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_FUN_0053fd00 (0053fd00) at 0053ffa0 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0 (00576da0) at 00576e9b [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 (0057e7c0) at 0057f4a7 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModel_determinePartsFromS3D_FUN_0058f810 (0058f810) at 0059094f [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00592690 (00592690) at 00592bb9 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 (004b4220) at 004b4c97 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bbdfb [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40 (004b9f40) at 004ba090 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50 (004bca50) at 004bca8d [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b887c [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 (004b5a50) at 004b6452 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_copyFileWithProgress_FUN_004b2030 (004b2030) at 004b214d [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPodFile_verifyChecksum_FUN_00550230 (00550230) at 0055041f [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_buildSpatialGrid_FUN_00516620 (00516620) at 00516667 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_computeAllEdgeCollapseCosts_FUN_00519710 (00519710) at 0051974c [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_replayLodGeneration_FUN_005173f0 (005173f0) at 00517452 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_testSoundFiles_FUN_005ad5c0 (005ad5c0) at 005ad78a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_edittool_cpp_00622eae
//   TerminatedCString s_gEdFont_must_be_set_by_t_00622ec4
//   int g_WindowWidth = 0x140
//   CBitFont* g_EditorFont
//   int g_WindowStackCount
//   undefined4 DAT_02cf1ebc
//   undefined4 DAT_02cf1ec0
//   int g_FontCharacterHeight
//   int g_FontCharacterWidth
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890
//   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
//   wincore_winrun.cpp_getTime_FUN_005f2dc0

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
          (CEditorTools *this_ptr,char *message_text)

{
  int iVar1;
  int iVar2;
  CEditorTools *in_stack_00000014;
  CEditorTools *in_stack_0000001c;
  
  if (g_EditorFont == (CBitFont *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x8d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("gEdFont must be set by the application.");
  }
  g_FontCharacterHeight = g_EditorFont->max_char_height;
  g_FontCharacterWidth = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_EditorFont,0x6a);
  iVar1 = g_WindowWidth / 2;
  if (message_text != (char *)0x0) {
    iVar2 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_EditorFont,message_text);
    if (iVar1 < iVar2) {
      iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_EditorFont,message_text);
    }
  }
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_004a0890
            (in_stack_00000014,iVar1,g_FontCharacterWidth * 6,message_text,0);
  iVar1 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  iVar2 = g_WindowStackCount + -1;
  g_WindowStack[iVar2].progress_start_time = iVar1;
  g_WindowStack[iVar2].progress_percentage = -1;
  shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530(in_stack_0000001c,0.0,1.0);
  return;
}


// Assembly code:
// 004a0430: PUSH EBX
//   Label: shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
// 004a0431: PUSH ESI
// 004a0432: PUSH EDI
// 004a0433: PUSH EBP
// 004a0434: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004a0438: CMP dword ptr [0x02cf1cd0],0x0
//   XREF to: 02cf1cd0 (READ)
// 004a043f: JNZ 0x004a0464
//   XREF to: 004a0464 (CONDITIONAL_JUMP)
// 004a0441: MOV ECX,0x622eae
//   XREF to: 00622eae (PARAM)
// 004a0446: MOV EBX,0x8d
// 004a044b: PUSH 0x622ec4
//   XREF to: 00622ec4 (DATA)
// 004a0450: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004a0456: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 004a045c: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004a0461: ADD ESP,0x4
// 004a0464: MOV EAX,[0x02cf1cd0]
//   Label: LAB_004a0464
//   XREF to: 02cf1cd0 (READ)
// 004a0469: PUSH 0x6a
// 004a046b: MOV EBX,dword ptr [EAX + 0x3168]
// 004a0471: PUSH EAX
// 004a0472: MOV dword ptr [0x02cf2668],EBX
//   XREF to: 02cf2668 (WRITE)
// 004a0478: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 004a047d: MOV [0x02cf266c],EAX
//   XREF to: 02cf266c (WRITE)
// 004a0482: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 004a0487: MOV EDX,EAX
// 004a0489: SAR EDX,0x1f
// 004a048c: SUB EAX,EDX
// 004a048e: SAR EAX,0x1
// 004a0490: ADD ESP,0x8
// 004a0493: MOV EBX,EAX
// 004a0495: TEST ESI,ESI
// 004a0497: JNZ 0x004a0502
//   XREF to: 004a0502 (CONDITIONAL_JUMP)
// 004a0499: PUSH 0x0
//   Label: LAB_004a0499
// 004a049b: PUSH ESI
// 004a049c: MOV ESI,dword ptr [0x02cf266c]
//   XREF to: 02cf266c (READ)
// 004a04a2: LEA EAX,[ESI*0x4 + 0x0]
// 004a04a9: SUB EAX,ESI
// 004a04ab: ADD EAX,EAX
// 004a04ad: PUSH EAX
// 004a04ae: PUSH EBX
// 004a04af: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 004a04b3: PUSH EAX
// 004a04b4: CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890
//   XREF to: 004a0890 (UNCONDITIONAL_CALL)
// 004a04b9: ADD ESP,0x14
// 004a04bc: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 004a04c1: MOV EBX,dword ptr [0x02cf1cdc]
//   XREF to: 02cf1cdc (READ)
// 004a04c7: DEC EBX
// 004a04c8: MOV ESI,EAX
// 004a04ca: MOV EAX,EBX
// 004a04cc: SHL EAX,0x4
// 004a04cf: SUB EAX,EBX
// 004a04d1: PUSH 0x3f800000
// 004a04d6: SHL EAX,0x2
// 004a04d9: MOV EDX,0xffffffff
// 004a04de: ADD EAX,EBX
// 004a04e0: PUSH 0x0
// 004a04e2: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 004a04e6: MOV dword ptr [EAX*0x8 + 0x2cf1ebc],ESI
//   XREF to: 02cf1ebc (DATA)
// 004a04ed: PUSH ECX
// 004a04ee: MOV dword ptr [EAX*0x8 + 0x2cf1ec0],EDX
//   XREF to: 02cf1ec0 (DATA)
// 004a04f5: CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
//   XREF to: 004a0530 (UNCONDITIONAL_CALL)
// 004a04fa: ADD ESP,0xc
// 004a04fd: POP EBP
// 004a04fe: POP EDI
// 004a04ff: POP ESI
// 004a0500: POP EBX
// 004a0501: RET
// 004a0502: PUSH ESI
//   Label: LAB_004a0502
// 004a0503: MOV EDI,dword ptr [0x02cf1cd0]
//   XREF to: 02cf1cd0 (READ)
// 004a0509: PUSH EDI
// 004a050a: CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
// 004a050f: ADD ESP,0x8
// 004a0512: CMP EBX,EAX
// 004a0514: JGE 0x004a0499
//   XREF to: 004a0499 (CONDITIONAL_JUMP)
// 004a0516: PUSH ESI
// 004a0517: MOV EBP,dword ptr [0x02cf1cd0]
//   XREF to: 02cf1cd0 (READ)
// 004a051d: PUSH EBP
// 004a051e: CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
// 004a0523: ADD ESP,0x8
// 004a0526: MOV EBX,EAX
// 004a0528: JMP 0x004a0499
//   XREF to: 004a0499 (UNCONDITIONAL_JUMP)
