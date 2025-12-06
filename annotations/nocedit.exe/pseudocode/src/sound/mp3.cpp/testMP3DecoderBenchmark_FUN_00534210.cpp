// Name: sound_mp3.cpp_testMP3DecoderBenchmark_FUN_00534210
// Address: 00534210
// Address Range: [[00534210, 005344ea]]
// Convention: __cdecl
// Signature: void sound_mp3.cpp_testMP3DecoderBenchmark_FUN_00534210(void)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_testMP3DecoderBenchmark_FUN_00534210(void)

{
  CMP3Decoder *pCVar1;
  SIZE_T samples_requested;
  FILE *pFVar2;
  SIZE_T size;
  int unaff_EBX;
  int iVar3;
  BADSPACEBASE *in_ESP;
  CMP3Decoder *unaff_EDI;
  FILE *in_stack_00000008;
  FILE *in_stack_0000000c;
  CMP3Decoder *in_stack_00000010;
  CMP3Decoder *in_stack_00000018;
  SIZE_T in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  int iStack00000038;
  int iStack0000003c;
  CMP3Decoder *pCVar4;
  
  crt_io_c_deleteFile_FUN_005ff9d0("test.raw");
  shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
            (g_CEditorToolsPtr,"Write file?");
  pCVar1 = (CMP3Decoder *)
           shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x8630,"..\\sound\\mp3.cpp",0xdc8);
  if (pCVar1 != (CMP3Decoder *)0x0) {
    sound_mp3_cpp_CMP3Decoder_ctor_FUN_005344f0(pCVar1);
  }
  pCVar1 = (CMP3Decoder *)
           shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x8630,"..\\sound\\mp3.cpp",0xdc8);
  if (pCVar1 != (CMP3Decoder *)0x0) {
    pCVar1 = sound_mp3_cpp_CMP3Decoder_ctor_FUN_005344f0(pCVar1);
  }
  pCVar4 = pCVar1;
  sound_mp3_cpp_CMP3Decoder_openFile_FUN_00534550(unaff_EDI,"pixies.mp3");
  sound_mp3_cpp_CMP3Decoder_openFile_FUN_00534550(pCVar1,"pixies.mp3");
  samples_requested = (SIZE_T)(0x20000 / (longlong)(*(int *)(unaff_EBX + 0x104) * 2));
  pFVar2 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     ("pixies.raw",(char *)0x0,"wb","..\\sound\\mp3.cpp",0xdd2
                     );
  if (pFVar2 == (FILE *)0x0) {
    g_CurrentFilename = "..\\sound\\mp3.cpp";
    g_CurrentLineNumber = 0xdd3;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Hose!",pCVar4);
  }
  pFVar2 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     ("pixies2.raw",(char *)0x0,"wb","..\\sound\\mp3.cpp",
                      0xdd4);
  if (pFVar2 == (FILE *)0x0) {
    g_CurrentFilename = "..\\sound\\mp3.cpp";
    g_CurrentLineNumber = 0xdd5;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Hose!");
  }
  iVar3 = 0;
  crt_time_c_time_with_rounding_FUN_006001f0((time_t *)&stack0xfffffff8);
  do {
    size = sound_mp3_cpp_CMP3Decoder_read_FUN_00534a60
                     (in_stack_00000010,(short *)g_MpegPCMDecodeTestBuffer,samples_requested);
    if (in_stack_00000018 != (CMP3Decoder *)0x0) {
      crt_stdio_c_fwrite_FUN_005fdc00
                (g_MpegPCMDecodeTestBuffer,size,in_stack_0000001c,(FILE *)in_stack_00000010);
    }
    iVar3 = iVar3 + in_stack_00000020 * size;
    if (in_stack_0000001c != 0) {
      in_stack_00000024 = iVar3;
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"%.1fk");
    }
  } while (size == samples_requested);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(in_stack_0000000c,"..\\sound\\mp3.cpp",0xde8);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(in_stack_00000008,"..\\sound\\mp3.cpp",0xde9);
  g_CurrentDebugFilename = "..\\sound\\mp3.cpp";
  g_CurrentDebugLine = 0xdeb;
  pCVar1 = sound_mp3_cpp_CMP3Decoder_dtor_FUN_00534530(in_stack_00000018);
  shape_memdbg_cpp_debugFree_FUN_0050f210(pCVar1);
  g_CurrentDebugFilename = "..\\sound\\mp3.cpp";
  g_CurrentDebugLine = 0xdec;
  if (in_stack_00000018 != (CMP3Decoder *)0x0) {
    pCVar1 = sound_mp3_cpp_CMP3Decoder_dtor_FUN_00534530(in_stack_00000018);
    shape_memdbg_cpp_debugFree_FUN_0050f210(pCVar1);
  }
  crt_time_c_time_with_rounding_FUN_006001f0((time_t *)&stack0x00000018);
  iStack0000003c = in_stack_0000001c - (int)in_stack_00000018;
  g_CurrentLineNumber = 0xdf1;
  g_CurrentFilename = "..\\sound\\mp3.cpp";
  iStack00000038 = iVar3;
  core_main_c_displayErrorAndQuit_FUN_00506f10("%d bytes / %d seconds = %.1f kbytes/sec");
  return;
}
