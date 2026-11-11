// Name: sound_sndmain.cpp_FUN_00552350
// Address: 00552350
// Address Range: [[00552350, 005526c5]]
// Convention: __cdecl
// Signature: CSfxSample * __cdecl sound_sndmain_cpp_FUN_00552350(int slot_index,char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSfxSample * __cdecl sound_sndmain_cpp_FUN_00552350(int slot_index,char *filename)

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
    _DAT_02cebc20 = _DAT_02cebc20 + 1;
    if (0x3f < _DAT_02cebc20) {
      _DAT_02cebc20 = 0;
    }
    if ((((g_SfxSamples[_DAT_02cebc20].taken == 0) && (g_SfxSamples[_DAT_02cebc20].ref_count == 0))
        && (g_SfxSamples[_DAT_02cebc20].is_user_sample == 0)) &&
       (g_SfxSamples[_DAT_02cebc20].locked_length == 0)) {
      local_14 = g_SfxSamples + _DAT_02cebc20;
      goto LAB_00552392;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x40);
  local_14 = (CSfxSample *)0x0;
LAB_00552392:
  this_ptr = local_14;
  if (local_14 == (CSfxSample *)0x0) {
    return (CSfxSample *)0x0;
  }
  engine_dosio_cpp_splitPath_FUN_00465e50(filename,(char *)0x0,(char *)0x0,(char *)0x0,local_118);
  iVar3 = _stricmp(local_118,&DAT_005d29d6);
  if ((iVar3 == 0) ||
     (iVar3 = _stricmp(local_118,&DAT_005d29da), iVar3 == 0)) {
    iVar3 = engine_dosio_cpp_getFileSize_FUN_004657f0("sound",filename);
    if (iVar3 < 1) goto LAB_005526aa;
    this_ptr_00 = (CMP3Decoder *)operator_new(0x8630);
    pCVar2 = (CMP3Decoder *)0x0;
    if (this_ptr_00 != (CMP3Decoder *)0x0) {
      pCVar2 = sound_mp3_cpp_CMP3Decoder_ctor_FUN_00502750(this_ptr_00);
    }
    this_ptr->mp3_data = pCVar2;
    if (pCVar2 == (CMP3Decoder *)0x0) {
      _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
      _DAT_01d71de4 = 0x463;
      core_main_c_FUN_004e4330("Out of memory.");
    }
    sound_mp3_cpp_CMP3Decoder_openFile_FUN_005027b0(this_ptr->mp3_data,filename);
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
    sound_sndmain_cpp_FUN_00551620(this_ptr);
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
    iVar3 = sound_sndmain_cpp_FUN_00555900(this_ptr,this_ptr->streaming_buffer_size);
    this_ptr->data_size_bytes = iVar3;
    iVar3 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_005533b0(this_ptr);
  }
  else {
    local_18 = &this_ptr->file_stream;
    iVar3 = support_trstream_cpp_CInStreamFile_openInDirectory_FUN_00573fc0
                      (local_18,"sound",filename,1);
    pCVar4 = this_ptr;
    if (iVar3 == 0) goto LAB_005526aa;
    do {
      cVar1 = *filename;
      (pCVar4->sample_info).name[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = filename[1];
      filename = filename + 2;
      (pCVar4->sample_info).name[1] = cVar1;
      pCVar4 = (CSfxSample *)((pCVar4->sample_info).name + 2);
    } while (cVar1 != '\0');
    iVar3 = unkafter_turret_cpp_CInStreamFile_tell_FUN_00573d40(local_18);
    this_ptr->file_offset = iVar3;
    iVar3 = sound_sndmain_cpp_FUN_00551000(local_18,&this_ptr->file_offset,this_ptr);
    if (iVar3 == 0) goto LAB_005526aa;
    sound_sndmain_cpp_FUN_00551620(this_ptr);
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
    iVar3 = sound_sndmain_cpp_FUN_00555900(this_ptr,this_ptr->streaming_buffer_size);
    this_ptr->data_size_bytes = iVar3;
    iVar3 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_005533b0(this_ptr);
  }
  if (iVar3 != 0) {
    sound_sndmain_cpp_CSfxSample_seek_FUN_005537c0(this_ptr,0,0);
    return this_ptr;
  }
LAB_005526aa:
  sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00553520(this_ptr);
  return (CSfxSample *)0x0;
}
