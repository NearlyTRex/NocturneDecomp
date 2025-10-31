// Name: crt_stdio.c_fscanf_FUN_005fe7c0
// Address: 005fe7c0
// Address Range: [[005fe7c0, 005fe7e4]]
// Convention: __cdecl
// Signature: int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format, ...)
// Cross-references:
//   core_actor.cpp_CDemonActor_FUN_0040b050 (0040b050) at 0040b08e [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeClothList_FUN_0040be60 (0040be60) at 0040bea4 [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeFloat_FUN_0040b770 (0040b770) at 0040b78c [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeInteger_FUN_0040b7f0 (0040b7f0) at 0040b80d [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeLocation_FUN_0040b480 (0040b480) at 0040b4a9 [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeOrientation_FUN_0040b3e0 (0040b3e0) at 0040b404 [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializePartStatus_FUN_0040bae0 (0040bae0) at 0040bb29 [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeQuaternion_FUN_0040b520 (0040b520) at 0040b548 [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeRules_FUN_0040c000 (0040c000) at 0040c044 [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeString_FUN_0040b5c0 (0040b5c0) at 0040b63f [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeVector_FUN_0040b340 (0040b340) at 0040b364 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_CBodyPart_load_FUN_00419880 (00419880) at 00419b4b [UNCONDITIONAL_CALL]
//   core_box.cpp_CBox_loadFromFile_FUN_0041fe90 (0041fe90) at 0041ff01 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_CCloth_load_FUN_00438cf0 (00438cf0) at 00438f41 [UNCONDITIONAL_CALL]
//   core_course.cpp_CCourse_importMatrices_FUN_00442ea0 (00442ea0) at 00442f05 [UNCONDITIONAL_CALL]
//   core_course.cpp_CCourse_load_FUN_00442580 (00442580) at 004425d4 [UNCONDITIONAL_CALL]
//   core_course.cpp_OpeningCourseFile2_FUN_00442d70 (00442d70) at 00442dc9 [UNCONDITIONAL_CALL]
//   core_course.cpp_OpeningCourseFileMaybe_FUN_00442bc0 (00442bc0) at 00442c49 [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_loadCameraFog_FUN_00453e50 (00453e50) at 00453e88 [UNCONDITIONAL_CALL]
//   core_dfilter.cpp_CFilterFX_openMovie_FUN_00470730 (00470730) at 004707b0 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330 (00479330) at 00479c84 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00477110 (00477110) at 00477221 [UNCONDITIONAL_CALL]
//   core_dtri.cpp_CDemonTriangle_readDataCSV_FUN_0049a4e0 (0049a4e0) at 0049a510 [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_loadState_FUN_004b0fc0 (004b0fc0) at 004b11e0 [UNCONDITIONAL_CALL]
//   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 (004bda20) at 004bdb3c [UNCONDITIONAL_CALL]
//   core_fire.cpp_CCrater_FUN_004c4880 (004c4880) at 004c4960 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireEffect_FUN_004c9300 (004c9300) at 004c934f [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 (004e12b0) at 004e1980 [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004ecb00 (004ecb00) at 004ecb4d [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004ed160 (004ed160) at 004ed18f [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004ee1e0 (004ee1e0) at 004ee24d [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_load_FUN_004ff400 (004ff400) at 004ff46a [UNCONDITIONAL_CALL]
//   core_inv.cpp_loadInventory_FUN_004fd220 (004fd220) at 004fd4cd [UNCONDITIONAL_CALL]
//   core_inv.cpp_loadItem_FUN_004fcfe0 (004fcfe0) at 004fcffd [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_loadActor_FUN_00523990 (00523990) at 00523a4b [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0 (00522eb0) at 005230a0 [UNCONDITIONAL_CALL]
//   core_motion.cpp_CMotionController_load_FUN_0052e5d0 (0052e5d0) at 0052e5e1 [UNCONDITIONAL_CALL]
//   core_motion.cpp_ReadMotionList_FUN_0052cd70 (0052cd70) at 0052cda3 [UNCONDITIONAL_CALL]
//   core_podmain.cpp_CDemonPod_load_FUN_005519c0 (005519c0) at 00551a7b [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_dbLoad_FUN_005603c0 (005603c0) at 00560474 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_loadState_FUN_00560820 (00560820) at 00560982 [UNCONDITIONAL_CALL]
//   core_script.cpp_GetReferencedActor_FUN_00560760 (00560760) at 00560788 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_load_FUN_00569410 (00569410) at 005694a0 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_saveStateInfo_FUN_00571230 (00571230) at 00571283 [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_00576200 (00576200) at 00576232 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 (00578d80) at 00578ec5 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 (0057e7c0) at 0057f6ef [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSCamera_importS3D_FUN_00585ff0 (00585ff0) at 005860a6 [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSCamera_loadPVS_FUN_005857b0 (005857b0) at 005857c8 [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSCamera_load_FUN_00585420 (00585420) at 005855e2 [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSLight_importS3D_FUN_00587710 (00587710) at 00587789 [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSLight_load_FUN_00586310 (00586310) at 00586541 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CBoneStructure_readBONframe_FUN_0058aa10 (0058aa10) at 0058aad8 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CBoneStructure_readBONheader_FUN_0058a4a0 (0058a4a0) at 0058a587 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_005897b0 (005897b0) at 0058980f [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00589fe0 (00589fe0) at 0058a006 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058a3d0 (0058a3d0) at 0058a430 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058b660 (0058b660) at 0058b6e8 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058b8e0 (0058b8e0) at 0058b93b [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058b9b0 (0058b9b0) at 0058ba35 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058bc40 (0058bc40) at 0058bc97 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058c21f [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058f810 (0058f810) at 0058fac9 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00592690 (00592690) at 00592741 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_viewModel_FUN_00598fc0 (00598fc0) at 00599028 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_loadStream_FUN_0059b970 (0059b970) at 0059bc42 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CSkeleton_loadStream_FUN_00599bb0 (00599bb0) at 00599f22 [UNCONDITIONAL_CALL]
//   core_texlist.cpp_CTextureList_load_FUN_005dbe00 (005dbe00) at 005dbf23 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60 (004b2a60) at 004b2b1d [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_load_FUN_004b6c00 (004b6c00) at 004b6c45 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0 (004ba4f0) at 004ba540 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_readTimestampFile_FUN_004b23a0 (004b23a0) at 004b23f1 [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_loadFromFile_FUN_004cd2c0 (004cd2c0) at 004cd31c [UNCONDITIONAL_CALL]
//   shape_design.c_combineTextureMaps_FUN_00469ee0 (00469ee0) at 00469f83 [UNCONDITIONAL_CALL]
//   shape_design.c_loadModelFile_FUN_00458ac0 (00458ac0) at 004591c5 [UNCONDITIONAL_CALL]
//   shape_design.c_loadS3DModelFile_FUN_004593a0 (004593a0) at 004595a4 [UNCONDITIONAL_CALL]
//   shape_design.c_parseSpatialTreeFromFile_FUN_004580a0 (004580a0) at 004580ce [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051adf0 (0051adf0) at 0051afe0 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051cdf0 (0051cdf0) at 0051ce16 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051d180 (0051d180) at 0051d1a1 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051d2d0 (0051d2d0) at 0051d30e [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_OpenS3DFile_FUN_0051aa60 (0051aa60) at 0051aaa4 [UNCONDITIONAL_CALL]
//   support_newmsg.cpp_readMessageFile_FUN_00543e40 (00543e40) at 00543f29 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_vfscanf_FUN_005fe738

#include "nocturne.h"

int __cdecl crt_stdio_c_fscanf_FUN_005fe7c0(FILE *file,char *format,...)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  undefined1 *local_8;
  
  local_8 = &stack0x0000000c;
  iVar1 = crt_stdio_c_vfscanf_FUN_005fe738(file,format,(va_list_t)&local_8);
  return iVar1;
}


// Assembly code:
// 005fe7c0: PUSH EBX
//   Label: crt_stdio.c_fscanf_FUN_005fe7c0
// 005fe7c1: SUB ESP,0x4
// 005fe7c4: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[0xc] (DATA)
// 005fe7c8: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x8] (DATA)
// 005fe7cb: MOV EAX,ESP
// 005fe7cd: PUSH EAX
// 005fe7ce: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005fe7d2: PUSH EDX
// 005fe7d3: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005fe7d7: PUSH EBX
// 005fe7d8: CALL crt_stdio.c_vfscanf_FUN_005fe738
//   XREF to: 005fe738 (UNCONDITIONAL_CALL)
// 005fe7dd: ADD ESP,0xc
// 005fe7e0: ADD ESP,0x4
// 005fe7e3: POP EBX
// 005fe7e4: RET
