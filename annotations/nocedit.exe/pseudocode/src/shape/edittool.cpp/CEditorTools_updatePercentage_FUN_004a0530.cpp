// Name: shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
// Address: 004a0530
// Address Range: [[004a0530, 004a088c]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530(CEditorTools * this_ptr, float progress_min, float progress_max)
// Cross-references:
//   core_course.cpp_CCourse_importMatrices_FUN_00442ea0 (00442ea0) at 00442ee4 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0 (0047b1e0) at 0047b5cb [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_weldAndRemoveUnusedVertices_FUN_0047ada0 (0047ada0) at 0047b081 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_consolidateTriList_FUN_00494450 (00494450) at 004945c8 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_crunch_FUN_00495310 (00495310) at 0049575a [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0 (004947a0) at 00494d50 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053eb40 (0053eb40) at 0053ec01 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_FUN_0053fd00 (0053fd00) at 005400e0 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0 (00576da0) at 00576f45 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 (0057e7c0) at 0057f55f [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModel_determinePartsFromS3D_FUN_0058f810 (0058f810) at 00590ed5 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00592690 (00592690) at 00592c26 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 (004b4220) at 004b4ccd [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bbe32 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40 (004b9f40) at 004ba0e6 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50 (004bca50) at 004bcaef [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b88ff [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 (004b5a50) at 004b64fb [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_copyFileWithProgress_FUN_004b2030 (004b2030) at 004b21ab [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPodFile_verifyChecksum_FUN_00550230 (00550230) at 00550499 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430 (004a0430) at 004a04f5 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_buildSpatialGrid_FUN_00516620 (00516620) at 005168ba [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_computeAllEdgeCollapseCosts_FUN_00519710 (00519710) at 00519789 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_replayLodGeneration_FUN_005173f0 (005173f0) at 005174b4 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_testSoundFiles_FUN_005ad5c0 (005ad5c0) at 005ad8f2 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_edittool_cpp_006232ee
//   TerminatedCString s_CEditorTools_updatePerce_00623304
//   TerminatedCString s_d_complete_0062333b
//   TerminatedCString s_d_02d_elapsed_approximat_00623349
//   double g_PercentageMultiplier = 100
//   double g_RoundingOffset = 0.5
//   double g_TimeScalingFactor = 8.47710503472222E-7
//   double g_TimeDisplayThreshold = 5
//   CBitFont* g_EditorFont
//   int g_WindowStackCount
//   undefined4 DAT_02cf1ebc
//   undefined4 DAT_02cf1ec0
//   undefined4 DAT_02cf1ec4
//   int g_FontCharacterWidth
//   int g_WindowStatusTextColor
//   int g_ProgressBarBackgroundColor
//   int g_ProgressBarFillColor
//   int g_ProgressBarBorderColor
//   int g_ProgressBarTextColor
//   int g_ClipLeft
//   int g_ClipTop
//   int g_ClipRight
//   int g_ClipBottom
//   int g_ActiveRenderColor
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_math.c_round_FUN_005fe6b0
//   engine_2d.c_drawHLine_FUN_00402ee0
//   engine_2d.c_drawVLine_FUN_00402ff0
//   engine_2d.c_fillRectColor_FUN_00403170
//   engine_2d.c_fillRectWithBorder_FUN_00403200
//   engine_3d.c_setRenderAlpha_FUN_00406d80
//   engine_font.cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004cdf30
//   shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_winrun.cpp_getTime_FUN_005f2dc0

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
          (CEditorTools *this_ptr,float progress_min,float progress_max)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int x;
  undefined4 in_EAX;
  undefined2 uVar6;
  int iVar4;
  float fVar5;
  int y2;
  undefined2 extraout_var;
  undefined4 in_EDX;
  undefined4 extraout_EDX;
  undefined4 uVar7;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  int x1;
  int unaff_EBP;
  undefined4 unaff_ESI;
  int x2;
  float10 fVar8;
  double dVar9;
  int unaff_retaddr;
  int iStack00000010;
  int iStack00000014;
  
  uVar6 = (undefined2)((uint)in_EAX >> 0x10);
  if (g_WindowStackCount < 1) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0x742;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CEditorTools::updatePercentageWindow - no window open!");
    in_EDX = extraout_EDX_01;
    uVar6 = extraout_var;
  }
  fVar5 = (float)CONCAT22(uVar6,(ushort)(0.0 < progress_max) << 8 | (ushort)NAN(progress_max) << 10
                                | (ushort)(progress_max == 0.0) << 0xe);
  if (0.0 < progress_max) {
    if (progress_min < 0.0) {
      progress_min = 0.0;
    }
    fVar5 = (float)CONCAT22(uVar6,(ushort)(progress_min < progress_max) << 8 |
                                  (ushort)(NAN(progress_min) || NAN(progress_max)) << 10 |
                                  (ushort)(progress_min == progress_max) << 0xe);
    if (progress_min >= progress_max && (progress_min == progress_max) == 0) {
      fVar5 = progress_max;
    }
  }
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(in_EDX,fVar5));
  iVar4 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  if ((unaff_EBP != g_WindowStack[g_WindowStackCount + -1].progress_percentage) ||
     (0x47ffff < iVar4 - g_WindowStack[g_WindowStackCount + -1].progress_timestamp)) {
    shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80(this_ptr);
    engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
    engine_font_cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004cdf30
              (g_EditorFont,g_ClipLeft,g_ClipRight,g_ClipTop,g_WindowStatusTextColor,-1,
               "%d%% complete",unaff_ESI);
    iVar3 = g_ClipRight;
    iVar4 = g_ClipLeft;
    fVar5 = (float)(g_FontCharacterWidth * 2 + g_ClipTop);
    y2 = g_FontCharacterWidth * 4 + g_ClipTop + -1;
    x2 = g_ClipRight + -1;
    x1 = g_ClipLeft + 1;
    engine_2d_c_fillRectWithBorder_FUN_00403200
              (x1,(int)fVar5 + 1,x2,y2,g_ProgressBarBackgroundColor,g_ProgressBarBorderColor);
    x = g_ActiveRenderColor;
    g_ActiveRenderColor = g_ProgressBarTextColor;
    engine_2d_c_drawHLine_FUN_00402ee0(iVar4,(int)fVar5,x2);
    engine_2d_c_drawVLine_FUN_00402ff0(x,(int)progress_max,unaff_retaddr);
    iStack00000010 = (x2 - x1) + 1;
    fVar8 = (float10)iStack00000010 * (float10)(float)x + (float10)g_RoundingOffset;
    g_ActiveRenderColor = y2;
    dVar9 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,iStack00000010));
    uVar7 = (undefined4)((ulonglong)dVar9 >> 0x20);
    iStack00000014 = (int)ROUND(fVar8);
    iVar4 = iStack00000014 + x1;
    if (x1 < iVar4) {
      if (x2 <= iVar4) {
        iVar4 = iVar3 + -2;
      }
      engine_2d_c_fillRectColor_FUN_00403170
                (x1,(int)fVar5 + 1,iVar4,(int)fVar5,g_ProgressBarFillColor);
      uVar7 = extraout_EDX_00;
    }
    if (0 < iStack00000010) {
      iVar4 = (int)fVar5 - g_WindowStack[g_WindowStackCount + -1].progress_start_time;
      fVar1 = (float)iVar4 * (float)g_TimeScalingFactor;
      fVar2 = (float)g_TimeDisplayThreshold;
      if (fVar1 >= fVar2 && (fVar1 == fVar2) == 0) {
        fVar8 = (((float10)progress_max - (float10)fVar5) * (float10)fVar1) / (float10)fVar5 +
                (float10)g_RoundingOffset;
        crt_math_c_round_FUN_005fe6b0
                  ((double)CONCAT44(uVar7,CONCAT22((short)((uint)iVar4 >> 0x10),
                                                   (ushort)(fVar1 < fVar2) << 8 |
                                                   (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
                                                   (ushort)(fVar1 == fVar2) << 0xe)));
        iVar4 = (int)ROUND(fVar8);
        if (0 < iVar4) {
          fVar8 = (float10)fVar1 + (float10)g_RoundingOffset;
          dVar9 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar4 % 0x3c,iVar4 / 0x3c));
          progress_max = (float)((ulonglong)dVar9 >> 0x20);
          engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
          engine_font_cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004cdf30
                    (g_EditorFont,g_ClipLeft,g_ClipRight,g_ClipBottom - g_FontCharacterWidth,
                     g_WindowStatusTextColor,-1,"%d:%02d elapsed, approximately %d:%02d remaining",
                     (int)ROUND(fVar8) / 0x3c,unaff_retaddr,iVar4 / 0x3c,iStack00000010);
        }
      }
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    iVar4 = g_WindowStackCount + -1;
    g_WindowStack[iVar4].progress_percentage = iStack00000014;
    g_WindowStack[iVar4].progress_timestamp = (int)progress_max;
  }
  return;
}


// Assembly code:
// 004a0530: PUSH EBX
//   Label: shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
// 004a0531: PUSH ESI
// 004a0532: PUSH EDI
// 004a0533: PUSH EBP
// 004a0534: MOV EBP,ESP
// 004a0536: SUB ESP,0x30
// 004a0539: AND ESP,0xfffffff8
// 004a053c: CMP dword ptr [0x02cf1cdc],0x1
//   XREF to: 02cf1cdc (READ)
// 004a0543: JL 0x004a0865
//   XREF to: 004a0865 (CONDITIONAL_JUMP)
// 004a0549: FLD float ptr [EBP + 0x1c]
//   Label: LAB_004a0549
//   XREF to: Stack[0xc] (READ)
// 004a054c: XOR ESI,ESI
// 004a054e: FLDZ
// 004a0550: MOV dword ptr [ESP + 0xc],ESI
//   XREF to: Stack[-0x34] (WRITE)
// 004a0554: FCOMPP
// 004a0556: FNSTSW AX
// 004a0558: SAHF
// 004a0559: JNC 0x004a0585
//   XREF to: 004a0585 (CONDITIONAL_JUMP)
// 004a055b: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004a055e: FLDZ
// 004a0560: FCOMPP
// 004a0562: FNSTSW AX
// 004a0564: SAHF
// 004a0565: JBE 0x004a056a
//   XREF to: 004a056a (CONDITIONAL_JUMP)
// 004a0567: MOV dword ptr [EBP + 0x18],ESI
//   XREF to: Stack[0x8] (WRITE)
// 004a056a: FLD float ptr [EBP + 0x18]
//   Label: LAB_004a056a
//   XREF to: Stack[0x8] (READ)
// 004a056d: FCOMP float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004a0570: FNSTSW AX
// 004a0572: SAHF
// 004a0573: JBE 0x004a057b
//   XREF to: 004a057b (CONDITIONAL_JUMP)
// 004a0575: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004a0578: MOV dword ptr [EBP + 0x18],EAX
//   XREF to: Stack[0x8] (WRITE)
// 004a057b: FLD float ptr [EBP + 0x18]
//   Label: LAB_004a057b
//   XREF to: Stack[0x8] (READ)
// 004a057e: FDIV float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004a0581: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x34] (WRITE)
// 004a0585: FLD float ptr [ESP + 0xc]
//   Label: LAB_004a0585
//   XREF to: Stack[-0x34] (READ)
// 004a0589: FMUL double ptr [0x0062337e]
//   XREF to: 0062337e (READ)
// 004a058f: FADD double ptr [0x00623386]
//   XREF to: 00623386 (READ)
// 004a0595: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004a059a: FISTP dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (WRITE)
// 004a059e: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 004a05a3: MOV ESI,dword ptr [0x02cf1cdc]
//   XREF to: 02cf1cdc (READ)
// 004a05a9: MOV EBX,EAX
// 004a05ab: DEC ESI
// 004a05ac: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004a05b0: MOV EAX,ESI
// 004a05b2: SHL EAX,0x4
// 004a05b5: SUB EAX,ESI
// 004a05b7: SHL EAX,0x2
// 004a05ba: ADD ESI,EAX
// 004a05bc: SHL ESI,0x3
// 004a05bf: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (READ)
// 004a05c3: CMP EAX,dword ptr [ESI + 0x2cf1ec0]
//   XREF to: 02cf1ec0 (DATA)
// 004a05c9: JNZ 0x004a05dd
//   XREF to: 004a05dd (CONDITIONAL_JUMP)
// 004a05cb: SUB EBX,dword ptr [ESI + 0x2cf1ec4]
//   XREF to: 02cf1ec4 (DATA)
// 004a05d1: CMP EBX,0x480000
//   XREF to: 00480000 (DATA)
// 004a05d7: JL 0x004a085e
//   XREF to: 004a085e (CONDITIONAL_JUMP)
// 004a05dd: MOV EBX,dword ptr [EBP + 0x14]
//   Label: LAB_004a05dd
//   XREF to: Stack[0x4] (READ)
// 004a05e0: PUSH EBX
// 004a05e1: CALL shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80
//   XREF to: 004a0f80 (UNCONDITIONAL_CALL)
// 004a05e6: ADD ESP,0x4
// 004a05e9: PUSH 0xffff
// 004a05ee: CALL engine_3d.c_setRenderAlpha_FUN_00406d80
//   XREF to: 00406d80 (UNCONDITIONAL_CALL)
// 004a05f3: ADD ESP,0x4
// 004a05f6: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (READ)
// 004a05fa: PUSH ESI
// 004a05fb: PUSH 0x62333b
//   XREF to: 0062333b (DATA)
// 004a0600: PUSH -0x1
// 004a0602: MOV EDI,dword ptr [0x02cf2aa8]
//   XREF to: 02cf2aa8 (READ)
// 004a0608: PUSH EDI
// 004a0609: MOV EAX,[0x02d0255c]
//   XREF to: 02d0255c (READ)
// 004a060e: PUSH EAX
// 004a060f: MOV EDX,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 004a0615: PUSH EDX
// 004a0616: MOV ECX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 004a061c: PUSH ECX
// 004a061d: MOV EBX,dword ptr [0x02cf1cd0]
//   XREF to: 02cf1cd0 (READ)
// 004a0623: PUSH EBX
// 004a0624: CALL engine_font.cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004cdf30
//   XREF to: 004cdf30 (UNCONDITIONAL_CALL)
// 004a0629: MOV EAX,[0x02cf266c]
//   XREF to: 02cf266c (READ)
// 004a062e: MOV EDI,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 004a0634: ADD EAX,EAX
// 004a0636: ADD EAX,EDI
// 004a0638: LEA EDI,[EAX + 0x1]
// 004a063b: MOV EAX,[0x02cf266c]
//   XREF to: 02cf266c (READ)
// 004a0640: MOV EDX,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 004a0646: SHL EAX,0x2
// 004a0649: ADD ESP,0x20
// 004a064c: ADD EAX,EDX
// 004a064e: MOV ECX,dword ptr [0x02cf2abc]
//   XREF to: 02cf2abc (READ)
// 004a0654: DEC EAX
// 004a0655: PUSH ECX
// 004a0656: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004a065a: MOV EAX,[0x02cf2ab4]
//   XREF to: 02cf2ab4 (READ)
// 004a065f: PUSH EAX
// 004a0660: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x20] (READ)
// 004a0664: MOV ESI,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 004a066a: PUSH EDX
// 004a066b: DEC ESI
// 004a066c: PUSH ESI
// 004a066d: MOV EBX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 004a0673: PUSH EDI
// 004a0674: INC EBX
// 004a0675: PUSH EBX
// 004a0676: CALL engine_2d.c_fillRectWithBorder_FUN_00403200
//   XREF to: 00403200 (UNCONDITIONAL_CALL)
// 004a067b: MOV EAX,[0x02d02570]
//   XREF to: 02d02570 (READ)
// 004a0680: ADD ESP,0x18
// 004a0683: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 004a0687: MOV EAX,[0x02cf2ac0]
//   XREF to: 02cf2ac0 (READ)
// 004a068c: PUSH ESI
// 004a068d: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 004a0692: LEA EAX,[EDI + -0x1]
// 004a0695: PUSH EAX
// 004a0696: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004a069a: LEA EAX,[EBX + -0x1]
// 004a069d: PUSH EAX
// 004a069e: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 004a06a2: CALL engine_2d.c_drawHLine_FUN_00402ee0
//   XREF to: 00402ee0 (UNCONDITIONAL_CALL)
// 004a06a7: ADD ESP,0xc
// 004a06aa: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x20] (READ)
// 004a06ae: PUSH EDX
// 004a06af: MOV ECX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x14] (READ)
// 004a06b3: PUSH ECX
// 004a06b4: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x30] (READ)
// 004a06b8: PUSH EAX
// 004a06b9: CALL engine_2d.c_drawVLine_FUN_00402ff0
//   XREF to: 00402ff0 (UNCONDITIONAL_CALL)
// 004a06be: ADD ESP,0xc
// 004a06c1: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x2c] (READ)
// 004a06c5: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 004a06ca: MOV EAX,ESI
// 004a06cc: SUB EAX,EBX
// 004a06ce: INC EAX
// 004a06cf: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004a06d3: FILD dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 004a06d7: FMUL float ptr [ESP + 0xc]
//   XREF to: Stack[-0x34] (READ)
// 004a06db: FADD double ptr [0x00623386]
//   XREF to: 00623386 (READ)
// 004a06e1: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004a06e6: FISTP dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (WRITE)
// 004a06ea: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 004a06ee: ADD EAX,EBX
// 004a06f0: CMP EAX,EBX
// 004a06f2: JLE 0x004a0712
//   XREF to: 004a0712 (CONDITIONAL_JUMP)
// 004a06f4: CMP EAX,ESI
// 004a06f6: JL 0x004a06fb
//   XREF to: 004a06fb (CONDITIONAL_JUMP)
// 004a06f8: LEA EAX,[ESI + -0x1]
// 004a06fb: MOV EDX,dword ptr [0x02cf2ab8]
//   Label: LAB_004a06fb
//   XREF to: 02cf2ab8 (READ)
// 004a0701: PUSH EDX
// 004a0702: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x20] (READ)
// 004a0706: PUSH ECX
// 004a0707: PUSH EAX
// 004a0708: PUSH EDI
// 004a0709: PUSH EBX
// 004a070a: CALL engine_2d.c_fillRectColor_FUN_00403170
//   XREF to: 00403170 (UNCONDITIONAL_CALL)
// 004a070f: ADD ESP,0x14
// 004a0712: CMP dword ptr [ESP + 0x24],0x0
//   Label: LAB_004a0712
//   XREF to: Stack[-0x1c] (READ)
// 004a0717: JLE 0x004a082e
//   XREF to: 004a082e (CONDITIONAL_JUMP)
// 004a071d: MOV EAX,[0x02cf1cdc]
//   XREF to: 02cf1cdc (READ)
// 004a0722: LEA EBX,[EAX + -0x1]
// 004a0725: MOV EAX,EBX
// 004a0727: SHL EAX,0x4
// 004a072a: SUB EAX,EBX
// 004a072c: SHL EAX,0x2
// 004a072f: ADD EAX,EBX
// 004a0731: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x24] (READ)
// 004a0735: MOV ESI,dword ptr [EAX*0x8 + 0x2cf1ebc]
//   XREF to: 02cf1ebc (DATA)
// 004a073c: MOV EAX,EBX
// 004a073e: SUB EAX,ESI
// 004a0740: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004a0744: FILD dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 004a0748: FMUL double ptr [0x0062338e]
//   XREF to: 0062338e (READ)
// 004a074e: FST float ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (WRITE)
// 004a0752: FST double ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 004a0755: FCOMP double ptr [0x00623396]
//   XREF to: 00623396 (READ)
// 004a075b: FNSTSW AX
// 004a075d: SAHF
// 004a075e: JBE 0x004a082e
//   XREF to: 004a082e (CONDITIONAL_JUMP)
// 004a0764: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004a0767: FLD float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004a076a: FSUB ST0,ST1
// 004a076c: FMUL float ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (READ)
// 004a0770: FDIVRP
// 004a0772: FADD double ptr [0x00623386]
//   XREF to: 00623386 (READ)
// 004a0778: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004a077d: FISTP dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (WRITE)
// 004a0781: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (READ)
// 004a0785: TEST EDI,EDI
// 004a0787: JLE 0x004a082e
//   XREF to: 004a082e (CONDITIONAL_JUMP)
// 004a078d: MOV EBX,0x3c
// 004a0792: MOV EDX,EDI
// 004a0794: MOV EAX,EDI
// 004a0796: SAR EDX,0x1f
// 004a0799: IDIV EBX
// 004a079b: MOV ESI,EAX
// 004a079d: MOV EDX,EDI
// 004a079f: MOV EAX,EDI
// 004a07a1: SAR EDX,0x1f
// 004a07a4: IDIV EBX
// 004a07a6: FLD double ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 004a07a9: FADD double ptr [0x00623386]
//   XREF to: 00623386 (READ)
// 004a07af: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004a07b4: FISTP dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (WRITE)
// 004a07b8: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (READ)
// 004a07bc: MOV dword ptr [ESP + 0x28],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 004a07c0: MOV EDX,EAX
// 004a07c2: SAR EDX,0x1f
// 004a07c5: IDIV EBX
// 004a07c7: MOV EBX,EAX
// 004a07c9: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x28] (READ)
// 004a07cd: MOV EDX,EAX
// 004a07cf: MOV EDI,0x3c
// 004a07d4: SAR EDX,0x1f
// 004a07d7: IDIV EDI
// 004a07d9: PUSH 0xffff
// 004a07de: MOV dword ptr [ESP + 0x1c],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 004a07e2: CALL engine_3d.c_setRenderAlpha_FUN_00406d80
//   XREF to: 00406d80 (UNCONDITIONAL_CALL)
// 004a07e7: ADD ESP,0x4
// 004a07ea: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (READ)
// 004a07ee: PUSH EAX
// 004a07ef: PUSH ESI
// 004a07f0: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x28] (READ)
// 004a07f4: PUSH EDX
// 004a07f5: PUSH EBX
// 004a07f6: PUSH 0x623349
//   XREF to: 00623349 (DATA)
// 004a07fb: MOV ECX,dword ptr [0x02cf2aa8]
//   XREF to: 02cf2aa8 (READ)
// 004a0801: PUSH -0x1
// 004a0803: MOV EAX,[0x02d02564]
//   XREF to: 02d02564 (READ)
// 004a0808: MOV EBX,dword ptr [0x02cf266c]
//   XREF to: 02cf266c (READ)
// 004a080e: PUSH ECX
// 004a080f: SUB EAX,EBX
// 004a0811: PUSH EAX
// 004a0812: MOV ESI,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 004a0818: PUSH ESI
// 004a0819: MOV EDI,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 004a081f: PUSH EDI
// 004a0820: MOV EAX,[0x02cf1cd0]
//   XREF to: 02cf1cd0 (READ)
// 004a0825: PUSH EAX
// 004a0826: CALL engine_font.cpp_CBitFont_drawTextCenterInBoundsFV_FUN_004cdf30
//   XREF to: 004cdf30 (UNCONDITIONAL_CALL)
// 004a082b: ADD ESP,0x2c
// 004a082e: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   Label: LAB_004a082e
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 004a0833: MOV EAX,[0x02cf1cdc]
//   XREF to: 02cf1cdc (READ)
// 004a0838: LEA EBX,[EAX + -0x1]
// 004a083b: MOV EAX,EBX
// 004a083d: SHL EAX,0x4
// 004a0840: SUB EAX,EBX
// 004a0842: SHL EAX,0x2
// 004a0845: ADD EBX,EAX
// 004a0847: SHL EBX,0x3
// 004a084a: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (READ)
// 004a084e: MOV dword ptr [EBX + 0x2cf1ec0],EAX
//   XREF to: 02cf1ec0 (DATA)
// 004a0854: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x24] (READ)
// 004a0858: MOV dword ptr [EBX + 0x2cf1ec4],EAX
//   XREF to: 02cf1ec4 (DATA)
// 004a085e: MOV ESP,EBP
//   Label: LAB_004a085e
// 004a0860: POP EBP
// 004a0861: POP EDI
// 004a0862: POP ESI
// 004a0863: POP EBX
// 004a0864: RET
// 004a0865: MOV ECX,0x6232ee
//   Label: LAB_004a0865
//   XREF to: 006232ee (PARAM)
// 004a086a: MOV EBX,0x742
// 004a086f: PUSH 0x623304
//   XREF to: 00623304 (DATA)
// 004a0874: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004a087a: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 004a0880: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004a0885: ADD ESP,0x4
// 004a0888: JMP 0x004a0549
//   XREF to: 004a0549 (UNCONDITIONAL_JUMP)
