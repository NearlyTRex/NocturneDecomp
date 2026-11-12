// Name: sound_sndmain.cpp_FUN_0054c7f0
// Address: 0054c7f0
// Address Range: [[0054c7f0, 0054cb63]]
// Convention: __cdecl
// Signature: CSfxSample * __cdecl sound_sndmain_cpp_FUN_0054c7f0(int slot_index,char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSfxSample * __cdecl sound_sndmain_cpp_FUN_0054c7f0(int slot_index,char *filename)

{
  char cVar1;
  CSfxSample *this_ptr;
  CMP3Decoder *this_ptr_00;
  CMP3Decoder *pCVar2;
  int iVar3;
  CSfxSample *pCVar4;
  float10 fVar5;
  char local_118 [256];
  CInStreamFile *local_18;
  CSfxSample *local_14;
  
  iVar3 = 0;
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
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x40);
  local_14 = (CSfxSample *)0x0;
LAB_0054c832:
  this_ptr = local_14;
  if (local_14 == (CSfxSample *)0x0) {
    return (CSfxSample *)0x0;
  }
  engine_dosio_cpp_splitPath_FUN_00461070(filename,(char *)0x0,(char *)0x0,(char *)0x0,local_118);
  iVar3 = _stricmp(local_118,&DAT_005e7ef2);
  if ((iVar3 == 0) ||
     (iVar3 = _stricmp(local_118,&DAT_005e7ef6), iVar3 == 0)) {
    iVar3 = engine_dosio_cpp_getFileSize_FUN_00460aa0("sound",filename);
    if (iVar3 < 1) goto LAB_0054cb48;
    this_ptr_00 = (CMP3Decoder *)operator_new(0x8630);
    pCVar2 = (CMP3Decoder *)0x0;
    if (this_ptr_00 != (CMP3Decoder *)0x0) {
      pCVar2 = sound_mp3_cpp_CMP3Decoder_ctor_FUN_00509c70(this_ptr_00);
    }
    this_ptr->mp3_data = pCVar2;
    if (pCVar2 == (CMP3Decoder *)0x0) {
      _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
      _DAT_01d046a4 = 0x461;
      core_main_c_FUN_004e4500("Out of memory.");
    }
    sound_mp3_cpp_CMP3Decoder_openFile_FUN_00509cd0(this_ptr->mp3_data,filename);
    pCVar4 = this_ptr;
    do {
      cVar1 = *filename;
      (pCVar4->sample_info).name[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = filename[1];
      filename = filename + 2;
      (pCVar4->sample_info).name[1] = cVar1;
      pCVar4 = (CSfxSample *)((pCVar4->sample_info).name + 2);
    } while (cVar1 != '\0');
    (this_ptr->sample_info).streaming_flag = 1;
    pCVar2 = this_ptr->mp3_data;
    (this_ptr->sample_info).bit_depth = 0x10;
    (this_ptr->sample_info).num_channels = pCVar2->num_channels;
    iVar3 = this_ptr->mp3_data->sample_rate;
    (this_ptr->sample_info).sample_count = -1;
    (this_ptr->sample_info).sample_rate = iVar3;
    sound_sndmain_cpp_FUN_0054bac0(this_ptr);
    this_ptr->taken = 0;
    iVar3 = (this_ptr->sample_info).sample_rate;
    this_ptr->ref_count = 0;
    fVar5 = (float10)iVar3 * (float10)0x40000000;
    this_ptr->buffer_id = 0;
    this_ptr->is_user_sample = 0;
    round();
    this_ptr->streaming_buffer_size = (int)ROUND(fVar5);
    this_ptr->stream_read_position = 0;
    this_ptr->stream_write_position = 0;
    this_ptr->streaming_slot_index = slot_index;
    iVar3 = sound_sndmain_cpp_FUN_0054fd90(this_ptr,this_ptr->streaming_buffer_size);
    this_ptr->data_size_bytes = iVar3;
    iVar3 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_0054d840(this_ptr);
  }
  else {
    local_18 = &this_ptr->file_stream;
    iVar3 = support_trstream_cpp_CInStreamFile_openInDirectory_FUN_0057d390
                      (local_18,"sound",filename);
    pCVar4 = this_ptr;
    if (iVar3 == 0) goto LAB_0054cb48;
    do {
      cVar1 = *filename;
      (pCVar4->sample_info).name[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = filename[1];
      filename = filename + 2;
      (pCVar4->sample_info).name[1] = cVar1;
      pCVar4 = (CSfxSample *)((pCVar4->sample_info).name + 2);
    } while (cVar1 != '\0');
    iVar3 = support_trstream_cpp_CInStreamFile_tell_FUN_0057d110(local_18);
    this_ptr->file_offset = iVar3;
    iVar3 = sound_sndmain_cpp_FUN_0054b4a0(local_18,&this_ptr->file_offset,this_ptr);
    if (iVar3 == 0) goto LAB_0054cb48;
    sound_sndmain_cpp_FUN_0054bac0(this_ptr);
    this_ptr->taken = 0;
    iVar3 = (this_ptr->sample_info).sample_rate;
    this_ptr->ref_count = 0;
    fVar5 = (float10)iVar3 * (float10)0x40000000;
    this_ptr->buffer_id = 0;
    this_ptr->is_user_sample = 0;
    round();
    this_ptr->streaming_buffer_size = (int)ROUND(fVar5);
    this_ptr->stream_read_position = 0;
    this_ptr->stream_write_position = 0;
    this_ptr->streaming_slot_index = slot_index;
    iVar3 = sound_sndmain_cpp_FUN_0054fd90(this_ptr,this_ptr->streaming_buffer_size);
    this_ptr->data_size_bytes = iVar3;
    iVar3 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_0054d840(this_ptr);
  }
  if (iVar3 != 0) {
    sound_sndmain_cpp_CSfxSample_seek_FUN_0054dc50(this_ptr,0,0);
    return this_ptr;
  }
LAB_0054cb48:
  sound_sndmain_cpp_CSfxSample_freeMemory_FUN_0054d9b0(this_ptr);
  return (CSfxSample *)0x0;
}
