// Name: sound_mp3.cpp_testMP3DecoderBenchmark_FUN_00534210
// Address: 00534210
// Address Range: [[00534210, 005344ea]]
// Convention: __cdecl
// Signature: void sound_mp3.cpp_testMP3DecoderBenchmark_FUN_00534210(void)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_testMP3DecoderBenchmark_FUN_00534210(void)

{
  CMP3Decoder *pCVar1;
  CMP3Decoder *pCVar2;
  CMP3Decoder *pCVar3;
  SIZE_T samples_requested;
  FILE *pFVar4;
  SIZE_T size;
  int iVar5;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int iStack00000008;
  int iStack0000000c;
  CMP3Decoder *in_stack_ffffffcc;
  int in_stack_ffffffd4;
  FILE *local_28;
  FILE *file_ptr;
  CMP3Decoder *local_18;
  SIZE_T local_14;
  
  crt_io_c_deleteFile_FUN_005ff9d0("test.raw");
  pCVar1 = (CMP3Decoder *)
           shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                     (g_CEditorToolsPtr,"Write file?");
  pCVar2 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x8630,"..\\sound\\mp3.cpp",0xdc8);
  if (pCVar2 != (CMP3Decoder *)0x0) {
    sound_mp3_cpp_CMP3Decoder_ctor_FUN_005344f0(pCVar2);
  }
  pCVar3 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x8630,"..\\sound\\mp3.cpp",0xdc8);
  pCVar2 = (CMP3Decoder *)0x0;
  if (pCVar3 != (CMP3Decoder *)0x0) {
    pCVar2 = sound_mp3_cpp_CMP3Decoder_ctor_FUN_005344f0(pCVar3);
  }
  pCVar3 = pCVar2;
  sound_mp3_cpp_CMP3Decoder_openFile_FUN_00534550(in_stack_ffffffcc,"pixies.mp3");
  sound_mp3_cpp_CMP3Decoder_openFile_FUN_00534550(pCVar2,"pixies.mp3");
  file_ptr = (FILE *)(*(int *)(in_stack_ffffffd4 + 0x104) * 2);
  samples_requested = (SIZE_T)(0x20000 / (longlong)(int)file_ptr);
  pFVar4 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     ("pixies.raw",(char *)0x0,"wb","..\\sound\\mp3.cpp",0xdd2
                     );
  if (pFVar4 == (FILE *)0x0) {
    g_CurrentFilename = "..\\sound\\mp3.cpp";
    g_CurrentLineNumber = 0xdd3;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Hose!",pCVar3);
  }
  pFVar4 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     ("pixies2.raw",(char *)0x0,"wb","..\\sound\\mp3.cpp",
                      0xdd4);
  if (pFVar4 == (FILE *)0x0) {
    g_CurrentFilename = "..\\sound\\mp3.cpp";
    g_CurrentLineNumber = 0xdd5;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Hose!");
  }
  iVar5 = 0;
  crt_time_c_time_with_rounding_FUN_006001f0((time_t *)&stack0xffffffc8);
  do {
    size = sound_mp3_cpp_CMP3Decoder_read_FUN_00534a60
                     (pCVar1,(short *)g_MpegPCMDecodeTestBuffer,samples_requested);
    if (local_18 != (CMP3Decoder *)0x0) {
      crt_stdio_c_fwrite_FUN_005fdc00(g_MpegPCMDecodeTestBuffer,size,local_14,(FILE *)pCVar1);
    }
    iVar5 = iVar5 + unaff_EBP * size;
    if (local_14 != 0) {
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"%.1fk");
    }
  } while (size == samples_requested);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\sound\\mp3.cpp",0xde8);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_28,"..\\sound\\mp3.cpp",0xde9);
  g_CurrentDebugFilename = "..\\sound\\mp3.cpp";
  g_CurrentDebugLine = 0xdeb;
  pCVar1 = sound_mp3_cpp_CMP3Decoder_dtor_FUN_00534530(local_18);
  shape_memdbg_cpp_debugFree_FUN_0050f210(pCVar1);
  g_CurrentDebugFilename = "..\\sound\\mp3.cpp";
  g_CurrentDebugLine = 0xdec;
  if (local_18 != (CMP3Decoder *)0x0) {
    pCVar1 = sound_mp3_cpp_CMP3Decoder_dtor_FUN_00534530(local_18);
    shape_memdbg_cpp_debugFree_FUN_0050f210(pCVar1);
  }
  crt_time_c_time_with_rounding_FUN_006001f0((time_t *)&local_18);
  iStack0000000c = local_14 - (int)local_18;
  g_CurrentLineNumber = 0xdf1;
  g_CurrentFilename = "..\\sound\\mp3.cpp";
  iStack00000008 = iVar5;
  core_main_c_displayErrorAndQuit_FUN_00506f10("%d bytes / %d seconds = %.1f kbytes/sec");
  return;
}
