// Name: sound_sndmain.cpp_loadStreamingSoundFile_FUN_0054c7f0
// Address: 0054c7f0
// Address Range: [[0054c7f0, 0054cb63]]
// Convention: __cdecl
// Signature: CSfxSample * __cdecl sound_sndmain_cpp_loadStreamingSoundFile_FUN_0054c7f0(int slot_index,char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSfxSample * __cdecl sound_sndmain_cpp_loadStreamingSoundFile_FUN_0054c7f0(int slot_index,char *filename)

{
  char cVar1;
  float fVar2;
  CSfxSample *sfx_sample;
  CMP3Decoder *this_ptr;
  CMP3Decoder *pCVar3;
  int iVar4;
  CSfxSample *pCVar5;
  double dVar6;
  int unaff_retaddr;
  char local_118 [256];
  CInStreamFile *local_18;
  CSfxSample *local_14;
  
  iVar4 = 0;
  do {
    _DAT_02641920 = _DAT_02641920 + 1;
    if (0x3f < _DAT_02641920) {
      _DAT_02641920 = 0;
    }
    if ((((g_SfxSamples[_DAT_02641920].taken == 0) && (g_SfxSamples[_DAT_02641920].ref_count == 0))
        && (g_SfxSamples[_DAT_02641920].is_user_sample == 0)) &&
       (g_SfxSamples[_DAT_02641920].locked_length == 0)) {
      local_14 = g_SfxSamples + _DAT_02641920;
      goto LAB_0054c832;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x40);
  local_14 = (CSfxSample *)0x0;
LAB_0054c832:
  sfx_sample = local_14;
  if (local_14 == (CSfxSample *)0x0) {
    return (CSfxSample *)0x0;
  }
  engine_dosio_cpp_splitPath_FUN_00461070(filename,(char *)0x0,(char *)0x0,(char *)0x0,local_118);
  iVar4 = _stricmp(local_118,&DAT_005e7ef2);
  if ((iVar4 == 0) ||
     (iVar4 = _stricmp(local_118,&DAT_005e7ef6), iVar4 == 0)) {
    iVar4 = engine_dosio_cpp_getFileSize_FUN_00460aa0("sound",filename);
    if (iVar4 < 1) goto LAB_0054cb48;
    this_ptr = operator_new(0x8630);
    pCVar3 = (CMP3Decoder *)0x0;
    if (this_ptr != (CMP3Decoder *)0x0) {
      pCVar3 = sound_mp3_cpp_CMP3Decoder_ctor_FUN_00509c70(this_ptr);
    }
    sfx_sample->mp3_data = pCVar3;
    if (pCVar3 == (CMP3Decoder *)0x0) {
      _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
      _DAT_01d046a4 = 0x461;
      core_main_c_displayErrorAndQuit_FUN_004e4500("Out of memory.");
    }
    sound_mp3_cpp_CMP3Decoder_openFile_FUN_00509cd0(sfx_sample->mp3_data,filename);
    pCVar5 = sfx_sample;
    do {
      cVar1 = *filename;
      (pCVar5->sample_info).name[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = filename[1];
      filename = filename + 2;
      (pCVar5->sample_info).name[1] = cVar1;
      pCVar5 = (CSfxSample *)((pCVar5->sample_info).name + 2);
    } while (cVar1 != '\0');
    (sfx_sample->sample_info).streaming_flag = 1;
    pCVar3 = sfx_sample->mp3_data;
    (sfx_sample->sample_info).bit_depth = 0x10;
    (sfx_sample->sample_info).num_channels = pCVar3->num_channels;
    iVar4 = sfx_sample->mp3_data->sample_rate;
    (sfx_sample->sample_info).sample_count = -1;
    (sfx_sample->sample_info).sample_rate = iVar4;
    sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_0054bac0(sfx_sample);
    sfx_sample->taken = 0;
    iVar4 = (sfx_sample->sample_info).sample_rate;
    sfx_sample->ref_count = 0;
    fVar2 = (float)iVar4 * 0x40000000;
    sfx_sample->buffer_id = 0;
    sfx_sample->is_user_sample = 0;
    dVar6 = round((double)fVar2);
    sfx_sample->streaming_buffer_size = (int)ROUND(dVar6);
    sfx_sample->stream_read_position = 0;
    sfx_sample->stream_write_position = 0;
    sfx_sample->streaming_slot_index = unaff_retaddr;
    iVar4 = sound_sndmain_cpp_CSfxSample_framesToBytes_FUN_0054fd90
                      (sfx_sample,sfx_sample->streaming_buffer_size);
    sfx_sample->data_size_bytes = iVar4;
    iVar4 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_0054d840(sfx_sample);
  }
  else {
    local_18 = &sfx_sample->file_stream;
    iVar4 = support_trstream_cpp_CInStreamFile_openInDirectory_FUN_0057d390
                      (local_18,"sound",filename);
    pCVar5 = sfx_sample;
    if (iVar4 == 0) goto LAB_0054cb48;
    do {
      cVar1 = *filename;
      (pCVar5->sample_info).name[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = filename[1];
      filename = filename + 2;
      (pCVar5->sample_info).name[1] = cVar1;
      pCVar5 = (CSfxSample *)((pCVar5->sample_info).name + 2);
    } while (cVar1 != '\0');
    iVar4 = support_trstream_cpp_CInStreamFile_tell_FUN_0057d110(local_18);
    sfx_sample->file_offset = iVar4;
    iVar4 = sound_sndmain_cpp_parseWavFile_FUN_0054b4a0
                      (&local_18->base,&sfx_sample->file_offset,sfx_sample);
    if (iVar4 == 0) goto LAB_0054cb48;
    sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_0054bac0(sfx_sample);
    sfx_sample->taken = 0;
    iVar4 = (sfx_sample->sample_info).sample_rate;
    sfx_sample->ref_count = 0;
    fVar2 = (float)iVar4 * 0x40000000;
    sfx_sample->buffer_id = 0;
    sfx_sample->is_user_sample = 0;
    dVar6 = round((double)fVar2);
    sfx_sample->streaming_buffer_size = (int)ROUND(dVar6);
    sfx_sample->stream_read_position = 0;
    sfx_sample->stream_write_position = 0;
    sfx_sample->streaming_slot_index = unaff_retaddr;
    iVar4 = sound_sndmain_cpp_CSfxSample_framesToBytes_FUN_0054fd90
                      (sfx_sample,sfx_sample->streaming_buffer_size);
    sfx_sample->data_size_bytes = iVar4;
    iVar4 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_0054d840(sfx_sample);
  }
  if (iVar4 != 0) {
    sound_sndmain_cpp_CSfxSample_seek_FUN_0054dc50(sfx_sample,0,0);
    return sfx_sample;
  }
LAB_0054cb48:
  sound_sndmain_cpp_CSfxSample_freeMemory_FUN_0054d9b0(sfx_sample);
  return (CSfxSample *)0x0;
}
