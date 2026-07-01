// Name: sound_sndmain.cpp_getSfxSample_FUN_005a4c80
// Address: 005a4c80
// Address Range: [[005a4c80, 005a5179]]
// Convention: __cdecl
// Signature: CSfxSample * __cdecl sound_sndmain_cpp_getSfxSample_FUN_005a4c80(char *filename)

#include "nocturne.h"

CSfxSample * __cdecl sound_sndmain_cpp_getSfxSample_FUN_005a4c80(char *filename)

{
  char cVar2;
  int iVar2;
  CSfxSample *this_ptr;
  long lVar3;
  void *buffer;
  SIZE_T size;
  SIZE_T SVar4;
  short *output_buffer;
  uint uVar5;
  CSfxSample *pCVar6;
  int iVar3;
  char *pcVar4;
  int iVar7;
  CSfxSample *pCVar8;
  bool bVar9;
  byte bVar10;
  SIZE_T count;
  char local_114;
  byte local_113 [255];
  _FILE *local_14;
  char *pcVar11;
  _FILE *file;
  char cVar1;
  
  bVar10 = 0;
  pCVar6 = g_SfxSamples;
  iVar7 = 0;
  do {
    iVar2 = _stricmp((char *)pCVar6,filename);
    if (iVar2 == 0) {
      return pCVar6;
    }
    iVar7 = iVar7 + 1;
    pCVar6 = pCVar6 + 1;
  } while (iVar7 < 0x40);
  iVar3 = 0;
  do {
    g_LastSampleAccessIndex = g_LastSampleAccessIndex + 1;
    if (0x3f < g_LastSampleAccessIndex) {
      g_LastSampleAccessIndex = 0;
    }
    if ((g_SfxSamples[g_LastSampleAccessIndex].taken == 0) &&
       (g_SfxSamples[g_LastSampleAccessIndex].ref_count == 0)) {
      this_ptr = g_SfxSamples + g_LastSampleAccessIndex;
      bVar9 = this_ptr == (CSfxSample *)0x0;
      goto LAB_005a4cea;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x40);
  this_ptr = (CSfxSample *)0x0;
  bVar9 = true;
LAB_005a4cea:
  if (bVar9) {
    return this_ptr;
  }
  sound_sndmain_cpp_CSfxSample_freeMemory_FUN_005a62c0(this_ptr);
  if ((g_GlobalMP3DecoderInitialized & 1) == 0) {
    g_GlobalMP3DecoderInitialized = g_GlobalMP3DecoderInitialized | 1;
    sound_mp3_cpp_CMP3Decoder_ctor_FUN_005344f0(&g_CMP3DecoderInstance);
    _atexit(&g_CMP3DecoderDestructorNode1);
  }
  local_14 = (_FILE *)0x0;
  iVar3 = engine_dosio_cpp_getFileSize_FUN_00481880("sound",filename);
  pcVar4 = filename;
  pCVar8 = this_ptr;
  if (iVar3 < 1) goto LAB_005a4ef8;
  do {
    cVar1 = *pcVar4;
    (pCVar8->sample_info).name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar2 = pcVar4[1];
    (pCVar8->sample_info).name[1] = cVar2;
    pcVar4 = pcVar4 + 2;
    pCVar8 = (CSfxSample *)((pCVar8->sample_info).name + 2);
  } while (cVar2 != '\0');
  engine_dosio_cpp_splitPath_FUN_00481f20(filename,(char *)0x0,(char *)0x0,(char *)0x0,&local_114);
  if (local_114 == '.') {
    uVar5 = 0xffffffff;
    pcVar4 = &local_114;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + (uint)bVar10 * -2 + 1;
    } while (cVar2 != '\0');
    memmove(&local_114,local_113,~uVar5 - 1);
  }
  iVar3 = _stricmp(&local_114,"wav");
  if (iVar3 == 0) {
    local_14 = engine_dosio_cpp_getFile_FUN_00481a50("sound",filename,"rb");
    if (local_14 == (_FILE *)0x0) {
      g_CurrentFilename = "..\\sound\\sndmain.cpp";
      g_CurrentLineNumber = 766;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open %s",filename);
    }
    lVar3 = _ftell(local_14);
    this_ptr->file_offset = lVar3;
    iVar3 = sound_sndmain_cpp_parseWavFile_FUN_005a3fe0(local_14,&this_ptr->file_offset,this_ptr);
    if (iVar3 == 0) goto LAB_005a4ef8;
    sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_005a45c0(this_ptr);
    this_ptr->taken = 0;
    this_ptr->ref_count = 0;
    this_ptr->buffer_id = 0;
    this_ptr->streaming_slot_index = -1;
    iVar3 = (this_ptr->sample_info).sample_count;
    this_ptr->streaming_buffer_size = iVar3;
    this_ptr->stream_read_position = iVar3;
    this_ptr->stream_write_position = iVar3;
    iVar3 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_005a6170(this_ptr);
    if (iVar3 == 0) goto LAB_005a4ef8;
    _fseek(local_14,this_ptr->file_offset,0);
    buffer = sound_sndmain_cpp_CSfxSample_lock_FUN_005a6430
                       (this_ptr,0,(this_ptr->sample_info).sample_count);
    if (buffer == (void *)0x0) {
      pcVar11 = "Failed to lock sample %s\n";
    }
    else {
      count = (this_ptr->sample_info).sample_count;
      file = local_14;
      size = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_005a8550(this_ptr);
      SVar4 = _fread(buffer,size,count,file);
      if ((SVar4 == (this_ptr->sample_info).sample_count) && ((local_14->_flag & 0x20) == 0)) {
        sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_005a6540(this_ptr);
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_14,"..\\sound\\sndmain.cpp",823);
        return this_ptr;
      }
      pcVar11 = "Error reading file data for %s\n";
    }
  }
  else {
    iVar3 = _stricmp(&local_114,"mp3");
    if (iVar3 != 0) {
      g_CurrentFilename = "..\\sound\\sndmain.cpp";
      g_CurrentLineNumber = 891;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Unknown sample file format extension: %s",filename);
      return this_ptr;
    }
    sound_mp3_cpp_CMP3Decoder_openFile_FUN_00534550(&g_CMP3DecoderInstance,filename);
    (this_ptr->sample_info).bit_depth = 0x10;
    (this_ptr->sample_info).num_channels = g_CMP3DecoderInstance.num_channels;
    iVar3 = g_CMP3DecoderInstance.sample_rate;
    (this_ptr->sample_info).sample_count = -1;
    (this_ptr->sample_info).sample_rate = iVar3;
    sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_005a45c0(this_ptr);
    if ((this_ptr->sample_info).sample_count < 0) {
      g_CurrentFilename = "..\\sound\\sndmain.cpp";
      g_CurrentLineNumber = 845;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Don't know length of sample %s",filename);
    }
    this_ptr->taken = 0;
    this_ptr->ref_count = 0;
    this_ptr->buffer_id = 0;
    this_ptr->streaming_slot_index = -1;
    iVar3 = (this_ptr->sample_info).sample_count;
    this_ptr->streaming_buffer_size = iVar3;
    this_ptr->stream_read_position = iVar3;
    this_ptr->stream_write_position = iVar3;
    iVar3 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_005a6170(this_ptr);
    if (iVar3 == 0) goto LAB_005a4ef8;
    output_buffer =
         sound_sndmain_cpp_CSfxSample_lock_FUN_005a6430
                   (this_ptr,0,(this_ptr->sample_info).sample_count);
    if (output_buffer == (short *)0x0) {
      pcVar11 = "Failed to lock sample %s\n";
    }
    else {
      iVar3 = sound_mp3_cpp_CMP3Decoder_read_FUN_00534a60
                        (&g_CMP3DecoderInstance,output_buffer,(this_ptr->sample_info).sample_count);
      if (iVar3 == (this_ptr->sample_info).sample_count) {
        sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_005a6540(this_ptr);
        return this_ptr;
      }
      pcVar11 = "Error decoding file data from %s\n";
    }
  }
  sound_sndmain_cpp_logSoundError_FUN_005adba0(pcVar11,filename);
LAB_005a4ef8:
  sound_mp3_cpp_CMP3Decoder_free_FUN_005349e0(&g_CMP3DecoderInstance);
  sound_sndmain_cpp_CSfxSample_freeMemory_FUN_005a62c0(this_ptr);
  if (local_14 != (_FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_14,"..\\sound\\sndmain.cpp",747);
  }
  return (CSfxSample *)0x0;
}
