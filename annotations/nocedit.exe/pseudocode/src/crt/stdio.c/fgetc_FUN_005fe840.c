// Name: crt_stdio.c_fgetc_FUN_005fe840
// Address: 005fe840
// Address Range: [[005fe840, 005fe90d]]
// Convention: __watcallStack
// Signature: int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
// Cross-references:
//   cockpit_ckptutil.c_loadRotatedBitmapFile_FUN_00434690 (00434690) at 004346fb [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeClothList_FUN_0040be60 (0040be60) at 0040be80 [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeDescription_FUN_0040b290 (0040b290) at 0040b2ab [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeMotionState_FUN_0040b9f0 (0040b9f0) at 0040ba0b [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializePartStatus_FUN_0040bae0 (0040bae0) at 0040bb03 [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeRules_FUN_0040c000 (0040c000) at 0040c0c2 [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeSimBox_FUN_0040bd70 (0040bd70) at 0040bd8b [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeString_FUN_0040b5c0 (0040b5c0) at 0040b5e0 [UNCONDITIONAL_CALL]
//   core_conveyor.cpp_FUN_004424a0 (004424a0) at 004424a6 [UNCONDITIONAL_CALL]
//   core_course.cpp_CCourse_load_FUN_00442580 (00442580) at 00442616 [UNCONDITIONAL_CALL]
//   core_course.cpp_OpeningCourseFile2_FUN_00442d70 (00442d70) at 00442da8 [UNCONDITIONAL_CALL]
//   core_course.cpp_OpeningCourseFileMaybe_FUN_00442bc0 (00442bc0) at 00442c22 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_backupModel_FUN_00479260 (00479260) at 004792b2 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330 (00479330) at 00479642 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0 (00476db0) at 00476e03 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00477110 (00477110) at 00477202 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_copyFile_FUN_0047c930 (0047c930) at 0047c9ca [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_skipLines_FUN_00476c80 (00476c80) at 00476c8f [UNCONDITIONAL_CALL]
//   core_ground.cpp_CGround_load_FUN_004ef030 (004ef030) at 004ef141 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_loadActor_FUN_00523990 (00523990) at 005239c2 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0 (00522eb0) at 00522ee0 [UNCONDITIONAL_CALL]
//   core_mission.cpp_FUN_00522c60 (00522c60) at 00522c66 [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052cd30 (0052cd30) at 0052cd36 [UNCONDITIONAL_CALL]
//   core_motion.cpp_CMotionController_load_FUN_0052e5d0 (0052e5d0) at 0052e613 [UNCONDITIONAL_CALL]
//   core_motion.cpp_CMotionList_load_FUN_0052cd70 (0052cd70) at 0052ce23 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_00537dd0 (00537dd0) at 00537e4f [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_OpenAndCreateWorld_FUN_00537f60 (00537f60) at 005380c0 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_ScriptErrorStartNotepad_FUN_00559f80 (00559f80) at 0055a265 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 (00578d80) at 00578fc1 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 (0057e7c0) at 0057f90e [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_00578a00 (00578a00) at 00578a06 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_UserInputCreate_FUN_0057d660 (0057d660) at 0057d8a8 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CBoneStructure_importBON_FUN_0058a3d0 (0058a3d0) at 0058a411 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CBoneStructure_readBONheader_FUN_0058a4a0 (0058a4a0) at 0058a4c1 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CBoneStructure_skipBONframe_FUN_0058abb0 (0058abb0) at 0058abd9 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModel_determinePartsFromS3D_FUN_0058f810 (0058f810) at 0058fa9e [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_005894c0 (005894c0) at 005894d9 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00589740 (00589740) at 00589758 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_005897b0 (005897b0) at 005897f0 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058b660 (0058b660) at 0058b6c9 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058b8e0 (0058b8e0) at 0058b90a [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058b9b0 (0058b9b0) at 0058b9cf [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058bc40 (0058bc40) at 0058bc61 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058c1f4 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00592690 (00592690) at 00592710 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_readNonEmptyLine_FUN_005895f0 (005895f0) at 00589609 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_viewModel_FUN_00598fc0 (00598fc0) at 00599004 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_loadStream_FUN_0059b970 (0059b970) at 0059bb44 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CSkeleton_loadStream_FUN_00599bb0 (00599bb0) at 00599c62 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_skipToEndOfLine_FUN_005996c0 (005996c0) at 005996c6 [UNCONDITIONAL_CALL]
//   crt_stdio.c_fgets_FUN_005fefd0 (005fefd0) at 005ff00b [UNCONDITIONAL_CALL]
//   crt_stdio.c_getc_helper_FUN_005fe700 (005fe700) at 005fe709 [UNCONDITIONAL_CALL]
//   engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 (004105d0) at 004107a1 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_buildPodFromResponseFile_FUN_004b7ac0 (004b7ac0) at 004b7b3b [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 (004b5a50) at 004b658d [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_extractFileWithTimestamp_FUN_004b7d50 (004b7d50) at 004b7e2b [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_synchronizeFilesToDirectory_FUN_004bc650 (004bc650) at 004bc8e4 [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_loadBitmap_FUN_004ccff0 (004ccff0) at 004cd196 [UNCONDITIONAL_CALL]
//   engine_palette.cpp_CPaletteManager_createOutputPalette_FUN_00545180 (00545180) at 005453d8 [UNCONDITIONAL_CALL]
//   shape_design.c_loadTextureData_FUN_0046b060 (0046b060) at 0046b0f0 [UNCONDITIONAL_CALL]
//   shape_design.c_readPixelRowFromFile_FUN_0046abf0 (0046abf0) at 0046ac06 [UNCONDITIONAL_CALL]
//   shape_design.c_skipLines_FUN_00459360 (00459360) at 00459376 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_eqLoad_FUN_0051cdf0 (0051cdf0) at 0051cf14 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_parseS3DFileVariant_FUN_0051adf0 (0051adf0) at 0051af88 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_parseS3DFile_FUN_0051aa60 (0051aa60) at 0051aa80 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_skipLines_FUN_00515160 (00515160) at 0051516f [UNCONDITIONAL_CALL]
// Globals:
//   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
//   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
// Function calls:
//   crt_errno.c_setErrno_FUN_00602790
//   crt_stdio.c_FillBufferAndGetChar_FUN_005fe910
//   crt_sync.c_CriticalSectionStub_FUN_00602434

#include "nocturne.h"

int __watcallStack crt_stdio_c_fgetc_FUN_005fe840(FILE *file)

{
  char *pcVar1;
  int iVar2;
  int unaff_EBX;
  uint uVar3;
  
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(file->_handle);
  pcVar1 = file->_link->__get_base;
  if (pcVar1 != &DAT_00000001) {
    if (pcVar1 != (char *)0x0) {
      uVar3 = 0xffffffff;
      goto LAB_005fe8fe;
    }
    file->_link->__get_base = &DAT_00000001;
  }
  if ((file->_flag & 1) == 0) {
    crt_errno_c_setErrno_FUN_00602790(4);
    uVar3 = 0xffffffff;
    *(byte *)&file->_flag = (byte)file->_flag | 0x20;
  }
  else {
    iVar2 = file->_cnt + -1;
    file->_cnt = iVar2;
    if (iVar2 < 0) {
      uVar3 = crt_stdio_c_FillBufferAndGetChar_FUN_005fe910(file);
    }
    else {
      uVar3 = (uint)(byte)*file->_ptr;
      file->_ptr = file->_ptr + 1;
    }
  }
  if ((file->_flag & 0x40) == 0) {
    if (uVar3 == 0xd) {
      iVar2 = file->_cnt + -1;
      file->_cnt = iVar2;
      if (iVar2 < 0) {
        uVar3 = crt_stdio_c_FillBufferAndGetChar_FUN_005fe910(file);
      }
      else {
        uVar3 = (uint)(byte)*file->_ptr;
        file->_ptr = file->_ptr + 1;
      }
    }
    if (uVar3 == 0x1a) {
      uVar3 = 0xffffffff;
      *(byte *)&file->_flag = (byte)file->_flag | 0x10;
    }
  }
  unaff_EBX = file->_handle;
LAB_005fe8fe:
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(unaff_EBX);
  return uVar3;
}


// Assembly code:
// 005fe840: PUSH EBX
//   Label: crt_stdio.c_fgetc_FUN_005fe840
// 005fe841: PUSH ESI
// 005fe842: PUSH EDI
// 005fe843: PUSH EBP
// 005fe844: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005fe848: MOV EDX,dword ptr [EBX + 0x10]
// 005fe84b: PUSH EDX
// 005fe84c: CALL dword ptr [PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684ee8 (READ)
// 005fe852: MOV ESI,dword ptr [EBX + 0x8]
// 005fe855: MOV ECX,dword ptr [ESI + 0xc]
// 005fe858: ADD ESP,0x4
// 005fe85b: CMP ECX,0x1
// 005fe85e: JZ 0x005fe879
//   XREF to: 005fe879 (CONDITIONAL_JUMP)
// 005fe860: TEST ECX,ECX
// 005fe862: JZ 0x005fe872
//   XREF to: 005fe872 (CONDITIONAL_JUMP)
// 005fe864: MOV EBP,dword ptr [EBX + 0x10]
// 005fe867: PUSH EBP
// 005fe868: MOV ESI,0xffffffff
// 005fe86d: JMP 0x005fe8fe
//   XREF to: 005fe8fe (UNCONDITIONAL_JUMP)
// 005fe872: MOV dword ptr [ESI + 0xc],0x1
//   Label: LAB_005fe872
// 005fe879: TEST byte ptr [EBX + 0xc],0x1
//   Label: LAB_005fe879
// 005fe87d: JNZ 0x005fe899
//   XREF to: 005fe899 (CONDITIONAL_JUMP)
// 005fe87f: PUSH 0x4
// 005fe881: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 005fe886: MOV DL,byte ptr [EBX + 0xc]
// 005fe889: MOV ESI,0xffffffff
// 005fe88e: OR DL,0x20
// 005fe891: ADD ESP,0x4
// 005fe894: MOV byte ptr [EBX + 0xc],DL
// 005fe897: JMP 0x005fe8ba
//   XREF to: 005fe8ba (UNCONDITIONAL_JUMP)
// 005fe899: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_005fe899
// 005fe89c: DEC EAX
// 005fe89d: MOV dword ptr [EBX + 0x4],EAX
// 005fe8a0: TEST EAX,EAX
// 005fe8a2: JGE 0x005fe8b1
//   XREF to: 005fe8b1 (CONDITIONAL_JUMP)
// 005fe8a4: PUSH EBX
// 005fe8a5: CALL crt_stdio.c_FillBufferAndGetChar_FUN_005fe910
//   XREF to: 005fe910 (UNCONDITIONAL_CALL)
// 005fe8aa: ADD ESP,0x4
// 005fe8ad: MOV ESI,EAX
// 005fe8af: JMP 0x005fe8ba
//   XREF to: 005fe8ba (UNCONDITIONAL_JUMP)
// 005fe8b1: MOV EAX,dword ptr [EBX]
//   Label: LAB_005fe8b1
// 005fe8b3: INC EAX
// 005fe8b4: MOVZX ESI,byte ptr [EAX + -0x1]
// 005fe8b8: MOV dword ptr [EBX],EAX
// 005fe8ba: TEST byte ptr [EBX + 0xc],0x40
//   Label: LAB_005fe8ba
// 005fe8be: JNZ 0x005fe8fa
//   XREF to: 005fe8fa (CONDITIONAL_JUMP)
// 005fe8c0: CMP ESI,0xd
// 005fe8c3: JNZ 0x005fe8e7
//   XREF to: 005fe8e7 (CONDITIONAL_JUMP)
// 005fe8c5: MOV ECX,dword ptr [EBX + 0x4]
// 005fe8c8: DEC ECX
// 005fe8c9: MOV dword ptr [EBX + 0x4],ECX
// 005fe8cc: TEST ECX,ECX
// 005fe8ce: JGE 0x005fe8dd
//   XREF to: 005fe8dd (CONDITIONAL_JUMP)
// 005fe8d0: PUSH EBX
// 005fe8d1: CALL crt_stdio.c_FillBufferAndGetChar_FUN_005fe910
//   XREF to: 005fe910 (UNCONDITIONAL_CALL)
// 005fe8d6: ADD ESP,0x4
// 005fe8d9: MOV ESI,EAX
// 005fe8db: JMP 0x005fe8e7
//   XREF to: 005fe8e7 (UNCONDITIONAL_JUMP)
// 005fe8dd: MOV EAX,dword ptr [EBX]
//   Label: LAB_005fe8dd
// 005fe8df: MOV DL,byte ptr [EAX]
// 005fe8e1: INC EAX
// 005fe8e2: MOVZX ESI,DL
// 005fe8e5: MOV dword ptr [EBX],EAX
// 005fe8e7: CMP ESI,0x1a
//   Label: LAB_005fe8e7
// 005fe8ea: JNZ 0x005fe8fa
//   XREF to: 005fe8fa (CONDITIONAL_JUMP)
// 005fe8ec: MOV CL,byte ptr [EBX + 0xc]
// 005fe8ef: OR CL,0x10
// 005fe8f2: MOV ESI,0xffffffff
// 005fe8f7: MOV byte ptr [EBX + 0xc],CL
// 005fe8fa: MOV EDI,dword ptr [EBX + 0x10]
//   Label: LAB_005fe8fa
// 005fe8fd: PUSH EDI
// 005fe8fe: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   Label: LAB_005fe8fe
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 005fe904: ADD ESP,0x4
// 005fe907: MOV EAX,ESI
// 005fe909: POP EBP
// 005fe90a: POP EDI
// 005fe90b: POP ESI
// 005fe90c: POP EBX
// 005fe90d: RET
