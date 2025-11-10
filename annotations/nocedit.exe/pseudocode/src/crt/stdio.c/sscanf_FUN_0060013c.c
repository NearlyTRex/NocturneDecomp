// Name: crt_stdio.c_sscanf_FUN_0060013c
// Address: 0060013c
// Address Range: [[0060013c, 00600160]]
// Convention: __cdecl
// Signature: int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format, ...)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047e6b5 [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_FUN_004aacc0 (004aacc0) at 004ab061 [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_FUN_004ae140 (004ae140) at 004aff00 [UNCONDITIONAL_CALL]
//   core_event.cpp_FUN_004aa3c0 (004aa3c0) at 004aa3d0 [UNCONDITIONAL_CALL]
//   core_event.cpp_FUN_004aa530 (004aa530) at 004aa56d [UNCONDITIONAL_CALL]
//   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 (004bda20) at 004bdbe7 [UNCONDITIONAL_CALL]
//   core_mission.cpp_FUN_00524660 (00524660) at 005246e4 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_CallLoadingScriptFile_FUN_00566fa0 (00566fa0) at 00566fdc [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055bc00 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00559730 (00559730) at 00559780 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_0055ff00 (0055ff00) at 0055ff79 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_005627f0 (005627f0) at 0056280e [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00562920 (00562920) at 005629f3 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedFogEditor_FUN_00580730 (00580730) at 00580c8c [UNCONDITIONAL_CALL]
//   core_setedit.cpp_ImportingGroundTextures_FUN_00578420 (00578420) at 00578513 [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSCamera_load_FUN_00585420 (00585420) at 00585473 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 (005968b0) at 0059856b [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058a1b0 (0058a1b0) at 0058a1e9 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00592520 (00592520) at 00592582 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00592690 (00592690) at 0059310d [UNCONDITIONAL_CALL]
//   core_sound.cpp_PlaySfxByStringMaybe_FUN_005b1fd0 (005b1fd0) at 005b2282 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_removeAuditRecords_FUN_004bd190 (004bd190) at 004bd2b5 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_parseTimestampRecord_FUN_004b2270 (004b2270) at 004b22dd [UNCONDITIONAL_CALL]
//   engine_ini.cpp_CIniFile_getFloat_FUN_004fbcd0 (004fbcd0) at 004fbd1a [UNCONDITIONAL_CALL]
//   engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 (004fbc30) at 004fbc76 [UNCONDITIONAL_CALL]
//   shape_design.c_centerObject_FUN_00466610 (00466610) at 00466783 [UNCONDITIONAL_CALL]
//   shape_design.c_configureSpatialSplittingPlane_FUN_004617c0 (004617c0) at 004618d9 [UNCONDITIONAL_CALL]
//   shape_design.c_createBoxPrimitive_FUN_0045e520 (0045e520) at 0045e58f [UNCONDITIONAL_CALL]
//   shape_design.c_createPolygonFromVertexList_FUN_0045cc80 (0045cc80) at 0045cd02 [UNCONDITIONAL_CALL]
//   shape_design.c_createRotationalSweepGeometry_FUN_0045e070 (0045e070) at 0045e0f6 [UNCONDITIONAL_CALL]
//   shape_design.c_deletePolygonRange_FUN_0045dd70 (0045dd70) at 0045ddc1 [UNCONDITIONAL_CALL]
//   shape_design.c_interactiveWeldVertices_FUN_00465e90 (00465e90) at 00465ee1 [UNCONDITIONAL_CALL]
//   shape_design.c_scaleXYZ_FUN_00467f30 (00467f30) at 00467f85 [UNCONDITIONAL_CALL]
//   shape_design.c_sizeModelInOneDimension_FUN_00469850 (00469850) at 004699e5 [UNCONDITIONAL_CALL]
//   shape_design.c_sizeModelToXFeet_FUN_00466e40 (00466e40) at 00466ea3 [UNCONDITIONAL_CALL]
//   shape_design.c_sizeModelToYFeet_FUN_00467010 (00467010) at 00467073 [UNCONDITIONAL_CALL]
//   shape_design.c_sizeModelToZFeet_FUN_00466c70 (00466c70) at 00466cd3 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_promptForValidDouble_FUN_004a01f0 (004a01f0) at 004a0276 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0 (004a00f0) at 004a016a [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020 (004a0020) at 004a008c [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_promptForValidVector_FUN_004a0300 (004a0300) at 004a0383 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_004a3360 (004a3360) at 004a33df [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_00531680 (00531680) at 00531963 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_initializeHuffmanTables_FUN_00533d30 (00533d30) at 00533db8 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_initializeHuffmanTables_FUN_00533f80 (00533f80) at 00534018 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_CalculateDistanceMaybe_FUN_005a45c0 (005a45c0) at 005a4a01 [UNCONDITIONAL_CALL]
//   support_trisock.cpp_parseIPComponents_FUN_005e1800 (005e1800) at 005e1822 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_vsscanf_FUN_00600100

#include "nocturne.h"

int __cdecl crt_stdio_c_sscanf_FUN_0060013c(char *str,char *format,...)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  undefined1 *local_8;
  
  local_8 = &stack0x0000000c;
  iVar1 = crt_stdio_c_vsscanf_FUN_00600100(str,format,(va_list_t)&local_8);
  return iVar1;
}


// Assembly code:
// 0060013c: PUSH EBX
//   Label: crt_stdio.c_sscanf_FUN_0060013c
// 0060013d: SUB ESP,0x4
// 00600140: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[0xc] (DATA)
// 00600144: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x8] (DATA)
// 00600147: MOV EAX,ESP
// 00600149: PUSH EAX
// 0060014a: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0060014e: PUSH EDX
// 0060014f: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00600153: PUSH EBX
// 00600154: CALL crt_stdio.c_vsscanf_FUN_00600100
//   XREF to: 00600100 (UNCONDITIONAL_CALL)
// 00600159: ADD ESP,0xc
// 0060015c: ADD ESP,0x4
// 0060015f: POP EBX
// 00600160: RET
