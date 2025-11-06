// Name: crt_stdio.c_fprintf_FUN_005fe6d0
// Address: 005fe6d0
// Address Range: [[005fe6d0, 005fe6f4]]
// Convention: __cdecl
// Signature: int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format, ...)
// Cross-references:
//   cockpit_ckptutil.c_saveEdgeListFile_FUN_00433480 (00433480) at 004334ed [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_save_FUN_0040af30 (0040af30) at 0040af86 [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeActor_FUN_0040b870 (0040b870) at 0040b8ba [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeClothList_FUN_0040be60 (0040be60) at 0040bf68 [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeDescription_FUN_0040b290 (0040b290) at 0040b2f4 [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeFloat_FUN_0040b770 (0040b770) at 0040b7dd [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeInteger_FUN_0040b7f0 (0040b7f0) at 0040b859 [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeLocation_FUN_0040b480 (0040b480) at 0040b510 [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeMotionState_FUN_0040b9f0 (0040b9f0) at 0040ba89 [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeOrientation_FUN_0040b3e0 (0040b3e0) at 0040b467 [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializePartStatus_FUN_0040bae0 (0040bae0) at 0040bc82 [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeQuaternion_FUN_0040b520 (0040b520) at 0040b5b4 [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeRules_FUN_0040c000 (0040c000) at 0040c141 [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeSimBox_FUN_0040bd70 (0040bd70) at 0040be09 [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeString_FUN_0040b5c0 (0040b5c0) at 0040b6b9 [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeVector_FUN_0040b340 (0040b340) at 0040b3c7 [UNCONDITIONAL_CALL]
//   core_anvil.cpp_CAnvil_FUN_00412090 (00412090) at 004120ba [UNCONDITIONAL_CALL]
//   core_bat.cpp_CBat_FUN_00414ec0 (00414ec0) at 00414ef1 [UNCONDITIONAL_CALL]
//   core_battery.cpp_FUN_00418110 (00418110) at 0041813a [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_CBodyPart_serialize_FUN_00419880 (00419880) at 00419985 [UNCONDITIONAL_CALL]
//   core_box.cpp_CBox_saveToFile_FUN_00420020 (00420020) at 00420047 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_00422900 (00422900) at 0042291f [UNCONDITIONAL_CALL]
//   core_chain.cpp_CChain_addFilesToExtractList_FUN_00431250 (00431250) at 0043128d [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043e0a0 (0043e0a0) at 0043e0b1 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_ParseClothFile_FUN_00439260 (00439260) at 00439360 [UNCONDITIONAL_CALL]
//   core_course.cpp_CCourse_save_FUN_00442a90 (00442a90) at 00442ac1 [UNCONDITIONAL_CALL]
//   core_crate.cpp_FUN_00448b60 (00448b60) at 00448b8a [UNCONDITIONAL_CALL]
//   core_curtain.cpp_FindCurtainTextures_FUN_0044b960 (0044b960) at 0044b983 [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_saveCameraFog_FUN_00453f10 (00453f10) at 00453f21 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0 (0047edd0) at 0047ee03 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_exportToS3D_FUN_00479f30 (00479f30) at 00479f80 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_export_FUN_00478e10 (00478e10) at 004790c1 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00 (0047ed00) at 0047ed97 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_writeModelDependencies_FUN_0047ee30 (0047ee30) at 0047ee41 [UNCONDITIONAL_CALL]
//   core_dtri.cpp_CDemonTriangle_writeDataCSV_FUN_0049a530 (0049a530) at 0049a58e [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_saveState_FUN_004b1380 (004b1380) at 004b1640 [UNCONDITIONAL_CALL]
//   core_fileman.cpp_CDemonFileManager_addClothFileToExtractList_FUN_004be150 (004be150) at 004be1cd [UNCONDITIONAL_CALL]
//   core_fileman.cpp_CDemonFileManager_addDeformableModelToExtractList_FUN_004be070 (004be070) at 004be099 [UNCONDITIONAL_CALL]
//   core_fileman.cpp_CDemonFileManager_addSetToExtractList_FUN_004bd8e0 (004bd8e0) at 004bd8f5 [UNCONDITIONAL_CALL]
//   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 (004bda20) at 004bdd6e [UNCONDITIONAL_CALL]
//   core_filmreel.cpp_FUN_004be9b0 (004be9b0) at 004be9da [UNCONDITIONAL_CALL]
//   core_fire.cpp_CCrater_save_FUN_004c49c0 (004c49c0) at 004c4ac5 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireEffect_save_FUN_004c9380 (004c9380) at 004c93a6 [UNCONDITIONAL_CALL]
//   core_flamecan.cpp_FUN_004cb750 (004cb750) at 004cb77a [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_FUN_004d2560 (004d2560) at 004d25ae [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_saveGame_FUN_004e0cd0 (004e0cd0) at 004e0dc0 [UNCONDITIONAL_CALL]
//   core_gasmask.cpp_FUN_004e5ef0 (004e5ef0) at 004e5f1a [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_writeDependencies_FUN_004eb690 (004eb690) at 004eb800 [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004ecb90 (004ecb90) at 004ecc29 [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004ed1c0 (004ed1c0) at 004ed202 [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004ee290 (004ee290) at 004ee2b5 [UNCONDITIONAL_CALL]
//   core_hero.cpp_CHero_FUN_004f3fa0 (004f3fa0) at 004f3fc4 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_saveItems_FUN_004ff3b0 (004ff3b0) at 004ff3e4 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_save_FUN_004ff210 (004ff210) at 004ff283 [UNCONDITIONAL_CALL]
//   core_main.c_displayErrorAndQuit_FUN_00506f10 (00506f10) at 00507042 [UNCONDITIONAL_CALL]
//   core_marquee.cpp_FUN_0050c480 (0050c480) at 0050c4a7 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_saveActor_FUN_00523af0 (00523af0) at 00523b27 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_writeFile_FUN_00523600 (00523600) at 00523821 [UNCONDITIONAL_CALL]
//   core_motion.cpp_CMotionController_save_FUN_0052e670 (0052e670) at 0052e6c5 [UNCONDITIONAL_CALL]
//   core_motion.cpp_CMotionList_save_FUN_0052d170 (0052d170) at 0052d181 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054f2a0 (0054f2a0) at 0054f2d6 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_ScriptErrorStartNotepad_FUN_00559f80 (00559f80) at 0055a10d [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_WriteScriptFile_FUN_00560b50 (00560b50) at 00560b80 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_005607e0 (005607e0) at 00560809 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00566180 (00566180) at 005661ee [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_SetStateVersionCameraCountInStrings_FUN_005711b0 (005711b0) at 005711c1 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_ExportSomething_FUN_0057a0c0 (0057a0c0) at 0057a166 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00584e70 (00584e70) at 00585101 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 (00578d80) at 005799fa [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_save_FUN_0057a2a0 (0057a2a0) at 0057a3e3 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_EditingGroundTypesAndSaving_FUN_00578630 (00578630) at 0057893f [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSCamera_exportS3D_FUN_00586190 (00586190) at 005862e0 [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSCamera_savePVS_FUN_00587450 (00587450) at 00587474 [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSCamera_save_FUN_00585a40 (00585a40) at 00585a60 [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSLight_exportS3D_FUN_00587850 (00587850) at 005878e1 [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSLight_save_FUN_00587090 (00587090) at 005871c0 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_ExportModel_FUN_00595fc0 (00595fc0) at 005967e2 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00589a40 (00589a40) at 00589a77 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058a0f0 (0058a0f0) at 0058a10a [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058a2b0 (0058a2b0) at 0058a369 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058b3a0 (0058b3a0) at 0058b3bf [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058f810 (0058f810) at 0058fa89 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260 (0058a260) at 0058a27f [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_ParseSkeletonBase_FUN_0058f120 (0058f120) at 0058f240 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_viewModel_FUN_00598fc0 (00598fc0) at 005993eb [UNCONDITIONAL_CALL]
//   core_sound.cpp_PlaySfxByStringMaybe_FUN_005b1fd0 (005b1fd0) at 005b2501 [UNCONDITIONAL_CALL]
//   core_texlist.cpp_CTextureList_save_FUN_005dc0d0 (005dc0d0) at 005dc1a1 [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_FUN_005e8d00 (005e8d00) at 005e8d14 [UNCONDITIONAL_CALL]
//   engine_console.cpp_CConsole_printf_FUN_00441890 (00441890) at 00441947 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 (004b4220) at 004b4eaf [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutList_write_FUN_004b2eb0 (004b2eb0) at 004b2ef7 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bbf84 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_extractTexture_FUN_004b53e0 (004b53e0) at 004b53f6 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_processMRGLNode_FUN_004b54e0 (004b54e0) at 004b55a7 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_writePodConfigFile_FUN_004ba620 (004ba620) at 004ba656 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_synchronizeFilesToDirectory_FUN_004bc650 (004bc650) at 004bc71c [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_writeArtFileEntries_FUN_004bc9f0 (004bc9f0) at 004bca24 [UNCONDITIONAL_CALL]
//   engine_ini.cpp_CIni_writeProfileString_FUN_004fb660 (004fb660) at 004fb900 [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_generateTextureAtlasLayout_FUN_00444d90 (00444d90) at 00445780 [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_generateTextureAtlas_FUN_00445820 (00445820) at 00445a09 [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_printAtlasLayoutReport_FUN_004481d0 (004481d0) at 0044821d [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_runInteractiveAtlasGeneration_FUN_00446160 (00446160) at 0044634f [UNCONDITIONAL_CALL]
//   shape_design.c_FUN_0045a320 (0045a320) at 0045a3f9 [UNCONDITIONAL_CALL]
//   shape_design.c_exportModelToBIN_FUN_0045aa80 (0045aa80) at 0045ab00 [UNCONDITIONAL_CALL]
//   shape_design.c_exportModelToMDL_FUN_00459e80 (00459e80) at 00459f03 [UNCONDITIONAL_CALL]
//   shape_design.c_exportVertexListFile_FUN_0045a610 (0045a610) at 0045a780 [UNCONDITIONAL_CALL]
//   shape_design.c_writeBinaryTreeNode_FUN_00457fd0 (00457fd0) at 00458009 [UNCONDITIONAL_CALL]
//   shape_design.c_writeSpatialTree_FUN_0045a200 (0045a200) at 0045a224 [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_CLeakChecker_dtor_FUN_0050fbc0 (0050fbc0) at 0050fda3 [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_debugMemdump_FUN_0050f6c0 (0050f6c0) at 0050f743 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051c100 (0051c100) at 0051c1c1 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051d0e0 (0051d0e0) at 0051d109 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051d250 (0051d250) at 0051d26f [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051d420 (0051d420) at 0051d43f [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_TriListSomething_FUN_005d77a0 (005d77a0) at 005d7960 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_HandleSoundError_FUN_005adba0 (005adba0) at 005add64 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_convertMp3ToSfxMetadata_FUN_005acf20 (005acf20) at 005ad1a6 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_vfprintf_FUN_00604850

#include "nocturne.h"

int __cdecl crt_stdio_c_fprintf_FUN_005fe6d0(FILE *file,char *format,...)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  undefined1 *local_8;
  
  local_8 = &stack0x0000000c;
  iVar1 = crt_stdio_c_vfprintf_FUN_00604850(file,format,(va_list_t)&local_8);
  return iVar1;
}


// Assembly code:
// 005fe6d0: PUSH EBX
//   Label: crt_stdio.c_fprintf_FUN_005fe6d0
// 005fe6d1: SUB ESP,0x4
// 005fe6d4: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[0xc] (DATA)
// 005fe6d8: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x8] (DATA)
// 005fe6db: MOV EAX,ESP
// 005fe6dd: PUSH EAX
// 005fe6de: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005fe6e2: PUSH EDX
// 005fe6e3: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005fe6e7: PUSH EBX
// 005fe6e8: CALL crt_stdio.c_vfprintf_FUN_00604850
//   XREF to: 00604850 (UNCONDITIONAL_CALL)
// 005fe6ed: ADD ESP,0xc
// 005fe6f0: ADD ESP,0x4
// 005fe6f3: POP EBX
// 005fe6f4: RET
