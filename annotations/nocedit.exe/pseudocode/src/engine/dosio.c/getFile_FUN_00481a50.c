// Name: engine_dosio.c_getFile_FUN_00481a50
// Address: 00481a50
// Address Range: [[00481a50, 00481b4c]]
// Convention: __cdecl
// Signature: FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
// Cross-references:
//   cockpit_ckptutil.c_loadACTPaletteFile_FUN_00431ac0 (00431ac0) at 00431b61 [UNCONDITIONAL_CALL]
//   cockpit_ckptutil.c_loadEdgeListFile_FUN_004331f0 (004331f0) at 0043320a [UNCONDITIONAL_CALL]
//   cockpit_ckptutil.c_loadRotatedBitmapFile_FUN_00434690 (00434690) at 004346c1 [UNCONDITIONAL_CALL]
//   cockpit_ckptutil.c_readBitmapFile_FUN_00431870 (00431870) at 00431896 [UNCONDITIONAL_CALL]
//   cockpit_ckptutil.c_saveEdgeListFile_FUN_00433480 (00433480) at 004334a5 [UNCONDITIONAL_CALL]
//   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_0054b860 (0054b860) at 0054b88b [UNCONDITIONAL_CALL]
//   cockpit_pkbitmap.cpp_loadPBGFile_FUN_0054bb40 (0054bb40) at 0054bb6a [UNCONDITIONAL_CALL]
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadJoinedRAW_FUN_0054bf40 (0054bf40) at 0054bf8a [UNCONDITIONAL_CALL]
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_0054c1e0 (0054c1e0) at 0054c1ff [UNCONDITIONAL_CALL]
//   core_cloth.cpp_CCloth_load_FUN_00438cf0 (00438cf0) at 00438d13 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_ParseClothFile_FUN_00439260 (00439260) at 00439277 [UNCONDITIONAL_CALL]
//   core_course.cpp_CCourse_load_FUN_00442580 (00442580) at 004425a3 [UNCONDITIONAL_CALL]
//   core_course.cpp_CCourse_save_FUN_00442a90 (00442a90) at 00442aa7 [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044f3e0 (0044f3e0) at 0044f480 [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_004529b0 (004529b0) at 00452a38 [UNCONDITIONAL_CALL]
//   core_dfilter.cpp_CDemonFilter_load_FUN_004702f0 (004702f0) at 0047030a [UNCONDITIONAL_CALL]
//   core_dfilter.cpp_CDemonFilter_save_FUN_00470510 (00470510) at 00470527 [UNCONDITIONAL_CALL]
//   core_dfilter.cpp_CFilterFX_openMovie_FUN_00470730 (00470730) at 00470804 [UNCONDITIONAL_CALL]
//   core_dimage.cpp_CDemonImage_load_FUN_00471ad0 (00471ad0) at 00471b13 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_export_FUN_00478e10 (00478e10) at 00479024 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330 (00479330) at 00479568 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0 (00476db0) at 00476e42 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00494de0 (00494de0) at 00494e03 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_save_FUN_00495040 (00495040) at 00495051 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 (004e12b0) at 004e1424 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_openSomething_FUN_004e2910 (004e2910) at 004e2b51 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004dabe2 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_rollCredits_FUN_004e4010 (004e4010) at 004e4082 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_saveGame_FUN_004e0cd0 (004e0cd0) at 004e0da6 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0 (004e1cb0) at 004e2188 [UNCONDITIONAL_CALL]
//   core_game.cpp_FUN_004d7810 (004d7810) at 004d78d2 [UNCONDITIONAL_CALL]
//   core_game.cpp_FUN_004e1c30 (004e1c30) at 004e1c69 [UNCONDITIONAL_CALL]
//   core_game.cpp_SaveRelated_FUN_004dcee0 (004dcee0) at 004dd585 [UNCONDITIONAL_CALL]
//   core_ground.cpp_CGround_load_FUN_004ef030 (004ef030) at 004ef24c [UNCONDITIONAL_CALL]
//   core_ground.cpp_openFileWithExtension_FUN_004eebc0 (004eebc0) at 004eec5a [UNCONDITIONAL_CALL]
//   core_inv.cpp_loadInventory_FUN_004fd220 (004fd220) at 004fd484 [UNCONDITIONAL_CALL]
//   core_main.c_finalizeGameSystems_FUN_00508570 (00508570) at 0050859b [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_load_FUN_00522d90 (00522d90) at 00522da2 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_save_FUN_00522e30 (00522e30) at 00522e53 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_00537dd0 (00537dd0) at 00537dfb [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_OpenAndCreateWorld_FUN_00537f60 (00537f60) at 00538066 [UNCONDITIONAL_CALL]
//   core_procedur.cpp_CreateProceduralWaterFrame_FUN_005542b0 (005542b0) at 00554489 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_ScriptErrorStartNotepad_FUN_00559f80 (00559f80) at 0055a040 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_dbLoad_FUN_005603c0 (005603c0) at 00560413 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00566180 (00566180) at 005661ad [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_load_FUN_00569410 (00569410) at 00569d0f [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CDemonSet_refreshThumbs_FUN_00575b40 (00575b40) at 00575b55 [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CDemonSet_writeThumbs_FUN_00575e40 (00575e40) at 00575e56 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0 (00576da0) at 00576fc9 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_ExportSomething_FUN_0057a0c0 (0057a0c0) at 0057a132 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00584e70 (00584e70) at 00584fdc [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_save_FUN_0057a2a0 (0057a2a0) at 0057a2ca [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 (0057e7c0) at 0057f8c2 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_OpenSomethingBackdropThumbs_FUN_005769a0 (005769a0) at 00576ac9 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_UserInputCreate_FUN_0057d660 (0057d660) at 0057d7be [UNCONDITIONAL_CALL]
//   core_setedit.cpp_WriteActBackdrop_FUN_0057ce80 (0057ce80) at 0057d1ab [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModel_save_FUN_0058f040 (0058f040) at 0058f0aa [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CSkeleton_save_FUN_0058b2c0 (0058b2c0) at 0058b32a [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_load_FUN_0059b8d0 (0059b8d0) at 0059b908 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CSkeleton_load_FUN_00599b10 (00599b10) at 00599b48 [UNCONDITIONAL_CALL]
//   core_texlist.cpp_CTextureList_load_FUN_005dbe00 (005dbe00) at 005dbe88 [UNCONDITIONAL_CALL]
//   core_texlist.cpp_CTextureList_save_FUN_005dc0d0 (005dc0d0) at 005dc158 [UNCONDITIONAL_CALL]
//   engine_2d.c_initGraphicsSystem_FUN_00401010 (00401010) at 004010bd [UNCONDITIONAL_CALL]
//   engine_2d.c_loadOrBuildColorMap_FUN_00402930 (00402930) at 004029b8 [UNCONDITIONAL_CALL]
//   engine_2d.c_loadPaletteFile_FUN_004015a0 (004015a0) at 004015b0 [UNCONDITIONAL_CALL]
//   engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 (004105d0) at 0041076e [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_extractTexture_FUN_004b53e0 (004b53e0) at 004b548f [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_loadBitmap_FUN_004ccff0 (004ccff0) at 004cd181 [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_loadFromFile_FUN_004cd2c0 (004cd2c0) at 004cd2e2 [UNCONDITIONAL_CALL]
//   engine_model.c_loadModelChunk_FUN_00528970 (00528970) at 0052898a [UNCONDITIONAL_CALL]
//   engine_model.c_loadModelFile_FUN_00527ec0 (00527ec0) at 00527f44 [UNCONDITIONAL_CALL]
//   engine_palette.cpp_CPaletteManager_createOutputPalette_FUN_00545180 (00545180) at 005452d1 [UNCONDITIONAL_CALL]
//   engine_texture.cpp_CTextureCache_loadTexture_FUN_005dcc00 (005dcc00) at 005dcf07 [UNCONDITIONAL_CALL]
//   shape_design.c_centerKeyframeModels_FUN_004681a0 (004681a0) at 0046829a [UNCONDITIONAL_CALL]
//   shape_design.c_cramTextureList_FUN_0046bb80 (0046bb80) at 0046dea2 [UNCONDITIONAL_CALL]
//   shape_design.c_createKeyframeModel_FUN_00468320 (00468320) at 00468512 [UNCONDITIONAL_CALL]
//   shape_design.c_exportModelToBIN_FUN_0045aa80 (0045aa80) at 0045aaa7 [UNCONDITIONAL_CALL]
//   shape_design.c_exportModelToMDL_FUN_00459e80 (00459e80) at 00459ec1 [UNCONDITIONAL_CALL]
//   shape_design.c_exportVertexListFile_FUN_0045a610 (0045a610) at 0045a62e [UNCONDITIONAL_CALL]
//   shape_design.c_loadModelBinary_FUN_00458170 (00458170) at 00458193 [UNCONDITIONAL_CALL]
//   shape_design.c_loadModelFile_FUN_00458ac0 (00458ac0) at 00458c60 [UNCONDITIONAL_CALL]
//   shape_design.c_loadS3DModelFile_FUN_004593a0 (004593a0) at 004593c3 [UNCONDITIONAL_CALL]
//   shape_design.c_loadTextureData_FUN_0046b060 (0046b060) at 0046b085 [UNCONDITIONAL_CALL]
//   shape_design.c_showHelpFile_FUN_00457f00 (00457f00) at 00457f28 [UNCONDITIONAL_CALL]
//   shape_design.c_simpleTexture_FUN_00467350 (00467350) at 0046739f [UNCONDITIONAL_CALL]
//   shape_dsemodel.cpp_CDSEModel_fitToExistingBIN_FUN_0048fed0 (0048fed0) at 0048feec [UNCONDITIONAL_CALL]
//   shape_multicrm.cpp_CMultiCram_run_FUN_0053ee70 (0053ee70) at 0053f151 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_CMP3Decoder_openFile_FUN_00534550 (00534550) at 0053457b [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_005a45c0 (005a45c0) at 005a46f3 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_getSampleInfo_FUN_005aa3f0 (005aa3f0) at 005aa4cb [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_getSfxSample_FUN_005a4c80 (005a4c80) at 005a4de4 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_loadStreamingSoundFile_FUN_005a5200 (005a5200) at 005a5433 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_startSfx_FUN_005a8e90 (005a8e90) at 005a9408 [UNCONDITIONAL_CALL]
//   support_newmsg.cpp_readMessageFile_FUN_00543e40 (00543e40) at 00543e8c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_dosio_c_006215a8
//   TerminatedCString s_engine_dosio_c_006215ba
//   TerminatedCString s_engine_dosio_c_006215cc
// Function calls:
//   crt_ctype.c_toupper_FUN_005ff9e0
//   crt_file.c_create_directory_FUN_00600e10
//   crt_stdio.c_fseek_FUN_005ffacc
//   engine_dosio.c_findFile_FUN_00481760
//   engine_dosio.c_getRelativeFilePath_FUN_004816c0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

FILE * __cdecl engine_dosio_c_getFile_FUN_00481a50(char *directory,char *filename,char *mode)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  FILE *pFVar4;
  byte *pbVar5;
  BADSPACEBASE *in_ESP;
  char *directory_00;
  char *source_file;
  char acStack_118 [260];
  int iStack_14;
  uint uStack_10;
  
  engine_dosio_c_getRelativeFilePath_FUN_004816c0(&stack0xfffffde0,directory,filename);
  bVar2 = *mode;
  pbVar5 = (byte *)mode;
  while (bVar2 != 0) {
    iVar3 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar5);
    if (iVar3 == 0x57) {
      if (directory != (char *)0x0) {
        crt_file_c_create_directory_FUN_00600e10(directory);
      }
      pFVar4 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                         (&stack0xfffffde4,(char *)0x0,mode,"..\\engine\\dosio.c",0x198);
      return pFVar4;
    }
    pbVar1 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
    bVar2 = *pbVar1;
  }
  iVar3 = engine_dosio_c_findFile_FUN_00481760((SFoundFileInfo *)&stack0xfffffde4);
  if (iVar3 == 0) {
    return (FILE *)0x0;
  }
  if (uStack_10 == 0) {
    iVar3 = 0x1ac;
    source_file = "..\\engine\\dosio.c";
    directory_00 = (char *)0x0;
  }
  else {
    iVar3 = 0x1aa;
    source_file = "..\\engine\\dosio.c";
    directory_00 = &stack0xfffffde8;
  }
  pFVar4 = shape_memdbg_cpp_openFile_FUN_0050f7a0(acStack_118,directory_00,mode,source_file,iVar3);
  if (pFVar4 != (FILE *)0x0) {
    if (iStack_14 != 0) {
      crt_stdio_c_fseek_FUN_005ffacc(pFVar4,iStack_14,0);
    }
    return pFVar4;
  }
  return (FILE *)0x0;
}


// Assembly code:
// 00481a50: PUSH EBX
//   Label: engine_dosio.c_getFile_FUN_00481a50
// 00481a51: PUSH ESI
// 00481a52: PUSH EDI
// 00481a53: SUB ESP,0x214
// 00481a59: MOV EDI,dword ptr [ESP + 0x224]
//   XREF to: Stack[0x4] (READ)
// 00481a60: MOV ESI,dword ptr [ESP + 0x22c]
//   XREF to: Stack[0xc] (READ)
// 00481a67: MOV EDX,dword ptr [ESP + 0x228]
//   XREF to: Stack[0x8] (READ)
// 00481a6e: PUSH EDX
// 00481a6f: PUSH EDI
// 00481a70: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x220] (DATA)
// 00481a74: PUSH EAX
// 00481a75: MOV EBX,ESI
// 00481a77: CALL engine_dosio.c_getRelativeFilePath_FUN_004816c0
//   XREF to: 004816c0 (UNCONDITIONAL_CALL)
// 00481a7c: MOV AH,byte ptr [ESI]
// 00481a7e: ADD ESP,0xc
// 00481a81: TEST AH,AH
// 00481a83: JZ 0x00481ad0
//   XREF to: 00481ad0 (CONDITIONAL_JUMP)
// 00481a85: XOR EAX,EAX
//   Label: LAB_00481a85
// 00481a87: MOV AL,byte ptr [EBX]
// 00481a89: PUSH EAX
// 00481a8a: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 00481a8f: ADD ESP,0x4
// 00481a92: CMP EAX,0x57
// 00481a95: JNZ 0x00481ac8
//   XREF to: 00481ac8 (CONDITIONAL_JUMP)
// 00481a97: TEST EDI,EDI
// 00481a99: JZ 0x00481aa4
//   XREF to: 00481aa4 (CONDITIONAL_JUMP)
// 00481a9b: PUSH EDI
// 00481a9c: CALL crt_file.c_create_directory_FUN_00600e10
//   XREF to: 00600e10 (UNCONDITIONAL_CALL)
// 00481aa1: ADD ESP,0x4
// 00481aa4: PUSH 0x198
//   Label: LAB_00481aa4
// 00481aa9: PUSH 0x6215a8
//   XREF to: 006215a8 (DATA)
// 00481aae: PUSH ESI
// 00481aaf: PUSH 0x0
// 00481ab1: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x220] (DATA)
// 00481ab5: PUSH EAX
// 00481ab6: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 00481abb: ADD ESP,0x14
// 00481abe: ADD ESP,0x214
//   Label: LAB_00481abe
// 00481ac4: POP EDI
// 00481ac5: POP ESI
// 00481ac6: POP EBX
// 00481ac7: RET
// 00481ac8: MOV DL,byte ptr [EBX + 0x1]
//   Label: LAB_00481ac8
// 00481acb: INC EBX
// 00481acc: TEST DL,DL
// 00481ace: JNZ 0x00481a85
//   XREF to: 00481a85 (CONDITIONAL_JUMP)
// 00481ad0: MOV EAX,ESP
//   Label: LAB_00481ad0
// 00481ad2: PUSH EAX
// 00481ad3: CALL engine_dosio.c_findFile_FUN_00481760
//   XREF to: 00481760 (UNCONDITIONAL_CALL)
// 00481ad8: ADD ESP,0x4
// 00481adb: TEST EAX,EAX
// 00481add: JZ 0x00481abe
//   XREF to: 00481abe (CONDITIONAL_JUMP)
// 00481adf: MOV ECX,dword ptr [ESP + 0x208]
//   XREF to: Stack[-0x18] (READ)
// 00481ae6: TEST ECX,ECX
// 00481ae8: JNZ 0x00481b2f
//   XREF to: 00481b2f (CONDITIONAL_JUMP)
// 00481aea: PUSH 0x1ac
// 00481aef: PUSH 0x6215cc
//   XREF to: 006215cc (DATA)
// 00481af4: PUSH ESI
// 00481af5: PUSH ECX
// 00481af6: LEA EAX,[ESP + 0x110]
//   Label: LAB_00481af6
//   XREF to: Stack[-0x120] (DATA)
// 00481afd: PUSH EAX
// 00481afe: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 00481b03: ADD ESP,0x14
// 00481b06: MOV EBX,EAX
// 00481b08: TEST EBX,EBX
// 00481b0a: JZ 0x00481b41
//   XREF to: 00481b41 (CONDITIONAL_JUMP)
// 00481b0c: MOV ESI,dword ptr [ESP + 0x200]
//   XREF to: Stack[-0x20] (READ)
// 00481b13: TEST ESI,ESI
// 00481b15: JZ 0x00481b23
//   XREF to: 00481b23 (CONDITIONAL_JUMP)
// 00481b17: PUSH 0x0
// 00481b19: PUSH ESI
// 00481b1a: PUSH EBX
// 00481b1b: CALL crt_stdio.c_fseek_FUN_005ffacc
//   XREF to: 005ffacc (UNCONDITIONAL_CALL)
// 00481b20: ADD ESP,0xc
// 00481b23: MOV EAX,EBX
//   Label: LAB_00481b23
// 00481b25: ADD ESP,0x214
// 00481b2b: POP EDI
// 00481b2c: POP ESI
// 00481b2d: POP EBX
// 00481b2e: RET
// 00481b2f: PUSH 0x1aa
//   Label: LAB_00481b2f
// 00481b34: PUSH 0x6215ba
//   XREF to: 006215ba (DATA)
// 00481b39: PUSH ESI
// 00481b3a: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x220] (DATA)
// 00481b3e: PUSH EAX
// 00481b3f: JMP 0x00481af6
//   XREF to: 00481af6 (UNCONDITIONAL_JUMP)
// 00481b41: XOR EAX,EAX
//   Label: LAB_00481b41
// 00481b43: ADD ESP,0x214
// 00481b49: POP EDI
// 00481b4a: POP ESI
// 00481b4b: POP EBX
// 00481b4c: RET
