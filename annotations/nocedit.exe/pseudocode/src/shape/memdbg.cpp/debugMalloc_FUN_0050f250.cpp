// Name: shape_memdbg.cpp_debugMalloc_FUN_0050f250
// Address: 0050f250
// Address Range: [[0050f250, 0050f347]]
// Convention: __cdecl
// Signature: void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
// Cross-references:
//   cockpit_ckptutil.c_loadBitmapWithPalette_FUN_004317b0 (004317b0) at 0043181c [UNCONDITIONAL_CALL]
//   cockpit_ckptutil.c_loadEdgeListFile_FUN_004331f0 (004331f0) at 00433378 [UNCONDITIONAL_CALL]
//   cockpit_ckptutil.c_loadRotatedBitmapFile_FUN_00434690 (00434690) at 004347b0 [UNCONDITIONAL_CALL]
//   cockpit_ckptutil.c_readBitmapFile_FUN_00431870 (00431870) at 00431911 [UNCONDITIONAL_CALL]
//   cockpit_ckptutil.c_rotateBitmap_FUN_00434870 (00434870) at 004348a9 [UNCONDITIONAL_CALL]
//   cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_0054b690 (0054b690) at 0054b816 [UNCONDITIONAL_CALL]
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadJoinedRAW_FUN_0054bf40 (0054bf40) at 0054c03d [UNCONDITIONAL_CALL]
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_0054c1e0 (0054c1e0) at 0054c228 [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_init_FUN_0044c190 (0044c190) at 0044c2a0 [UNCONDITIONAL_CALL]
//   core_dcube.cpp_CDemonCube_allocGeometryMemory_FUN_00456840 (00456840) at 0045696a [UNCONDITIONAL_CALL]
//   core_dfilter.cpp_CDemonFilter_allocMemory_FUN_00470260 (00470260) at 0047027f [UNCONDITIONAL_CALL]
//   core_dfilter.cpp_CFilterFX_openMovie_FUN_00470730 (00470730) at 004707db [UNCONDITIONAL_CALL]
//   core_dimage.cpp_CDemonImage_allocMemory_FUN_004719e0 (004719e0) at 00471a03 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_allocateFilter_FUN_00474720 (00474720) at 0047472f [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_init_FUN_004727c0 (004727c0) at 004727ef [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_openSomething_FUN_004e2910 (004e2910) at 004e2b22 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_rollCredits_FUN_004e4010 (004e4010) at 004e431a [UNCONDITIONAL_CALL]
//   core_ground.cpp_CGround_init_FUN_004eef00 (004eef00) at 004eef22 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_LoadingScriptFile_FUN_0055a370 (0055a370) at 0055a440 [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CZThumb_saveZBufferTable_FUN_00574910 (00574910) at 00574975 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_OpenSomethingBackdropThumbs_FUN_005769a0 (005769a0) at 00576b61 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_UserInputCreate_FUN_0057d660 (0057d660) at 0057d7e6 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_WriteActBackdrop_FUN_0057ce80 (0057ce80) at 0057cf16 [UNCONDITIONAL_CALL]
//   engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 (004105d0) at 00410640 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b881a [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 (004b5a50) at 004b6052 [UNCONDITIONAL_CALL]
//   engine_model.c_loadModelChunk_FUN_00528970 (00528970) at 005289aa [UNCONDITIONAL_CALL]
//   engine_model.c_loadModelFile_FUN_00527ec0 (00527ec0) at 00527f92 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650 (0054f650) at 0054fee0 [UNCONDITIONAL_CALL]
//   engine_texture.cpp_CTextureCache_loadTexture_FUN_005dcc00 (005dcc00) at 005dce62 [UNCONDITIONAL_CALL]
//   shape_design.c_allocateSpatialTreeNode_FUN_00457ed0 (00457ed0) at 00457ee9 [UNCONDITIONAL_CALL]
//   shape_design.c_complexPolygonReduction_FUN_00463b30 (00463b30) at 00463b76 [UNCONDITIONAL_CALL]
//   shape_design.c_cramTextureList_FUN_0046bb80 (0046bb80) at 0046d17f [UNCONDITIONAL_CALL]
//   shape_design.c_loadS3DModelFile_FUN_004593a0 (004593a0) at 004596e4 [UNCONDITIONAL_CALL]
//   shape_design.c_loadTextureData_FUN_0046b060 (0046b060) at 0046b123 [UNCONDITIONAL_CALL]
//   shape_design.c_mouseWheelPolygonReducer_FUN_004648e0 (004648e0) at 00464960 [UNCONDITIONAL_CALL]
//   shape_design.c_removeUnusedVertices_FUN_00463830 (00463830) at 0046385e [UNCONDITIONAL_CALL]
//   shape_design.c_vertexReducer_FUN_00467850 (00467850) at 004679e7 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_createModalWindow_FUN_004a0970 (004a0970) at 004a0c04 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_insert_FUN_004a2bc0 (004a2bc0) at 004a2c51 [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 (0050f1b0) at 0050f1c0 [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1d0 (0050f1d0) at 0050f1dc [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 (0050f1f0) at 0050f200 [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_debugRealloc_FUN_0050f540 (0050f540) at 0050f63c [UNCONDITIONAL_CALL]
//   shape_quantize.cpp_ColorQuantizationMaybe_FUN_00556490 (00556490) at 0055670e [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_CFileBitStream_init_FUN_0052ecf0 (0052ecf0) at 0052ed50 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_CMP3Decoder_parseHeader_FUN_00534630 (00534630) at 005346bf [UNCONDITIONAL_CALL]
//   wincore_wddvmem.cpp_allocateRenderBuffers_FUN_005ecac0 (005ecac0) at 005ecaef [UNCONDITIONAL_CALL]
//   wincore_wddvmem.cpp_initializeGraphicsSystem_FUN_005ecc10 (005ecc10) at 005ecc41 [UNCONDITIONAL_CALL]
//   wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0 (005ecef0) at 005ecfed [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_debugMalloc_d_s_d_00636032
//   TerminatedCString s_Returns_NULL_0063604a
//   TerminatedCString s_FAILED_0063605a
//   TerminatedCString s_Returns_08X_00636068
//   BOOL g_RecursiveCallFlag
//   HANDLE g_FileMutex
// Function calls:
//   crt_memory.c_malloc_FUN_00601bb0
//   shape_memdbg.cpp_SMemHead_add_FUN_0050eef0
//   shape_memdbg.cpp_SMemHead_recordSourceFile_FUN_0050eea0
//   shape_memdbg.cpp_traceMemory_FUN_0050f150
//   wincore_winrun.cpp_createMutex_FUN_005f3fe0
//   wincore_winrun.cpp_releaseMutex_FUN_005f4050
//   wincore_winrun.cpp_waitForMutex_FUN_005f3ff0

#include "nocturne.h"

void * __cdecl shape_memdbg_cpp_debugMalloc_FUN_0050f250(int size,char *filename,int line_number)

{
  char *pcVar1;
  SMemHead *header;
  char *in_stack_00000010;
  int in_stack_00000014;
  
  if (g_RecursiveCallFlag == 0) {
    if (g_FileMutex == (HANDLE)0x0) {
      g_FileMutex = wincore_winrun_cpp_createMutex_FUN_005f3fe0();
    }
    wincore_winrun_cpp_waitForMutex_FUN_005f3ff0(g_FileMutex);
  }
  shape_memdbg_cpp_traceMemory_FUN_0050f150
            ("debugMalloc(%d, %s, %d)",size,in_stack_00000010,in_stack_00000014);
  if (size != 0) {
    header = (SMemHead *)crt_memory_c_malloc_FUN_00601bb0(size + GAME_SMEMHEAD_AND_BACKGUARD_SIZE);
    if (header == (SMemHead *)0x0) {
      shape_memdbg_cpp_traceMemory_FUN_0050f150("   !!FAILED!!");
      wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_FileMutex);
      return (void *)0x0;
    }
    header->num_bytes = size;
    shape_memdbg_cpp_SMemHead_recordSourceFile_FUN_0050eea0(header,in_stack_00000010);
    header->front_guard = GAME_DEADBEEF;
    header->source_line = in_stack_00000014;
    pcVar1 = header[1].source_file + header->num_bytes + -0xc;
    pcVar1[0] = -0x53;
    pcVar1[1] = -0x22;
    pcVar1[2] = -0x11;
    pcVar1[3] = -0x42;
    shape_memdbg_cpp_SMemHead_add_FUN_0050eef0(header);
    shape_memdbg_cpp_traceMemory_FUN_0050f150("   Returns %08X");
    wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_FileMutex);
    return header + 1;
  }
  shape_memdbg_cpp_traceMemory_FUN_0050f150("   Returns NULL");
  wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_FileMutex);
  return (void *)0x0;
}


// Assembly code:
// 0050f250: PUSH EBX
//   Label: shape_memdbg.cpp_debugMalloc_FUN_0050f250
// 0050f251: PUSH ESI
// 0050f252: PUSH EDI
// 0050f253: PUSH EBP
// 0050f254: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0050f258: CMP dword ptr [0x02f0ca50],0x0
//   XREF to: 02f0ca50 (READ)
// 0050f25f: JNZ 0x0050f283
//   XREF to: 0050f283 (CONDITIONAL_JUMP)
// 0050f261: CMP dword ptr [0x02f0d93c],0x0
//   XREF to: 02f0d93c (READ)
// 0050f268: JNZ 0x0050f274
//   XREF to: 0050f274 (CONDITIONAL_JUMP)
// 0050f26a: CALL wincore_winrun.cpp_createMutex_FUN_005f3fe0
//   XREF to: 005f3fe0 (UNCONDITIONAL_CALL)
// 0050f26f: MOV [0x02f0d93c],EAX
//   XREF to: 02f0d93c (WRITE)
// 0050f274: MOV EBX,dword ptr [0x02f0d93c]
//   Label: LAB_0050f274
//   XREF to: 02f0d93c (READ)
// 0050f27a: PUSH EBX
// 0050f27b: CALL wincore_winrun.cpp_waitForMutex_FUN_005f3ff0
//   XREF to: 005f3ff0 (UNCONDITIONAL_CALL)
// 0050f280: ADD ESP,0x4
// 0050f283: MOV EDI,dword ptr [ESP + 0x1c]
//   Label: LAB_0050f283
//   XREF to: Stack[0xc] (READ)
// 0050f287: PUSH EDI
// 0050f288: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0050f28c: PUSH EBP
// 0050f28d: PUSH ESI
// 0050f28e: PUSH 0x636032
//   XREF to: 00636032 (DATA)
// 0050f293: CALL shape_memdbg.cpp_traceMemory_FUN_0050f150
//   XREF to: 0050f150 (UNCONDITIONAL_CALL)
// 0050f298: ADD ESP,0x10
// 0050f29b: TEST ESI,ESI
// 0050f29d: JZ 0x0050f2d4
//   XREF to: 0050f2d4 (CONDITIONAL_JUMP)
// 0050f29f: LEA EAX,[ESI + 0x2c]
// 0050f2a2: PUSH EAX
// 0050f2a3: CALL crt_memory.c_malloc_FUN_00601bb0
//   XREF to: 00601bb0 (UNCONDITIONAL_CALL)
// 0050f2a8: MOV EBX,EAX
// 0050f2aa: ADD ESP,0x4
// 0050f2ad: TEST EAX,EAX
// 0050f2af: JNZ 0x0050f2f7
//   XREF to: 0050f2f7 (CONDITIONAL_JUMP)
// 0050f2b1: PUSH 0x63605a
//   XREF to: 0063605a (DATA)
// 0050f2b6: CALL shape_memdbg.cpp_traceMemory_FUN_0050f150
//   XREF to: 0050f150 (UNCONDITIONAL_CALL)
// 0050f2bb: ADD ESP,0x4
// 0050f2be: MOV ECX,dword ptr [0x02f0d93c]
//   XREF to: 02f0d93c (READ)
// 0050f2c4: PUSH ECX
// 0050f2c5: CALL wincore_winrun.cpp_releaseMutex_FUN_005f4050
//   XREF to: 005f4050 (UNCONDITIONAL_CALL)
// 0050f2ca: ADD ESP,0x4
// 0050f2cd: MOV EAX,EBX
// 0050f2cf: POP EBP
// 0050f2d0: POP EDI
// 0050f2d1: POP ESI
// 0050f2d2: POP EBX
// 0050f2d3: RET
// 0050f2d4: PUSH 0x63604a
//   Label: LAB_0050f2d4
//   XREF to: 0063604a (DATA)
// 0050f2d9: CALL shape_memdbg.cpp_traceMemory_FUN_0050f150
//   XREF to: 0050f150 (UNCONDITIONAL_CALL)
// 0050f2de: ADD ESP,0x4
// 0050f2e1: MOV EBX,dword ptr [0x02f0d93c]
//   XREF to: 02f0d93c (READ)
// 0050f2e7: PUSH EBX
// 0050f2e8: CALL wincore_winrun.cpp_releaseMutex_FUN_005f4050
//   XREF to: 005f4050 (UNCONDITIONAL_CALL)
// 0050f2ed: ADD ESP,0x4
// 0050f2f0: XOR EAX,EAX
// 0050f2f2: POP EBP
// 0050f2f3: POP EDI
// 0050f2f4: POP ESI
// 0050f2f5: POP EBX
// 0050f2f6: RET
// 0050f2f7: PUSH EBP
//   Label: LAB_0050f2f7
// 0050f2f8: PUSH EAX
// 0050f2f9: MOV dword ptr [EAX + 0x8],ESI
// 0050f2fc: CALL shape_memdbg.cpp_SMemHead_recordSourceFile_FUN_0050eea0
//   XREF to: 0050eea0 (UNCONDITIONAL_CALL)
// 0050f301: LEA ESI,[EBX + 0x28]
// 0050f304: MOV dword ptr [EBX + 0x24],0xdeadbeef
// 0050f30b: ADD ESP,0x8
// 0050f30e: MOV EAX,dword ptr [EBX + 0x8]
// 0050f311: MOV dword ptr [EBX + 0x20],EDI
// 0050f314: PUSH EBX
// 0050f315: MOV dword ptr [ESI + EAX*0x1],0xbeefdead
// 0050f31c: CALL shape_memdbg.cpp_SMemHead_add_FUN_0050eef0
//   XREF to: 0050eef0 (UNCONDITIONAL_CALL)
// 0050f321: ADD ESP,0x4
// 0050f324: PUSH ESI
// 0050f325: PUSH 0x636068
//   XREF to: 00636068 (DATA)
// 0050f32a: CALL shape_memdbg.cpp_traceMemory_FUN_0050f150
//   XREF to: 0050f150 (UNCONDITIONAL_CALL)
// 0050f32f: ADD ESP,0x8
// 0050f332: MOV EDX,dword ptr [0x02f0d93c]
//   XREF to: 02f0d93c (READ)
// 0050f338: PUSH EDX
// 0050f339: CALL wincore_winrun.cpp_releaseMutex_FUN_005f4050
//   XREF to: 005f4050 (UNCONDITIONAL_CALL)
// 0050f33e: ADD ESP,0x4
// 0050f341: MOV EAX,ESI
// 0050f343: POP EBP
// 0050f344: POP EDI
// 0050f345: POP ESI
// 0050f346: POP EBX
// 0050f347: RET
