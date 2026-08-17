// Name: sound_sndmain.cpp_loadStreamingSoundFile_FUN_005229f0
// Address: 005229f0
// Address Range: [[005229f0, 00522d06]]
// Convention: __cdecl
// Signature: CSfxSample * __cdecl sound_sndmain_cpp_loadStreamingSoundFile_FUN_005229f0(int slot_index,char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSfxSample * __cdecl sound_sndmain_cpp_loadStreamingSoundFile_FUN_005229f0(int slot_index,char *filename)

{
  char cVar1;
  float fVar2;
  CSfxSample *sfx_sample;
  CMP3Decoder *this_ptr;
  CMP3Decoder *pCVar3;
  _FILE *p_Var4;
  long lVar5;
  int iVar6;
  double dVar7;
  CSfxSample *pCVar8;
  char local_114 [256];
  CSfxSample *local_14;
  
  iVar6 = 0;
  do {
    _DAT_02dc1ed8 = _DAT_02dc1ed8 + 1;
    if (0x3f < _DAT_02dc1ed8) {
      _DAT_02dc1ed8 = 0;
    }
    if ((g_CSfxSample_ARRAY_02dc1edc[_DAT_02dc1ed8].taken == 0) &&
       (g_CSfxSample_ARRAY_02dc1edc[_DAT_02dc1ed8].ref_count == 0)) {
      local_14 = g_CSfxSample_ARRAY_02dc1edc + _DAT_02dc1ed8;
      goto LAB_00522a32;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x40);
  local_14 = (CSfxSample *)0x0;
LAB_00522a32:
  sfx_sample = local_14;
  if (local_14 == (CSfxSample *)0x0) {
    return (CSfxSample *)0x0;
  }
  splitpath(filename,(char *)0x0,(char *)0x0,(char *)0x0,local_114);
  iVar6 = _stricmp(local_114,"mp3");
  if ((iVar6 == 0) ||
     (iVar6 = _stricmp(local_114,".mp3"), iVar6 == 0)) {
    iVar6 = engine_dosio_cpp_getFileSize_FUN_004568c0("sound",filename);
    if (iVar6 < 1) goto LAB_00522ceb;
    this_ptr = operator_new(0x8630);
    pCVar3 = (CMP3Decoder *)0x0;
    if (this_ptr != (CMP3Decoder *)0x0) {
      pCVar3 = sound_mp3_cpp_CMP3Decoder_ctor_FUN_004e7d90(this_ptr);
    }
    sfx_sample->mp3_data = pCVar3;
    if (pCVar3 == (CMP3Decoder *)0x0) {
      g_CurrentFilename = "..\\sound\\sndmain.cpp";
      g_CurrentLineNumber = 968;
      core_main_c_displayErrorAndQuit_FUN_004c8440("Out of memory.");
    }
    sound_mp3_cpp_CMP3Decoder_openFile_FUN_004e7df0(sfx_sample->mp3_data,filename);
    pCVar8 = sfx_sample;
    do {
      cVar1 = *filename;
      (pCVar8->sample_info).name[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = filename[1];
      filename = filename + 2;
      (pCVar8->sample_info).name[1] = cVar1;
      pCVar8 = (CSfxSample *)((pCVar8->sample_info).name + 2);
    } while (cVar1 != '\0');
    (sfx_sample->sample_info).streaming_flag = 1;
    pCVar3 = sfx_sample->mp3_data;
    (sfx_sample->sample_info).bit_depth = 0x10;
    (sfx_sample->sample_info).num_channels = pCVar3->num_channels;
    iVar6 = sfx_sample->mp3_data->sample_rate;
    (sfx_sample->sample_info).sample_count = -1;
    (sfx_sample->sample_info).sample_rate = iVar6;
    sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_00521e10(sfx_sample);
    sfx_sample->taken = 0;
    sfx_sample->ref_count = 0;
    iVar6 = (sfx_sample->sample_info).sample_rate;
    sfx_sample->buffer_id = 0;
    fVar2 = (float)iVar6 * 2.0f;
    sfx_sample->stream_read_position = 0;
    sfx_sample->stream_write_position = 0;
    pCVar8 = (CSfxSample *)0x522bb8;
    dVar7 = round((double)fVar2);
    sfx_sample->streaming_buffer_size = (int)ROUND(dVar7);
    sfx_sample->streaming_slot_index = slot_index;
    iVar6 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_00523910(pCVar8);
  }
  else {
    p_Var4 = engine_dosio_cpp_getFile_FUN_00456a60("sound",filename,"rb");
    sfx_sample->file_handle = p_Var4;
    pCVar8 = sfx_sample;
    if (p_Var4 == (_FILE *)0x0) goto LAB_00522ceb;
    do {
      cVar1 = *filename;
      (pCVar8->sample_info).name[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = filename[1];
      filename = filename + 2;
      (pCVar8->sample_info).name[1] = cVar1;
      pCVar8 = (CSfxSample *)((pCVar8->sample_info).name + 2);
    } while (cVar1 != '\0');
    lVar5 = _ftell(sfx_sample->file_handle);
    sfx_sample->file_offset = lVar5;
    iVar6 = sound_sndmain_cpp_parseWavFile_FUN_00521830
                      (sfx_sample->file_handle,&sfx_sample->file_offset,sfx_sample);
    if (iVar6 == 0) goto LAB_00522ceb;
    sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_00521e10(sfx_sample);
    sfx_sample->taken = 0;
    sfx_sample->ref_count = 0;
    iVar6 = (sfx_sample->sample_info).sample_rate;
    sfx_sample->buffer_id = 0;
    fVar2 = (float)iVar6 * 2.0f;
    sfx_sample->stream_read_position = 0;
    sfx_sample->stream_write_position = 0;
    pCVar8 = (CSfxSample *)0x522ccf;
    dVar7 = round((double)fVar2);
    sfx_sample->streaming_buffer_size = (int)ROUND(dVar7);
    sfx_sample->streaming_slot_index = slot_index;
    iVar6 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_00523910(pCVar8);
  }
  if (iVar6 != 0) {
    sound_sndmain_cpp_CSfxSample_seek_FUN_00523d10(sfx_sample,0,0);
    return sfx_sample;
  }
LAB_00522ceb:
  sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00523a60(sfx_sample);
  return (CSfxSample *)0x0;
}
