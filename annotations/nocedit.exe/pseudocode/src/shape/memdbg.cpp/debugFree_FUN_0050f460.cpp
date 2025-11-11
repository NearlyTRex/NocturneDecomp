// Name: shape_memdbg.cpp_debugFree_FUN_0050f460
// Address: 0050f460
// Address Range: [[0050f460, 0050f531]]
// Convention: __cdecl
// Signature: void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
// Cross-references:
//   cockpit_ckptutil.c_loadEdgeListFile_FUN_004331f0 (004331f0) at 00433357 [UNCONDITIONAL_CALL]
//   cockpit_ckptutil.c_rotateBitmap_FUN_00434870 (00434870) at 00434960 [UNCONDITIONAL_CALL]
//   cockpit_pkbitmap.cpp_CPackedBitmap_freePackedData_FUN_0054a940 (0054a940) at 0054a959 [UNCONDITIONAL_CALL]
//   cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_0054a8e0 (0054a8e0) at 0054a92a [UNCONDITIONAL_CALL]
//   cockpit_pkbitmap.cpp_CPackedBitmap_loadAndCompressBitmap_FUN_0054b080 (0054b080) at 0054b0bb [UNCONDITIONAL_CALL]
//   cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0054b000 (0054b000) at 0054b059 [UNCONDITIONAL_CALL]
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadJoinedRAW_FUN_0054bf40 (0054bf40) at 0054c137 [UNCONDITIONAL_CALL]
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_0054c1e0 (0054c1e0) at 0054c2c8 [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_free_FUN_0044c360 (0044c360) at 0044c3cf [UNCONDITIONAL_CALL]
//   core_dcube.cpp_CDemonCube_freeMemory_FUN_004569b0 (004569b0) at 00456a00 [UNCONDITIONAL_CALL]
//   core_dfilter.cpp_CDemonFilter_freeMemory_FUN_004702c0 (004702c0) at 004702d9 [UNCONDITIONAL_CALL]
//   core_dfilter.cpp_CFilterFX_free_FUN_00470700 (00470700) at 00470719 [UNCONDITIONAL_CALL]
//   core_dimage.cpp_CDemonImage_freeMemory_FUN_00471a40 (00471a40) at 00471a59 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_free_FUN_004728b0 (004728b0) at 0047290f [UNCONDITIONAL_CALL]
//   core_dpart.cpp_CDemonPart_free_FUN_004822b0 (004822b0) at 004822d0 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_004942d0 (004942d0) at 00494362 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_openSomething_FUN_004e2910 (004e2910) at 004e2edf [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_rollCredits_FUN_004e4010 (004e4010) at 004e4407 [UNCONDITIONAL_CALL]
//   core_ground.cpp_CGround_free_FUN_004eefb0 (004eefb0) at 004eeff1 [UNCONDITIONAL_CALL]
//   core_morph.cpp_CMorphModel_free_FUN_0052a510 (0052a510) at 0052a563 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_FreeSomething1_FUN_00559870 (00559870) at 005598c2 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_FreeSomething2_FUN_005598f0 (005598f0) at 00559920 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_editorAction_FUN_00564820 (00564820) at 00564b87 [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CZThumb_free_FUN_00574b50 (00574b50) at 00574b75 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_BackdropMaybe_FUN_005805a0 (005805a0) at 00580625 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 (00578d80) at 005794c0 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 (0057e7c0) at 0057f517 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_OpenSomethingBackdropThumbs_FUN_005769a0 (005769a0) at 00576c8b [UNCONDITIONAL_CALL]
//   core_setedit.cpp_UserInputCreate_FUN_0057d660 (0057d660) at 0057e410 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_WriteActBackdrop_FUN_0057ce80 (0057ce80) at 0057d282 [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSCamera_free_FUN_00585360 (00585360) at 00585383 [UNCONDITIONAL_CALL]
//   engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560 (00410560) at 004105b6 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860 (004b2860) at 004b287f [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_freeAuditRecords_FUN_004b5910 (004b5910) at 004b5931 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b9034 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 (004b5a50) at 004b62c1 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_removeAuditRecords_FUN_004bd190 (004bd190) at 004bd3e0 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_findMaxFieldInTimestampFile_FUN_004b2640 (004b2640) at 004b270f [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_readTimestampFile_FUN_004b23a0 (004b23a0) at 004b24ad [UNCONDITIONAL_CALL]
//   engine_model.c_freeMRGLData_FUN_005280b0 (005280b0) at 00528133 [UNCONDITIONAL_CALL]
//   engine_palette.cpp_CPaletteManager_createOutputPalette_FUN_00545180 (00545180) at 005454d7 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPodFile_cleanup_FUN_00550090 (00550090) at 00550128 [UNCONDITIONAL_CALL]
//   engine_texture.cpp_CTextureCache_free_FUN_005dcb30 (005dcb30) at 005dcb80 [UNCONDITIONAL_CALL]
//   engine_texture.cpp_CTextureCache_loadTexture_FUN_005dcc00 (005dcc00) at 005dcfc9 [UNCONDITIONAL_CALL]
//   shape_design.c_complexPolygonReduction_FUN_00463b30 (00463b30) at 00464829 [UNCONDITIONAL_CALL]
//   shape_design.c_cramTextureList_FUN_0046bb80 (0046bb80) at 0046df80 [UNCONDITIONAL_CALL]
//   shape_design.c_loadS3DModelFile_FUN_004593a0 (004593a0) at 004599e1 [UNCONDITIONAL_CALL]
//   shape_design.c_loadTextureData_FUN_0046b060 (0046b060) at 0046b6b4 [UNCONDITIONAL_CALL]
//   shape_design.c_mouseWheelPolygonReducer_FUN_004648e0 (004648e0) at 00464a42 [UNCONDITIONAL_CALL]
//   shape_design.c_removeUnusedVertices_FUN_00463830 (00463830) at 00463a11 [UNCONDITIONAL_CALL]
//   shape_design.c_vertexReducer_FUN_00467850 (00467850) at 00467dac [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_dtor_FUN_0049dfb0 (0049dfb0) at 0049dffd [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_popWindowState_FUN_004a0ea0 (004a0ea0) at 004a0f63 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_clear_FUN_004a5770 (004a5770) at 004a57d4 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_clear_FUN_004a2b10 (004a2b10) at 004a2b3e [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_remove_FUN_004a2e00 (004a2e00) at 004a2e6b [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_debugFree_FUN_0050f210 (0050f210) at 0050f23f [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_debugRealloc_FUN_0050f540 (0050f540) at 0050f64c [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_FUN_0051d180 (0051d180) at 0051d240 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_eqLoad_FUN_0051cdf0 (0051cdf0) at 0051d03f [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_free_FUN_00515970 (00515970) at 00515a20 [UNCONDITIONAL_CALL]
//   shape_quantize.cpp_FUN_00556d40 (00556d40) at 00556d4c [UNCONDITIONAL_CALL]
//   shape_quantize.cpp_FreeSomething1_FUN_00554940 (00554940) at 005549f8 [UNCONDITIONAL_CALL]
//   shape_quantize.cpp_FreeSomething2_FUN_00554d40 (00554d40) at 00554e62 [UNCONDITIONAL_CALL]
//   shape_quantize.cpp_QuantizeSomething_FUN_00554cc0 (00554cc0) at 00554d1a [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_CFileBitStream_close_FUN_0052edf0 (0052edf0) at 0052ee34 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_CFileBitStream_init_FUN_0052ecf0 (0052ecf0) at 0052ed16 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_CMP3Decoder_free_FUN_005349e0 (005349e0) at 00534a49 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_CMP3Decoder_parseHeader_FUN_00534630 (00534630) at 00534689 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_CSfxSample_freeSampleData_FUN_005a6400 (005a6400) at 005a641c [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FreeSomeSoundMemory_FUN_005a5900 (005a5900) at 005a5924 [UNCONDITIONAL_CALL]
//   support_codec.cpp_CLZWDictionary_free_FUN_0043ee10 (0043ee10) at 0043ee35 [UNCONDITIONAL_CALL]
//   wincore_wddvmem.cpp_cleanupGraphicsSystem_FUN_005ecd90 (005ecd90) at 005ece2f [UNCONDITIONAL_CALL]
//   wincore_wddvmem.cpp_freeRenderBuffers_FUN_005ecba0 (005ecba0) at 005ecbc7 [UNCONDITIONAL_CALL]
//   wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0 (005ecef0) at 005ecf8c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_memdbg_cpp_00635e2f
//   TerminatedCString s_headFromPtr_NULL_ptr_00635e43
//   TerminatedCString s_debugFree_08X_s_d_006360c2
//   TerminatedCString s_shape_memdbg_cpp_006360da
//   TerminatedCString s_Tried_to_free_NULL_point_006360ee
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   BOOL g_RecursiveCallFlag
//   HANDLE g_FileMutex
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_memory.c_free_FUN_00601cd0
//   shape_memdbg.cpp_SMemHead_checkMemory_FUN_0050f020
//   shape_memdbg.cpp_SMemHead_remove_FUN_0050ef20
//   shape_memdbg.cpp_traceMemory_FUN_0050f150
//   wincore_winrun.cpp_createMutex_FUN_005f3fe0
//   wincore_winrun.cpp_releaseMutex_FUN_005f4050
//   wincore_winrun.cpp_waitForMutex_FUN_005f3ff0

#include "nocturne.h"

void __cdecl shape_memdbg_cpp_debugFree_FUN_0050f460(void *ptr,char *filename,int line_number)

{
  SMemHead *header;
  
  if (g_RecursiveCallFlag == 0) {
    if (g_FileMutex == (HANDLE)0x0) {
      g_FileMutex = wincore_winrun_cpp_createMutex_FUN_005f3fe0();
    }
    wincore_winrun_cpp_waitForMutex_FUN_005f3ff0(g_FileMutex);
  }
  shape_memdbg_cpp_traceMemory_FUN_0050f150("debugFree(%08X, %s, %d)",ptr,filename,line_number);
  if (ptr == (void *)0x0) {
    g_CurrentFilename = "..\\shape\\memdbg.cpp";
    g_CurrentLineNumber = 0x168;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Tried to free NULL pointer at %s line %d",filename,line_number);
    g_CurrentFilename = "..\\shape\\memdbg.cpp";
    g_CurrentLineNumber = 0x99;
    core_main_c_displayErrorAndQuit_FUN_00506f10("headFromPtr - NULL ptr");
  }
  header = (SMemHead *)((int)ptr + -0x28);
  shape_memdbg_cpp_SMemHead_checkMemory_FUN_0050f020(header,filename,line_number);
  shape_memdbg_cpp_SMemHead_remove_FUN_0050ef20(header);
  crt_memory_c_free_FUN_00601cd0(header);
  wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_FileMutex);
  return;
}


// Assembly code:
// 0050f460: PUSH EBX
//   Label: shape_memdbg.cpp_debugFree_FUN_0050f460
// 0050f461: PUSH ESI
// 0050f462: PUSH EDI
// 0050f463: PUSH EBP
// 0050f464: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0050f468: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0050f46c: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0050f470: CMP dword ptr [0x02f0ca50],0x0
//   XREF to: 02f0ca50 (READ)
// 0050f477: JNZ 0x0050f49b
//   XREF to: 0050f49b (CONDITIONAL_JUMP)
// 0050f479: CMP dword ptr [0x02f0d93c],0x0
//   XREF to: 02f0d93c (READ)
// 0050f480: JNZ 0x0050f48c
//   XREF to: 0050f48c (CONDITIONAL_JUMP)
// 0050f482: CALL wincore_winrun.cpp_createMutex_FUN_005f3fe0
//   XREF to: 005f3fe0 (UNCONDITIONAL_CALL)
// 0050f487: MOV [0x02f0d93c],EAX
//   XREF to: 02f0d93c (WRITE)
// 0050f48c: MOV EBP,dword ptr [0x02f0d93c]
//   Label: LAB_0050f48c
//   XREF to: 02f0d93c (READ)
// 0050f492: PUSH EBP
// 0050f493: CALL wincore_winrun.cpp_waitForMutex_FUN_005f3ff0
//   XREF to: 005f3ff0 (UNCONDITIONAL_CALL)
// 0050f498: ADD ESP,0x4
// 0050f49b: PUSH EDI
//   Label: LAB_0050f49b
// 0050f49c: PUSH ESI
// 0050f49d: PUSH EBX
// 0050f49e: PUSH 0x6360c2
//   XREF to: 006360c2 (DATA)
// 0050f4a3: CALL shape_memdbg.cpp_traceMemory_FUN_0050f150
//   XREF to: 0050f150 (UNCONDITIONAL_CALL)
// 0050f4a8: ADD ESP,0x10
// 0050f4ab: TEST EBX,EBX
// 0050f4ad: JNZ 0x0050f4d3
//   XREF to: 0050f4d3 (CONDITIONAL_JUMP)
// 0050f4af: PUSH EDI
// 0050f4b0: PUSH ESI
// 0050f4b1: MOV EAX,0x6360da
//   XREF to: 006360da (PARAM)
// 0050f4b6: MOV EDX,0x168
// 0050f4bb: PUSH 0x6360ee
//   XREF to: 006360ee (DATA)
// 0050f4c0: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0050f4c5: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 0050f4cb: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0050f4d0: ADD ESP,0xc
// 0050f4d3: MOV EBP,EBX
//   Label: LAB_0050f4d3
// 0050f4d5: TEST EBX,EBX
// 0050f4d7: JZ 0x0050f50d
//   XREF to: 0050f50d (CONDITIONAL_JUMP)
// 0050f4d9: PUSH EDI
//   Label: LAB_0050f4d9
// 0050f4da: PUSH ESI
// 0050f4db: LEA EBX,[EBP + -0x28]
// 0050f4de: PUSH EBX
// 0050f4df: CALL shape_memdbg.cpp_SMemHead_checkMemory_FUN_0050f020
//   XREF to: 0050f020 (UNCONDITIONAL_CALL)
// 0050f4e4: ADD ESP,0xc
// 0050f4e7: PUSH EBX
// 0050f4e8: CALL shape_memdbg.cpp_SMemHead_remove_FUN_0050ef20
//   XREF to: 0050ef20 (UNCONDITIONAL_CALL)
// 0050f4ed: ADD ESP,0x4
// 0050f4f0: PUSH EBX
// 0050f4f1: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 0050f4f6: ADD ESP,0x4
// 0050f4f9: MOV ESI,dword ptr [0x02f0d93c]
//   XREF to: 02f0d93c (READ)
// 0050f4ff: PUSH ESI
// 0050f500: CALL wincore_winrun.cpp_releaseMutex_FUN_005f4050
//   XREF to: 005f4050 (UNCONDITIONAL_CALL)
// 0050f505: ADD ESP,0x4
// 0050f508: POP EBP
// 0050f509: POP EDI
// 0050f50a: POP ESI
// 0050f50b: POP EBX
// 0050f50c: RET
// 0050f50d: MOV ECX,0x635e2f
//   Label: LAB_0050f50d
//   XREF to: 00635e2f (PARAM)
// 0050f512: MOV EBX,0x99
// 0050f517: PUSH 0x635e43
//   XREF to: 00635e43 (DATA)
// 0050f51c: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0050f522: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0050f528: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0050f52d: ADD ESP,0x4
// 0050f530: JMP 0x0050f4d9
//   XREF to: 0050f4d9 (UNCONDITIONAL_JUMP)
