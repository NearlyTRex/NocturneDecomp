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
  CMP3Decoder *pCVar2;
  SIZE_T samples_requested;
  SIZE_T size;
  int iVar2;
  time_t local_38;
  time_t local_34;
  _FILE *local_30;
  CMP3Decoder *local_2c;
  _FILE *local_28;
  CMP3Decoder *local_24;
  int local_20;
  SIZE_T local_1c;
  int local_18;
  int local_14;
  
  remove("test.raw");
  local_20 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                       (g_CEditorToolsPtr,"Write file?");
  pCVar1 = (CMP3Decoder *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(0x8630,"..\\sound\\mp3.cpp",3528);
  local_24 = (CMP3Decoder *)0x0;
  if (pCVar1 != (CMP3Decoder *)0x0) {
    local_24 = sound_mp3_cpp_CMP3Decoder_ctor_FUN_005344f0(pCVar1);
  }
  this_ptr = (CMP3Decoder *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0(0x8630,"..\\sound\\mp3.cpp",3528)
  ;
  pCVar2 = (CMP3Decoder *)0x0;
  if (this_ptr != (CMP3Decoder *)0x0) {
    pCVar2 = sound_mp3_cpp_CMP3Decoder_ctor_FUN_005344f0(this_ptr);
  }
  local_2c = pCVar2;
  sound_mp3_cpp_CMP3Decoder_openFile_FUN_00534550(local_24,"pixies.mp3");
  sound_mp3_cpp_CMP3Decoder_openFile_FUN_00534550(pCVar2,"pixies.mp3");
  local_1c = local_24->num_channels * 2;
  samples_requested = (SIZE_T)(0x20000 / (longlong)(int)local_1c);
  local_28 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       ("pixies.raw",(char *)0x0,"wb","..\\sound\\mp3.cpp",
                        3538);
  if (local_28 == (_FILE *)0x0) {
    g_CurrentFilename = "..\\sound\\mp3.cpp";
    g_CurrentLineNumber = 3539;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Hose!");
  }
  local_30 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       ("pixies2.raw",(char *)0x0,"wb","..\\sound\\mp3.cpp",
                        3540);
  if (local_30 == (_FILE *)0x0) {
    g_CurrentFilename = "..\\sound\\mp3.cpp";
    g_CurrentLineNumber = 3541;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Hose!");
  }
  iVar2 = 0;
  _time(&local_38);
  do {
    size = sound_mp3_cpp_CMP3Decoder_read_FUN_00534a60
                     (local_24,(short *)g_MpegPCMDecodeTestBuffer,samples_requested);
    if (local_20 != 0) {
      _fwrite(g_MpegPCMDecodeTestBuffer,size,local_1c,local_28);
    }
    iVar2 = iVar2 + local_1c * size;
    if (local_20 != 0) {
      local_18 = iVar2;
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"%.1fk",(double)iVar2 * 0.0009765625);
    }
  } while (size == samples_requested);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_28,"..\\sound\\mp3.cpp",3560);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_30,"..\\sound\\mp3.cpp",3561);
  g_CurrentDebugFilename = "..\\sound\\mp3.cpp";
  g_CurrentDebugLine = 0xdeb;
  pCVar2 = sound_mp3_cpp_CMP3Decoder_dtor_FUN_00534530(local_24,0);
  shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(pCVar2);
  g_CurrentDebugFilename = "..\\sound\\mp3.cpp";
  g_CurrentDebugLine = 0xdec;
  if (local_2c != (CMP3Decoder *)0x0) {
    pCVar2 = sound_mp3_cpp_CMP3Decoder_dtor_FUN_00534530(local_2c,0);
    shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(pCVar2);
  }
  _time(&local_34);
  local_14 = local_34 - local_38;
  g_CurrentLineNumber = 3569;
  g_CurrentFilename = "..\\sound\\mp3.cpp";
  local_18 = iVar2;
  core_main_c_displayErrorAndQuit_FUN_00506f10
            ("%d bytes / %d seconds = %.1f kbytes/sec",iVar2,local_14,
             ((double)iVar2 / (double)local_14) * 0.0009765625);
  return;
}
