// Name: sound_sndmain.cpp_loadStreamingSoundFile_FUN_005a5200
// Address: 005a5200
// MANUAL RECONSTRUCTION
// Address Range: [[005a5200, 005a5520]]
// Convention: __cdecl
// Signature: CSfxSample * __cdecl sound_sndmain_cpp_loadStreamingSoundFile_FUN_005a5200(int slot_index,char *filename)

#include "nocturne.h"

CSfxSample * __cdecl sound_sndmain_cpp_loadStreamingSoundFile_FUN_005a5200(int slot_index,char *filename)

{
  CMP3Decoder *pCVar4;
  float fVar5;
  int iVar7;
  CMP3Decoder *this_ptr;
  CMP3Decoder *pCVar3;
  _FILE *p_Var4;
  long lVar5;
  int iVar6;
  char local_114 [256];
  CSfxSample *local_14;
  float fVar2;
  
  iVar6 = 0;
  do {
    g_LastSampleAccessIndex = g_LastSampleAccessIndex + 1;
    if (0x3f < g_LastSampleAccessIndex) {
      g_LastSampleAccessIndex = 0;
    }
    if ((g_SfxSamples[g_LastSampleAccessIndex].taken == 0) &&
       (g_SfxSamples[g_LastSampleAccessIndex].ref_count == 0)) {
      local_14 = g_SfxSamples + g_LastSampleAccessIndex;
      goto LAB_005a5242;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x40);
  local_14 = (CSfxSample *)0x0;
LAB_005a5242:
  if (local_14 == (CSfxSample *)0x0) {
    return (CSfxSample *)0x0;
  }
  engine_dosio_c_splitPath_FUN_00481f20(filename,(char *)0x0,(char *)0x0,(char *)0x0,local_114);
  iVar7 = _stricmp(local_114,"mp3");
  if ((iVar7 == 0) ||
     (iVar7 = _stricmp(local_114,".mp3"), iVar7 == 0)) {
    iVar7 = engine_dosio_c_getFileSize_FUN_00481880("sound",filename);
    if (iVar7 < 1) goto LAB_005a5505;
    this_ptr = (CMP3Decoder *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0
                         (0x8630,"..\\sound\\sndmain.cpp",0x3c5);
    pCVar3 = (CMP3Decoder *)0x0;
    if (this_ptr != (CMP3Decoder *)0x0) {
      pCVar3 = sound_mp3_cpp_CMP3Decoder_ctor_FUN_005344f0(this_ptr);
    }
    local_14->mp3_data = pCVar3;
    if (pCVar3 == (CMP3Decoder *)0x0) {
      g_CurrentFilename = "..\\sound\\sndmain.cpp";
      g_CurrentLineNumber = 0x3c6;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory.");
    }
    sound_mp3_cpp_CMP3Decoder_openFile_FUN_00534550(local_14->mp3_data,filename);
    strcpy((local_14->sample_info).name, filename);
    (local_14->sample_info).streaming_flag = 1;
    pCVar4 = local_14->mp3_data;
    (local_14->sample_info).bit_depth = 0x10;
    (local_14->sample_info).num_channels = pCVar4->num_channels;
    iVar7 = local_14->mp3_data->sample_rate;
    (local_14->sample_info).sample_count = -1;
    (local_14->sample_info).sample_rate = iVar7;
    sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_005a45c0(local_14);
    local_14->taken = 0;
    local_14->ref_count = 0;
    iVar7 = (local_14->sample_info).sample_rate;
    local_14->buffer_id = 0;
    fVar2 = (float)iVar7 * 2.0f;
    local_14->stream_read_position = 0;
    local_14->stream_write_position = 0;
    local_14->streaming_buffer_size = (int)ROUND(ROUND(fVar2));
    local_14->streaming_slot_index = slot_index;
    iVar7 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_005a6170(local_14);
  }
  else {
    p_Var4 = engine_dosio_c_getFile_FUN_00481a50("sound",filename,"rb");
    local_14->file_handle = p_Var4;
    if (p_Var4 == (_FILE *)0x0) goto LAB_005a5505;
    strcpy((local_14->sample_info).name, filename);
    lVar5 = _ftell(local_14->file_handle);
    local_14->file_offset = lVar5;
    iVar7 = sound_sndmain_cpp_parseWavFile_FUN_005a3fe0
                      (local_14->file_handle,&local_14->file_offset,local_14);
    if (iVar7 == 0) goto LAB_005a5505;
    sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_005a45c0(local_14);
    local_14->taken = 0;
    local_14->ref_count = 0;
    iVar7 = (local_14->sample_info).sample_rate;
    local_14->buffer_id = 0;
    fVar5 = (float)iVar7 * 2.0f;
    local_14->stream_read_position = 0;
    local_14->stream_write_position = 0;
    local_14->streaming_buffer_size = (int)ROUND(ROUND(fVar5));
    local_14->streaming_slot_index = slot_index;
    iVar7 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_005a6170(local_14);
  }
  if (iVar7 != 0) {
    sound_sndmain_cpp_CSfxSample_seek_FUN_005a65a0(local_14,0,0);
    return local_14;
  }
LAB_005a5505:
  sound_sndmain_cpp_CSfxSample_freeMemory_FUN_005a62c0(local_14);
  return (CSfxSample *)0x0;
}
