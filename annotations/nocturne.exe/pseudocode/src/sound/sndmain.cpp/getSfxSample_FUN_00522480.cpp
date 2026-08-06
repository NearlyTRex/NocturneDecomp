// Name: sound_sndmain.cpp_getSfxSample_FUN_00522480
// Address: 00522480
// Address Range: [[00522480, 00522962]]
// Convention: __cdecl
// Signature: CSfxSample * __cdecl sound_sndmain_cpp_getSfxSample_FUN_00522480(char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSfxSample * __cdecl sound_sndmain_cpp_getSfxSample_FUN_00522480(char *filename)

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
  _FILE *file;
  char local_114;
  byte local_113 [255];
  _FILE *local_14;
  
  bVar10 = 0;
  pCVar6 = g_CSfxSample_ARRAY_02dc1edc;
  iVar7 = 0;
  do {
    iVar2 = _stricmp((char *)pCVar6,filename);
    if (iVar2 == 0) {
      return pCVar6;
    }
    iVar7 = iVar7 + 1;
    pCVar6 = pCVar6 + 1;
  } while (iVar7 < 0x40);
  iVar7 = 0;
  do {
    _DAT_02dc1ed8 = _DAT_02dc1ed8 + 1;
    if (0x3f < _DAT_02dc1ed8) {
      _DAT_02dc1ed8 = 0;
    }
    if ((g_CSfxSample_ARRAY_02dc1edc[_DAT_02dc1ed8].taken == 0) &&
       (g_CSfxSample_ARRAY_02dc1edc[_DAT_02dc1ed8].ref_count == 0)) {
      pCVar6 = g_CSfxSample_ARRAY_02dc1edc + _DAT_02dc1ed8;
      bVar9 = pCVar6 == (CSfxSample *)0x0;
      goto LAB_005224ea;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x40);
  pCVar6 = (CSfxSample *)0x0;
  bVar9 = true;
LAB_005224ea:
  if (bVar9) {
    return pCVar6;
  }
  sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00523a60(pCVar6);
  if ((DAT_02db1110 & 1) == 0) {
    DAT_02db1110 = DAT_02db1110 | 1;
    sound_mp3_cpp_CMP3Decoder_ctor_FUN_004e7d90(&g_CMP3Decoder_02da8ae0);
    _atexit(&g_WatcomStaticDestructorNode_005bea30);
  }
  local_14 = (_FILE *)0x0;
  iVar7 = engine_dosio_cpp_getFileSize_FUN_004568c0("sound",filename);
  pcVar11 = filename;
  pCVar8 = pCVar6;
  if (iVar7 < 1) goto LAB_005226f8;
  do {
    cVar1 = *pcVar11;
    (pCVar8->sample_info).name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar11[1];
    (pCVar8->sample_info).name[1] = cVar1;
    pcVar11 = pcVar11 + 2;
    pCVar8 = (CSfxSample *)((pCVar8->sample_info).name + 2);
  } while (cVar1 != '\0');
  splitpath(filename,(char *)0x0,(char *)0x0,(char *)0x0,&local_114);
  if (local_114 == '.') {
    uVar5 = 0xffffffff;
    pcVar11 = &local_114;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + (uint)bVar10 * -2 + 1;
    } while (cVar1 != '\0');
    memmove(&local_114,local_113,~uVar5 - 1);
  }
  iVar7 = _stricmp(&local_114,"wav");
  if (iVar7 == 0) {
    local_14 = engine_dosio_cpp_getFile_FUN_00456a60("sound",filename,"rb");
    if (local_14 == (_FILE *)0x0) {
      g_CurrentFilename = "..\\sound\\sndmain.cpp";
      g_CurrentLineNumber = 768;
      core_main_c_displayErrorAndQuit_FUN_004c8440("Can't open %s");
    }
    lVar3 = _ftell(local_14);
    pCVar6->file_offset = lVar3;
    iVar7 = sound_sndmain_cpp_parseWavFile_FUN_00521830(local_14,&pCVar6->file_offset,pCVar6);
    if (iVar7 == 0) goto LAB_005226f8;
    sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_00521e10(pCVar6);
    pCVar6->taken = 0;
    pCVar6->ref_count = 0;
    pCVar6->buffer_id = 0;
    pCVar6->streaming_slot_index = -1;
    iVar7 = (pCVar6->sample_info).sample_count;
    pCVar6->streaming_buffer_size = iVar7;
    pCVar6->stream_read_position = iVar7;
    pCVar6->stream_write_position = iVar7;
    iVar7 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_00523910(pCVar6);
    if (iVar7 == 0) goto LAB_005226f8;
    _fseek(local_14,pCVar6->file_offset,0);
    buffer = sound_sndmain_cpp_CSfxSample_lock_FUN_00523ba0
                       (pCVar6,0,(pCVar6->sample_info).sample_count);
    if (buffer == (void *)0x0) {
      pcVar11 = "Failed to lock sample %s\n";
    }
    else {
      SVar4 = (pCVar6->sample_info).sample_count;
      file = local_14;
      size = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_00525c40(pCVar6);
      SVar4 = _fread(buffer,size,SVar4,file);
      if ((SVar4 == (pCVar6->sample_info).sample_count) && ((local_14->_flag & 0x20) == 0)) {
        sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_00523cb0(pCVar6);
        _fclose(local_14);
        return pCVar6;
      }
      pcVar11 = "Error reading file data for %s\n";
    }
  }
  else {
    iVar7 = _stricmp(&local_114,"mp3");
    if (iVar7 != 0) {
      g_CurrentFilename = "..\\sound\\sndmain.cpp";
      g_CurrentLineNumber = 893;
      core_main_c_displayErrorAndQuit_FUN_004c8440("Unknown sample file format extension: %s");
      return pCVar6;
    }
    sound_mp3_cpp_CMP3Decoder_openFile_FUN_004e7df0(&g_CMP3Decoder_02da8ae0,filename);
    (pCVar6->sample_info).bit_depth = 0x10;
    (pCVar6->sample_info).num_channels = g_CMP3Decoder_02da8ae0.num_channels;
    iVar7 = g_CMP3Decoder_02da8ae0.sample_rate;
    (pCVar6->sample_info).sample_count = -1;
    (pCVar6->sample_info).sample_rate = iVar7;
    sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_00521e10(pCVar6);
    if ((pCVar6->sample_info).sample_count < 0) {
      g_CurrentFilename = "..\\sound\\sndmain.cpp";
      g_CurrentLineNumber = 847;
      core_main_c_displayErrorAndQuit_FUN_004c8440("Don't know length of sample %s");
    }
    pCVar6->taken = 0;
    pCVar6->ref_count = 0;
    pCVar6->buffer_id = 0;
    pCVar6->streaming_slot_index = -1;
    iVar7 = (pCVar6->sample_info).sample_count;
    pCVar6->streaming_buffer_size = iVar7;
    pCVar6->stream_read_position = iVar7;
    pCVar6->stream_write_position = iVar7;
    iVar7 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_00523910(pCVar6);
    if (iVar7 == 0) goto LAB_005226f8;
    output_buffer =
         sound_sndmain_cpp_CSfxSample_lock_FUN_00523ba0(pCVar6,0,(pCVar6->sample_info).sample_count)
    ;
    if (output_buffer == (short *)0x0) {
      pcVar11 = "Failed to lock sample %s\n";
    }
    else {
      iVar7 = sound_mp3_cpp_CMP3Decoder_read_FUN_004e82d0
                        (&g_CMP3Decoder_02da8ae0,output_buffer,(pCVar6->sample_info).sample_count);
      if (iVar7 == (pCVar6->sample_info).sample_count) {
        sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_00523cb0(pCVar6);
        return pCVar6;
      }
      pcVar11 = "Error decoding file data from %s\n";
    }
  }
  sound_sndmain_cpp_FUN_00529980(pcVar11,filename);
LAB_005226f8:
  sound_mp3_cpp_CMP3Decoder_free_FUN_004e8260(&g_CMP3Decoder_02da8ae0);
  sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00523a60(pCVar6);
  if (local_14 != (_FILE *)0x0) {
    _fclose(local_14);
  }
  return (CSfxSample *)0x0;
}
