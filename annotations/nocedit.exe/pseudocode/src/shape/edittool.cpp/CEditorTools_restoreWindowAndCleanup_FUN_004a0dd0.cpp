// Name: shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
// Address: 004a0dd0
// Address Range: [[004a0dd0, 004a0e90]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
// Cross-references:
//   core_course.cpp_OpeningCourseFile2_FUN_00442d70 (00442d70) at 00442e54 [UNCONDITIONAL_CALL]
//   core_course.cpp_OpeningCourseFileMaybe_FUN_00442bc0 (00442bc0) at 00442ce2 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0 (0047b1e0) at 0047b4c3 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_weldAndRemoveUnusedVertices_FUN_0047ada0 (0047ada0) at 0047b04c [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_consolidateTriList_FUN_00494450 (00494450) at 004945e9 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_crunch_FUN_00495310 (00495310) at 00495829 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0 (004947a0) at 00494d73 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004db400 [UNCONDITIONAL_CALL]
//   core_menu.cpp_adjustMouseSensitivity_FUN_005107c0 (005107c0) at 005109fc [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053eb40 (0053eb40) at 0053ec23 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_FUN_0053fd00 (0053fd00) at 005401c6 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0 (00576da0) at 00576f77 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 (0057e7c0) at 0057f597 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModel_determinePartsFromS3D_FUN_0058f810 (0058f810) at 0059116d [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00589b10 (00589b10) at 00589b84 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058d254 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00592690 (00592690) at 005927fe [UNCONDITIONAL_CALL]
//   core_texlist.cpp_CTextureList_buildMasterTextureList_FUN_005dc2a0 (005dc2a0) at 005dc43d [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 (004b4220) at 004b49ec [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bb21a [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40 (004b9f40) at 004ba12a [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50 (004bca50) at 004bcb0d [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b8c81 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 (004b5a50) at 004b68df [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_copyFileWithProgress_FUN_004b2030 (004b2030) at 004b20f9 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPodFile_verifyChecksum_FUN_00550230 (00550230) at 005504e8 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70 (0049fb70) at 0049fe31 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 (004a3e20) at 004a3ecf [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130 (0049e130) at 0049e3e3 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0 (0049e9d0) at 0049f041 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_showTextInputDialog_FUN_0049db10 (0049db10) at 0049dde3 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_buildSpatialGrid_FUN_00516620 (00516620) at 005168fd [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_computeAllEdgeCollapseCosts_FUN_00519710 (00519710) at 005197a7 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_previewLodGeneration_FUN_0051d520 (0051d520) at 0051d82c [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_replayLodGeneration_FUN_005173f0 (005173f0) at 005174e0 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_testSoundFiles_FUN_005ad5c0 (005ad5c0) at 005ad74c [UNCONDITIONAL_CALL]
// Globals:
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   int g_BitsPerPixel = 0x8
//   void*[1024] g_ScreenBufferArray
//   undefined4 g_ScreenBufferArray[1]
//   int g_UseExternalRenderer
// Function calls:
//   shape_edittool.cpp_CEditorTools_popWindowState_FUN_004a0ea0
//   shape_edittool.cpp_paintWindowBackground_FUN_0049e590
//   wincore_windll.cpp_lockFrame_FUN_005b7210
//   wincore_windll.cpp_unlockFrame_FUN_005b7250

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools *this_ptr)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;
  CEditorTools *in_stack_00000010;
  undefined4 uStack_12c0;
  
  bVar7 = 0;
  shape_edittool_cpp_paintWindowBackground_FUN_0049e590();
  if (g_UseExternalRenderer != 0) {
    if (0 < g_WindowHeight) {
      iVar4 = 0;
      do {
        iVar1 = iVar4 + 4;
        *(undefined4 *)((int)&uStack_12c0 + iVar4) =
             *(undefined4 *)((int)g_ScreenBufferArray + iVar4);
        iVar4 = iVar1;
      } while (SBORROW4(iVar1,g_WindowHeight * 4) != iVar1 + g_WindowHeight * -4 < 0);
    }
    wincore_windll_cpp_lockFrame_FUN_005b7210();
    iVar4 = g_WindowWidth * g_BitsPerPixel >> 0x1f;
    uVar2 = (int)((g_WindowWidth * g_BitsPerPixel + iVar4 * -8) - (uint)(iVar4 << 2 < 0)) >> 3;
    iVar4 = 0;
    if (0 < g_WindowHeight) {
      iVar1 = 0;
      do {
        puVar5 = *(undefined4 **)(&stack0xffffed44 + iVar1);
        puVar6 = *(undefined4 **)((int)g_ScreenBufferArray + iVar1);
        for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        }
        for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + (uint)bVar7 * -2 + 1);
          puVar6 = (undefined4 *)((int)puVar6 + (uint)bVar7 * -2 + 1);
        }
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + 4;
      } while (iVar4 < g_WindowHeight);
    }
    wincore_windll_cpp_unlockFrame_FUN_005b7250(1);
  }
  uStack_12c0 = 0x4a0e86;
  shape_edittool_cpp_CEditorTools_popWindowState_FUN_004a0ea0(in_stack_00000010);
  return;
}


// Assembly code:
// 004a0dd0: PUSH EBP
//   Label: shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
// 004a0dd1: SUB ESP,0x12c0
// 004a0dd7: CALL shape_edittool.cpp_paintWindowBackground_FUN_0049e590
//   XREF to: 0049e590 (UNCONDITIONAL_CALL)
// 004a0ddc: CMP dword ptr [0x02d03e94],0x0
//   XREF to: 02d03e94 (READ)
// 004a0de3: JZ 0x004a0e79
//   XREF to: 004a0e79 (CONDITIONAL_JUMP)
// 004a0de9: PUSH ESI
// 004a0dea: PUSH EBX
// 004a0deb: MOV ECX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004a0df1: TEST ECX,ECX
// 004a0df3: JLE 0x004a0e10
//   XREF to: 004a0e10 (CONDITIONAL_JUMP)
// 004a0df5: LEA EBX,[ECX*0x4 + 0x0]
// 004a0dfc: XOR EAX,EAX
// 004a0dfe: ADD EAX,0x4
//   Label: LAB_004a0dfe
// 004a0e01: MOV EDX,dword ptr [EAX + 0x2cf6a98]
//   XREF to: 02cf6a9c (READ)
//   XREF to: 02cf6aa0 (READ)
// 004a0e07: MOV dword ptr [ESP + EAX*0x1 + 0x4],EDX
// 004a0e0b: CMP EAX,EBX
// 004a0e0d: JL 0x004a0dfe
//   XREF to: 004a0dfe (CONDITIONAL_JUMP)
// 004a0e0f: NOP
// 004a0e10: CALL wincore_windll.cpp_lockFrame_FUN_005b7210
//   Label: LAB_004a0e10
//   XREF to: 005b7210 (UNCONDITIONAL_CALL)
// 004a0e15: MOV EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004a0e1b: MOV EBX,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 004a0e21: IMUL EDX,EBX
// 004a0e24: MOV EAX,EDX
// 004a0e26: SAR EDX,0x1f
// 004a0e29: SHL EDX,0x3
// 004a0e2c: SBB EAX,EDX
// 004a0e2e: SAR EAX,0x3
// 004a0e31: MOV ESI,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004a0e37: XOR EBX,EBX
// 004a0e39: MOV EBP,EAX
// 004a0e3b: TEST ESI,ESI
// 004a0e3d: JLE 0x004a0e6d
//   XREF to: 004a0e6d (CONDITIONAL_JUMP)
// 004a0e3f: PUSH EDI
// 004a0e40: XOR EDX,EDX
// 004a0e42: MOV ECX,EBP
//   Label: LAB_004a0e42
// 004a0e44: MOV ESI,dword ptr [ESP + EDX*0x1 + 0xc]
// 004a0e48: MOV EDI,dword ptr [EDX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (READ)
//   XREF to: 02cf6aa0 (READ)
// 004a0e4e: PUSH EDI
// 004a0e4f: MOV EAX,ECX
// 004a0e51: SHR ECX,0x2
// 004a0e54: MOVSD.REP ES:EDI,ESI
// 004a0e56: MOV CL,AL
// 004a0e58: AND CL,0x3
// 004a0e5b: MOVSB.REP ES:EDI,ESI
// 004a0e5d: POP EDI
// 004a0e5e: INC EBX
// 004a0e5f: MOV EDI,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004a0e65: ADD EDX,0x4
// 004a0e68: CMP EBX,EDI
// 004a0e6a: JL 0x004a0e42
//   XREF to: 004a0e42 (CONDITIONAL_JUMP)
// 004a0e6c: POP EDI
// 004a0e6d: PUSH 0x1
//   Label: LAB_004a0e6d
// 004a0e6f: CALL wincore_windll.cpp_unlockFrame_FUN_005b7250
//   XREF to: 005b7250 (UNCONDITIONAL_CALL)
// 004a0e74: ADD ESP,0x4
// 004a0e77: POP EBX
// 004a0e78: POP ESI
// 004a0e79: MOV EBP,dword ptr [ESP + 0x12c8]
//   Label: LAB_004a0e79
//   XREF to: Stack[0x4] (READ)
// 004a0e80: PUSH EBP
// 004a0e81: CALL shape_edittool.cpp_CEditorTools_popWindowState_FUN_004a0ea0
//   XREF to: 004a0ea0 (UNCONDITIONAL_CALL)
// 004a0e86: ADD ESP,0x4
// 004a0e89: ADD ESP,0x12c0
// 004a0e8f: POP EBP
// 004a0e90: RET
