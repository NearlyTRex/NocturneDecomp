// Name: sound_sndmain.cpp_loadStreamingSoundFile_FUN_00552350
// Address: 00552350
// Address Range: [[00552350, 005526c5]]
// Convention: __cdecl
// Signature: CSfxSample * __cdecl sound_sndmain_cpp_loadStreamingSoundFile_FUN_00552350(int slot_index,char *filename)

#include "nocturne.h"

CSfxSample * __cdecl sound_sndmain_cpp_loadStreamingSoundFile_FUN_00552350(int slot_index,char *filename)

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
    g_INT_02cebc20 = g_INT_02cebc20 + 1;
    if (0x3f < g_INT_02cebc20) {
      g_INT_02cebc20 = 0;
    }
    if ((((g_SfxSamples[g_INT_02cebc20].taken == 0) && (g_SfxSamples[g_INT_02cebc20].ref_count == 0)
         ) && (g_SfxSamples[g_INT_02cebc20].is_user_sample == 0)) &&
       (g_SfxSamples[g_INT_02cebc20].locked_length == 0)) {
      local_14 = g_SfxSamples + g_INT_02cebc20;
      goto LAB_00552392;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x40);
  local_14 = (CSfxSample *)0x0;
LAB_00552392:
  sfx_sample = local_14;
  if (local_14 == (CSfxSample *)0x0) {
    return (CSfxSample *)0x0;
  }
  engine_dosio_cpp_splitPath_FUN_00465e50(filename,(char *)0x0,(char *)0x0,(char *)0x0,local_118);
  iVar4 = _stricmp(local_118,"mp3");
  if ((iVar4 == 0) ||
     (iVar4 = _stricmp(local_118,".mp3"), iVar4 == 0)) {
    iVar4 = engine_dosio_cpp_getFileSize_FUN_004657f0("sound",filename);
    if (iVar4 < 1) goto LAB_005526aa;
    this_ptr = operator_new(0x8630);
    pCVar3 = (CMP3Decoder *)0x0;
    if (this_ptr != (CMP3Decoder *)0x0) {
      pCVar3 = sound_mp3_cpp_CMP3Decoder_ctor_FUN_00502750(this_ptr);
    }
    sfx_sample->mp3_data = pCVar3;
    if (pCVar3 == (CMP3Decoder *)0x0) {
      g_CHAR_PTR_01d71de0 = "..\\sound\\sndmain.cpp";
      g_INT_01d71de4 = 0x463;
      core_main_c_displayErrorAndQuit_FUN_004e4330("Out of memory.");
    }
    sound_mp3_cpp_CMP3Decoder_openFile_FUN_005027b0(sfx_sample->mp3_data,filename);
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
    sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_00551620(sfx_sample);
    sfx_sample->taken = 0;
    iVar4 = (sfx_sample->sample_info).sample_rate;
    sfx_sample->ref_count = 0;
    fVar2 = (float)iVar4 * 2.0f;
    sfx_sample->buffer_id = 0;
    sfx_sample->is_user_sample = 0;
    dVar6 = round((double)fVar2);
    sfx_sample->streaming_buffer_size = (int)ROUND(dVar6);
    sfx_sample->stream_read_position = 0;
    sfx_sample->stream_write_position = 0;
    sfx_sample->streaming_slot_index = unaff_retaddr;
    iVar4 = sound_sndmain_cpp_CSfxSample_framesToBytes_FUN_00555900
                      (sfx_sample,sfx_sample->streaming_buffer_size);
    sfx_sample->data_size_bytes = iVar4;
    iVar4 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_005533b0(sfx_sample);
  }
  else {
    local_18 = &sfx_sample->file_stream;
    iVar4 = support_trstream_cpp_CInStreamFile_openInDirectory_FUN_00573fc0
                      (local_18,"sound",filename,1);
    pCVar5 = sfx_sample;
    if (iVar4 == 0) goto LAB_005526aa;
    do {
      cVar1 = *filename;
      (pCVar5->sample_info).name[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = filename[1];
      filename = filename + 2;
      (pCVar5->sample_info).name[1] = cVar1;
      pCVar5 = (CSfxSample *)((pCVar5->sample_info).name + 2);
    } while (cVar1 != '\0');
    iVar4 = support_trstream_cpp_CInStreamFile_tell_FUN_00573d40(local_18);
    sfx_sample->file_offset = iVar4;
    iVar4 = sound_sndmain_cpp_parseWavFile_FUN_00551000
                      (&local_18->base,&sfx_sample->file_offset,sfx_sample);
    if (iVar4 == 0) goto LAB_005526aa;
    sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_00551620(sfx_sample);
    sfx_sample->taken = 0;
    iVar4 = (sfx_sample->sample_info).sample_rate;
    sfx_sample->ref_count = 0;
    fVar2 = (float)iVar4 * 2.0f;
    sfx_sample->buffer_id = 0;
    sfx_sample->is_user_sample = 0;
    dVar6 = round((double)fVar2);
    sfx_sample->streaming_buffer_size = (int)ROUND(dVar6);
    sfx_sample->stream_read_position = 0;
    sfx_sample->stream_write_position = 0;
    sfx_sample->streaming_slot_index = unaff_retaddr;
    iVar4 = sound_sndmain_cpp_CSfxSample_framesToBytes_FUN_00555900
                      (sfx_sample,sfx_sample->streaming_buffer_size);
    sfx_sample->data_size_bytes = iVar4;
    iVar4 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_005533b0(sfx_sample);
  }
  if (iVar4 != 0) {
    sound_sndmain_cpp_CSfxSample_seek_FUN_005537c0(sfx_sample,0,0);
    return sfx_sample;
  }
LAB_005526aa:
  sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00553520(sfx_sample);
  return (CSfxSample *)0x0;
}
