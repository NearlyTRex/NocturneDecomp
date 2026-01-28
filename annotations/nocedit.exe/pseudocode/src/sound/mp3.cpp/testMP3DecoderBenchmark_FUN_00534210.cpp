// Name: sound_mp3.cpp_testMP3DecoderBenchmark_FUN_00534210
// Address: 00534210
// Address Range: [[00534210, 005344ea]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_testMP3DecoderBenchmark_FUN_00534210(void)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_testMP3DecoderBenchmark_FUN_00534210(void)

{
  CMP3Decoder *pCVar1;
  CMP3Decoder *this_ptr;
  SIZE_T samples_requested;
  SIZE_T size;
  int iVar2;
  int local_38;
  int local_34;
  FILE *local_30;
  CMP3Decoder *local_2c;
  FILE *local_28;
  CMP3Decoder *local_24;
  int local_20;
  SIZE_T local_1c;
  int local_18;
  int local_14;
  
  crt_io_c_deleteFile_FUN_005ff9d0("test.raw");
  local_20 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                       (g_CEditorToolsPtr,"Write file?");
  pCVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x8630,"..\\sound\\mp3.cpp",0xdc8);
  local_24 = (CMP3Decoder *)0x0;
  if (pCVar1 != (CMP3Decoder *)0x0) {
    local_24 = sound_mp3_cpp_CMP3Decoder_ctor_FUN_005344f0(pCVar1);
  }
  this_ptr = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x8630,"..\\sound\\mp3.cpp",0xdc8);
  pCVar1 = (CMP3Decoder *)0x0;
  if (this_ptr != (CMP3Decoder *)0x0) {
    pCVar1 = sound_mp3_cpp_CMP3Decoder_ctor_FUN_005344f0(this_ptr);
  }
  local_2c = pCVar1;
  sound_mp3_cpp_CMP3Decoder_openFile_FUN_00534550(local_24,"pixies.mp3");
  sound_mp3_cpp_CMP3Decoder_openFile_FUN_00534550(pCVar1,"pixies.mp3");
  local_1c = local_24->num_channels * 2;
  samples_requested = (SIZE_T)(0x20000 / (longlong)(int)local_1c);
  local_28 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       ("pixies.raw",(char *)0x0,"wb","..\\sound\\mp3.cpp",
                        0xdd2);
  if (local_28 == (FILE *)0x0) {
    g_CurrentFilename = "..\\sound\\mp3.cpp";
    g_CurrentLineNumber = 0xdd3;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Hose!");
  }
  local_30 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       ("pixies2.raw",(char *)0x0,"wb","..\\sound\\mp3.cpp",
                        0xdd4);
  if (local_30 == (FILE *)0x0) {
    g_CurrentFilename = "..\\sound\\mp3.cpp";
    g_CurrentLineNumber = 0xdd5;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Hose!");
  }
  iVar2 = 0;
  crt_time_c_time_with_rounding_FUN_006001f0(&local_38);
  do {
    size = sound_mp3_cpp_CMP3Decoder_read_FUN_00534a60
                     (local_24,(short *)g_MpegPCMDecodeTestBuffer,samples_requested);
    if (local_20 != 0) {
      crt_stdio_c_fwrite_FUN_005fdc00(g_MpegPCMDecodeTestBuffer,size,local_1c,local_28);
    }
    iVar2 = iVar2 + local_1c * size;
    if (local_20 != 0) {
      local_18 = iVar2;
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"%.1fk");
    }
  } while (size == samples_requested);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_28,"..\\sound\\mp3.cpp",0xde8);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_30,"..\\sound\\mp3.cpp",0xde9);
  g_CurrentDebugFilename = "..\\sound\\mp3.cpp";
  g_CurrentDebugLine = 0xdeb;
  pCVar1 = sound_mp3_cpp_CMP3Decoder_dtor_FUN_00534530(local_24);
  shape_memdbg_cpp_debugFree_FUN_0050f210(pCVar1);
  g_CurrentDebugFilename = "..\\sound\\mp3.cpp";
  g_CurrentDebugLine = 0xdec;
  if (local_2c != (CMP3Decoder *)0x0) {
    pCVar1 = sound_mp3_cpp_CMP3Decoder_dtor_FUN_00534530(local_2c);
    shape_memdbg_cpp_debugFree_FUN_0050f210(pCVar1);
  }
  crt_time_c_time_with_rounding_FUN_006001f0(&local_34);
  local_14 = local_34 - local_38;
  g_CurrentLineNumber = 0xdf1;
  g_CurrentFilename = "..\\sound\\mp3.cpp";
  local_18 = iVar2;
  core_main_c_displayErrorAndQuit_FUN_00506f10
            ("%d bytes / %d seconds = %.1f kbytes/sec",iVar2,local_14,
             ((double)iVar2 / (double)local_14) * 0.0009765625);
  return;
}
