// Name: sound_sndmain.cpp_getSfxSample_FUN_0054c1c0
// Address: 0054c1c0
// Address Range: [[0054c1c0, 0054c764]]
// Convention: __cdecl
// Signature: CSfxSample * __cdecl sound_sndmain_cpp_getSfxSample_FUN_0054c1c0(char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSfxSample * __cdecl sound_sndmain_cpp_getSfxSample_FUN_0054c1c0(char *filename)

{
  char cVar1;
  int iVar2;
  void *buffer;
  short *output_buffer;
  uint uVar3;
  CSfxSample *pCVar4;
  int iVar5;
  CSfxSample *pCVar6;
  bool bVar7;
  byte bVar8;
  char *pcVar9;
  char local_238;
  byte local_237 [511];
  CInStreamFile local_38;
  
  bVar8 = 0;
  pCVar4 = g_SfxSamples;
  iVar5 = 0;
  do {
    iVar2 = _stricmp((char *)pCVar4,filename);
    if (iVar2 == 0) goto LAB_0054c1f8;
    iVar5 = iVar5 + 1;
    pCVar4 = pCVar4 + 1;
  } while (iVar5 < 0x40);
  pCVar4 = (CSfxSample *)0x0;
LAB_0054c1f8:
  if (pCVar4 != (CSfxSample *)0x0) {
    return pCVar4;
  }
  iVar5 = 0;
  do {
    _DAT_02641920 = _DAT_02641920 + 1;
    if (0x3f < _DAT_02641920) {
      _DAT_02641920 = 0;
    }
    if ((((g_SfxSamples[_DAT_02641920].taken == 0) && (g_SfxSamples[_DAT_02641920].ref_count == 0))
        && (g_SfxSamples[_DAT_02641920].is_user_sample == 0)) &&
       (g_SfxSamples[_DAT_02641920].locked_length == 0)) {
      pCVar4 = g_SfxSamples + _DAT_02641920;
      bVar7 = pCVar4 == (CSfxSample *)0x0;
      goto LAB_0054c228;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x40);
  pCVar4 = (CSfxSample *)0x0;
  bVar7 = true;
LAB_0054c228:
  if (!bVar7) {
    sound_sndmain_cpp_CSfxSample_freeMemory_FUN_0054d9b0(pCVar4);
    if ((DAT_02630cb0 & 1) == 0) {
      DAT_02630cb0 = DAT_02630cb0 | 1;
      sound_mp3_cpp_CMP3Decoder_ctor_FUN_00509c70(&g_CMP3DecoderInstance);
      _atexit(&g_CMP3DecoderDestructorNode1);
    }
    iVar5 = engine_dosio_cpp_getFileSize_FUN_00460aa0("sound",filename);
    pcVar9 = filename;
    pCVar6 = pCVar4;
    if (0 < iVar5) {
      do {
        cVar1 = *pcVar9;
        (pCVar6->sample_info).name[0] = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        (pCVar6->sample_info).name[1] = cVar1;
        pcVar9 = pcVar9 + 2;
        pCVar6 = (CSfxSample *)((pCVar6->sample_info).name + 2);
      } while (cVar1 != '\0');
      engine_dosio_cpp_splitPath_FUN_00461070
                (filename,(char *)0x0,(char *)0x0,(char *)0x0,&local_238);
      if (local_238 == '.') {
        uVar3 = 0xffffffff;
        pcVar9 = &local_238;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + (uint)bVar8 * -2 + 1;
        } while (cVar1 != '\0');
        memmove(&local_238,local_237,~uVar3 - 1);
      }
      iVar5 = _stricmp(&local_238,&DAT_005e7db1);
      if (iVar5 == 0) {
        support_trstream_cpp_CInStreamFile_ctor_FUN_0057cd50(&local_38);
        iVar5 = support_trstream_cpp_CInStreamFile_openInDirectory_FUN_0057d390
                          (&local_38,"sound",filename);
        if (iVar5 == 0) {
          _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
          _DAT_01d046a4 = 0x36b;
          core_main_c_FUN_004e4500("Can't open %s",filename);
        }
        pCVar4->file_offset = 0;
        iVar5 = sound_sndmain_cpp_parseWavFile_FUN_0054b4a0
                          (&local_38.base,&pCVar4->file_offset,pCVar4);
        if (iVar5 != 0) {
          sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_0054bac0(pCVar4);
          pCVar4->taken = 0;
          pCVar4->ref_count = 0;
          pCVar4->buffer_id = 0;
          pCVar4->is_user_sample = 0;
          pCVar4->streaming_slot_index = -1;
          iVar5 = (pCVar4->sample_info).sample_count;
          pCVar4->streaming_buffer_size = iVar5;
          pCVar4->stream_read_position = iVar5;
          pCVar4->stream_write_position = iVar5;
          iVar5 = sound_sndmain_cpp_CSfxSample_framesToBytes_FUN_0054fd90(pCVar4,iVar5);
          pCVar4->data_size_bytes = iVar5;
          iVar5 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_0054d840(pCVar4);
          if (iVar5 != 0) {
            support_trstream_cpp_CInStreamFile_seek_FUN_0057d0c0(&local_38,pCVar4->file_offset,0);
            buffer = sound_sndmain_cpp_CSfxSample_lock_FUN_0054daf0
                               (pCVar4,0,(pCVar4->sample_info).sample_count);
            if (buffer == (void *)0x0) {
              pcVar9 = "Failed to lock sample %s\n";
            }
            else {
              iVar5 = sound_sndmain_cpp_CSfxSample_framesToBytes_FUN_0054fd90
                                (pCVar4,(pCVar4->sample_info).sample_count);
              iVar2 = support_trstream_cpp_CInStreamFile_read_FUN_0057cfe0(&local_38,buffer,iVar5);
              if (iVar2 == iVar5) {
                support_trstream_cpp_CInStreamFile_close_FUN_0057d180(&local_38);
                if (((pCVar4->sample_info).bit_depth == 0x10) &&
                   (iVar5 = 0, 0 < (pCVar4->sample_info).sample_count)) {
                  do {
                    iVar5 = iVar5 + 1;
                  } while (iVar5 < (pCVar4->sample_info).sample_count);
                }
                sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_0054dbf0(pCVar4);
                support_trstream_cpp_CInStreamFile_dtor_FUN_0057cec0(&local_38,0);
                goto LAB_0054c57b;
              }
              pcVar9 = "Error reading file data for %s\n";
            }
            sound_sndmain_cpp_logSoundError_FUN_005549c0(pcVar9,filename);
          }
        }
        support_trstream_cpp_CInStreamFile_dtor_FUN_0057cec0(&local_38,0);
      }
      else {
        iVar5 = _stricmp(&local_238,&DAT_005e7e18);
        if (iVar5 != 0) {
          _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
          _DAT_01d046a4 = 0x40d;
          core_main_c_FUN_004e4500("Unknown sample file format extension: %s",filename);
LAB_0054c57b:
          _sprintf(&local_238,"SOUND: Loaded sample %s\n");
          wincore_winrun_cpp_FUN_0058ffc0(&local_238);
          return pCVar4;
        }
        sound_mp3_cpp_CMP3Decoder_openFile_FUN_00509cd0(&g_CMP3DecoderInstance,filename);
        (pCVar4->sample_info).bit_depth = 0x10;
        (pCVar4->sample_info).num_channels = g_CMP3DecoderInstance.num_channels;
        iVar5 = g_CMP3DecoderInstance.sample_rate;
        (pCVar4->sample_info).sample_count = -1;
        (pCVar4->sample_info).sample_rate = iVar5;
        sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_0054bac0(pCVar4);
        if ((pCVar4->sample_info).sample_count < 0) {
          _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
          _DAT_01d046a4 = 0x3dd;
          core_main_c_FUN_004e4500("Don't know length of sample %s",filename);
        }
        pCVar4->taken = 0;
        pCVar4->ref_count = 0;
        pCVar4->buffer_id = 0;
        pCVar4->is_user_sample = 0;
        pCVar4->streaming_slot_index = -1;
        iVar5 = (pCVar4->sample_info).sample_count;
        pCVar4->streaming_buffer_size = iVar5;
        pCVar4->stream_read_position = iVar5;
        pCVar4->stream_write_position = iVar5;
        iVar5 = sound_sndmain_cpp_CSfxSample_framesToBytes_FUN_0054fd90(pCVar4,iVar5);
        pCVar4->data_size_bytes = iVar5;
        iVar5 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_0054d840(pCVar4);
        if (iVar5 != 0) {
          output_buffer =
               sound_sndmain_cpp_CSfxSample_lock_FUN_0054daf0
                         (pCVar4,0,(pCVar4->sample_info).sample_count);
          if (output_buffer == (short *)0x0) {
            sound_sndmain_cpp_logSoundError_FUN_005549c0
                      ("Failed to lock sample %s\n",filename);
          }
          else {
            iVar5 = sound_mp3_cpp_CMP3Decoder_read_FUN_00509fa0
                              (&g_CMP3DecoderInstance,output_buffer,
                               (pCVar4->sample_info).sample_count);
            if (iVar5 == (pCVar4->sample_info).sample_count) {
              sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_0054dbf0(pCVar4);
              goto LAB_0054c57b;
            }
            sound_sndmain_cpp_logSoundError_FUN_005549c0
                      ("Error decoding file data from %s\n",filename);
          }
        }
      }
    }
    sound_mp3_cpp_CMP3Decoder_free_FUN_00509f30(&g_CMP3DecoderInstance);
    sound_sndmain_cpp_CSfxSample_freeMemory_FUN_0054d9b0(pCVar4);
    pCVar4 = (CSfxSample *)0x0;
  }
  return pCVar4;
}
