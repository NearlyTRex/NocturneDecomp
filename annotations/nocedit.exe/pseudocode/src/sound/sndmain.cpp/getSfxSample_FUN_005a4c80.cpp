// Name: sound_sndmain.cpp_getSfxSample_FUN_005a4c80
// Address: 005a4c80
// Address Range: [[005a4c80, 005a5179]]
// Convention: __cdecl
// Signature: CSfxSample * __cdecl sound_sndmain_cpp_getSfxSample_FUN_005a4c80(char *filename)

#include "nocturne.h"

CSfxSample * __cdecl sound_sndmain_cpp_getSfxSample_FUN_005a4c80(char *filename)

{
  char cVar1;
  int iVar2;
  long lVar3;
  void *buffer;
  SIZE_T size;
  SIZE_T SVar4;
  short *output_buffer;
  uint uVar5;
  CSfxSample *pCVar6;
  int iVar7;
  CSfxSample *pCVar8;
  bool bVar9;
  byte bVar10;
  char *pcVar11;
  FILE *file;
  char local_114;
  byte local_113 [255];
  FILE *local_14;
  
  bVar10 = 0;
  pCVar6 = g_SfxSamples;
  iVar7 = 0;
  do {
    iVar2 = crt_string_c_stricmp_FUN_005fe7f0((char *)pCVar6,filename);
    if (iVar2 == 0) {
      return pCVar6;
    }
    iVar7 = iVar7 + 1;
    pCVar6 = pCVar6 + 1;
  } while (iVar7 < 0x40);
  iVar7 = 0;
  do {
    g_LastSampleAccessIndex = g_LastSampleAccessIndex + 1;
    if (0x3f < g_LastSampleAccessIndex) {
      g_LastSampleAccessIndex = 0;
    }
    if ((g_SfxSamples[g_LastSampleAccessIndex].taken == 0) &&
       (g_SfxSamples[g_LastSampleAccessIndex].ref_count == 0)) {
      pCVar6 = g_SfxSamples + g_LastSampleAccessIndex;
      bVar9 = pCVar6 == (CSfxSample *)0x0;
      goto LAB_005a4cea;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x40);
  pCVar6 = (CSfxSample *)0x0;
  bVar9 = true;
LAB_005a4cea:
  if (bVar9) {
    return pCVar6;
  }
  sound_sndmain_cpp_CSfxSample_freeMemory_FUN_005a62c0(pCVar6);
  if ((g_GlobalMP3DecoderInitialized & 1) == 0) {
    g_GlobalMP3DecoderInitialized = g_GlobalMP3DecoderInitialized | 1;
    sound_mp3_cpp_CMP3Decoder_ctor_FUN_005344f0(&g_CMP3DecoderInstance);
    crt_stdlib_c_atexit_FUN_005ff060(&g_CMP3DecoderDestructorNode1);
  }
  local_14 = (FILE *)0x0;
  iVar7 = engine_dosio_c_getFileSize_FUN_00481880("sound",filename);
  pcVar11 = filename;
  pCVar8 = pCVar6;
  if (iVar7 < 1) goto LAB_005a4ef8;
  do {
    cVar1 = *pcVar11;
    (pCVar8->sample_info).name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar11[1];
    (pCVar8->sample_info).name[1] = cVar1;
    pcVar11 = pcVar11 + 2;
    pCVar8 = (CSfxSample *)((pCVar8->sample_info).name + 2);
  } while (cVar1 != '\0');
  engine_dosio_c_splitPath_FUN_00481f20(filename,(char *)0x0,(char *)0x0,(char *)0x0,&local_114);
  if (local_114 == '.') {
    uVar5 = 0xffffffff;
    pcVar11 = &local_114;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + (uint)bVar10 * -2 + 1;
    } while (cVar1 != '\0');
    crt_string_c_memmove_FUN_005fe5e0(&local_114,local_113,~uVar5 - 1);
  }
  iVar7 = crt_string_c_stricmp_FUN_005fe7f0(&local_114,"wav");
  if (iVar7 == 0) {
    local_14 = engine_dosio_c_getFile_FUN_00481a50("sound",filename,"rb");
    if (local_14 == (FILE *)0x0) {
      g_CurrentFilename = "..\\sound\\sndmain.cpp";
      g_CurrentLineNumber = 0x2fe;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open %s",filename);
    }
    lVar3 = crt_stdio_c_ftell_FUN_00601560(local_14);
    pCVar6->file_offset = lVar3;
    iVar7 = sound_sndmain_cpp_parseWavFile_FUN_005a3fe0(local_14,&pCVar6->file_offset,pCVar6);
    if (iVar7 == 0) goto LAB_005a4ef8;
    sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_005a45c0(pCVar6);
    pCVar6->taken = 0;
    pCVar6->ref_count = 0;
    pCVar6->buffer_id = 0;
    pCVar6->streaming_slot_index = -1;
    iVar7 = (pCVar6->sample_info).sample_count;
    pCVar6->streaming_buffer_size = iVar7;
    pCVar6->stream_read_position = iVar7;
    pCVar6->stream_write_position = iVar7;
    iVar7 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_005a6170(pCVar6);
    if (iVar7 == 0) goto LAB_005a4ef8;
    crt_stdio_c_fseek_FUN_005ffacc(local_14,pCVar6->file_offset,0);
    buffer = sound_sndmain_cpp_CSfxSample_lock_FUN_005a6430
                       (pCVar6,0,(pCVar6->sample_info).sample_count);
    if (buffer == (void *)0x0) {
      pcVar11 = "Failed to lock sample %s\n";
    }
    else {
      SVar4 = (pCVar6->sample_info).sample_count;
      file = local_14;
      size = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_005a8550(pCVar6);
      SVar4 = crt_stdio_c_fread_FUN_005fd990(buffer,size,SVar4,file);
      if ((SVar4 == (pCVar6->sample_info).sample_count) && ((local_14->_flag & 0x20) == 0)) {
        sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_005a6540(pCVar6);
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_14,"..\\sound\\sndmain.cpp",0x337);
        return pCVar6;
      }
      pcVar11 = "Error reading file data for %s\n";
    }
  }
  else {
    iVar7 = crt_string_c_stricmp_FUN_005fe7f0(&local_114,"mp3");
    if (iVar7 != 0) {
      g_CurrentFilename = "..\\sound\\sndmain.cpp";
      g_CurrentLineNumber = 0x37b;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Unknown sample file format extension: %s",filename);
      return pCVar6;
    }
    sound_mp3_cpp_CMP3Decoder_openFile_FUN_00534550(&g_CMP3DecoderInstance,filename);
    (pCVar6->sample_info).bit_depth = 0x10;
    (pCVar6->sample_info).num_channels = g_CMP3DecoderInstance.num_channels;
    iVar7 = g_CMP3DecoderInstance.sample_rate;
    (pCVar6->sample_info).sample_count = -1;
    (pCVar6->sample_info).sample_rate = iVar7;
    sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_005a45c0(pCVar6);
    if ((pCVar6->sample_info).sample_count < 0) {
      g_CurrentFilename = "..\\sound\\sndmain.cpp";
      g_CurrentLineNumber = 0x34d;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Don't know length of sample %s",filename);
    }
    pCVar6->taken = 0;
    pCVar6->ref_count = 0;
    pCVar6->buffer_id = 0;
    pCVar6->streaming_slot_index = -1;
    iVar7 = (pCVar6->sample_info).sample_count;
    pCVar6->streaming_buffer_size = iVar7;
    pCVar6->stream_read_position = iVar7;
    pCVar6->stream_write_position = iVar7;
    iVar7 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_005a6170(pCVar6);
    if (iVar7 == 0) goto LAB_005a4ef8;
    output_buffer =
         sound_sndmain_cpp_CSfxSample_lock_FUN_005a6430(pCVar6,0,(pCVar6->sample_info).sample_count)
    ;
    if (output_buffer == (short *)0x0) {
      pcVar11 = "Failed to lock sample %s\n";
    }
    else {
      iVar7 = sound_mp3_cpp_CMP3Decoder_read_FUN_00534a60
                        (&g_CMP3DecoderInstance,output_buffer,(pCVar6->sample_info).sample_count);
      if (iVar7 == (pCVar6->sample_info).sample_count) {
        sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_005a6540(pCVar6);
        return pCVar6;
      }
      pcVar11 = "Error decoding file data from %s\n";
    }
  }
  sound_sndmain_cpp_logSoundError_FUN_005adba0(pcVar11,filename);
LAB_005a4ef8:
  sound_mp3_cpp_CMP3Decoder_free_FUN_005349e0(&g_CMP3DecoderInstance);
  sound_sndmain_cpp_CSfxSample_freeMemory_FUN_005a62c0(pCVar6);
  if (local_14 != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_14,"..\\sound\\sndmain.cpp",0x2eb);
  }
  return (CSfxSample *)0x0;
}
