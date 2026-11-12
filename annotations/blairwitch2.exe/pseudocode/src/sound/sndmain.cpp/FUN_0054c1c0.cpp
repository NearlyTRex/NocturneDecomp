// Name: sound_sndmain.cpp_FUN_0054c1c0
// Address: 0054c1c0
// Address Range: [[0054c1c0, 0054c764]]
// Convention: __cdecl
// Signature: CSfxSample * __cdecl sound_sndmain_cpp_FUN_0054c1c0(char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSfxSample * __cdecl sound_sndmain_cpp_FUN_0054c1c0(char *filename)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  short *output_buffer;
  uint uVar5;
  CSfxSample *pCVar6;
  int iVar7;
  CSfxSample *pCVar8;
  bool bVar9;
  byte bVar10;
  char *pcVar11;
  char local_238;
  byte local_237 [511];
  CInStreamFile local_38;
  
  bVar10 = 0;
  pCVar6 = g_SfxSamples;
  iVar7 = 0;
  do {
    iVar2 = _stricmp((char *)pCVar6,filename);
    if (iVar2 == 0) goto LAB_0054c1f8;
    iVar7 = iVar7 + 1;
    pCVar6 = pCVar6 + 1;
  } while (iVar7 < 0x40);
  pCVar6 = (CSfxSample *)0x0;
LAB_0054c1f8:
  if (pCVar6 != (CSfxSample *)0x0) {
    return pCVar6;
  }
  iVar7 = 0;
  do {
    _DAT_02641920 = _DAT_02641920 + 1;
    if (0x3f < _DAT_02641920) {
      _DAT_02641920 = 0;
    }
    if ((((g_SfxSamples[_DAT_02641920].taken == 0) && (g_SfxSamples[_DAT_02641920].ref_count == 0))
        && (g_SfxSamples[_DAT_02641920].is_user_sample == 0)) &&
       (g_SfxSamples[_DAT_02641920].locked_length == 0)) {
      pCVar6 = g_SfxSamples + _DAT_02641920;
      bVar9 = pCVar6 == (CSfxSample *)0x0;
      goto LAB_0054c228;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x40);
  pCVar6 = (CSfxSample *)0x0;
  bVar9 = true;
LAB_0054c228:
  if (!bVar9) {
    sound_sndmain_cpp_CSfxSample_freeMemory_FUN_0054d9b0(pCVar6);
    if ((DAT_02630cb0 & 1) == 0) {
      DAT_02630cb0 = DAT_02630cb0 | 1;
      sound_mp3_cpp_CMP3Decoder_ctor_FUN_00509c70(&g_CMP3DecoderInstance);
      _atexit(&g_CMP3DecoderDestructorNode1);
    }
    iVar7 = engine_dosio_cpp_getFileSize_FUN_00460aa0("sound",filename);
    pcVar11 = filename;
    pCVar8 = pCVar6;
    if (0 < iVar7) {
      do {
        cVar1 = *pcVar11;
        (pCVar8->sample_info).name[0] = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar11[1];
        (pCVar8->sample_info).name[1] = cVar1;
        pcVar11 = pcVar11 + 2;
        pCVar8 = (CSfxSample *)((pCVar8->sample_info).name + 2);
      } while (cVar1 != '\0');
      engine_dosio_cpp_splitPath_FUN_00461070
                (filename,(char *)0x0,(char *)0x0,(char *)0x0,&local_238);
      if (local_238 == '.') {
        uVar5 = 0xffffffff;
        pcVar11 = &local_238;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar11 + (uint)bVar10 * -2 + 1;
        } while (cVar1 != '\0');
        memmove(&local_238,local_237,~uVar5 - 1);
      }
      iVar7 = _stricmp(&local_238,&DAT_005e7db1);
      if (iVar7 == 0) {
        support_trstream_cpp_CInStreamFile_ctor_FUN_0057cd50(&local_38);
        iVar7 = support_trstream_cpp_CInStreamFile_openInDirectory_FUN_0057d390
                          (&local_38,"sound",filename);
        if (iVar7 == 0) {
          _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
          _DAT_01d046a4 = 0x36b;
          core_main_c_FUN_004e4500("Can't open %s",filename);
        }
        pCVar6->file_offset = 0;
        iVar7 = sound_sndmain_cpp_FUN_0054b4a0(&local_38,&pCVar6->file_offset,pCVar6);
        if (iVar7 != 0) {
          sound_sndmain_cpp_FUN_0054bac0(pCVar6);
          pCVar6->taken = 0;
          pCVar6->ref_count = 0;
          pCVar6->buffer_id = 0;
          pCVar6->is_user_sample = 0;
          pCVar6->streaming_slot_index = -1;
          iVar7 = (pCVar6->sample_info).sample_count;
          pCVar6->streaming_buffer_size = iVar7;
          pCVar6->stream_read_position = iVar7;
          pCVar6->stream_write_position = iVar7;
          iVar7 = sound_sndmain_cpp_FUN_0054fd90(pCVar6,iVar7);
          pCVar6->data_size_bytes = iVar7;
          iVar7 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_0054d840(pCVar6);
          if (iVar7 != 0) {
            support_trstream_cpp_CInStreamFile_seek_FUN_0057d0c0(&local_38,pCVar6->file_offset,0);
            puVar3 = (uint *)
                     sound_sndmain_cpp_FUN_0054daf0(pCVar6,0,(pCVar6->sample_info).sample_count);
            if (puVar3 == (uint *)0x0) {
              pcVar11 = "Failed to lock sample %s\n";
            }
            else {
              uVar5 = sound_sndmain_cpp_FUN_0054fd90(pCVar6,(pCVar6->sample_info).sample_count);
              uVar4 = support_trstream_cpp_CInStreamFile_read_FUN_0057cfe0(&local_38,puVar3,uVar5);
              if (uVar4 == uVar5) {
                support_trstream_cpp_CInStreamFile_close_FUN_0057d180(&local_38);
                if (((pCVar6->sample_info).bit_depth == 0x10) &&
                   (iVar7 = 0, 0 < (pCVar6->sample_info).sample_count)) {
                  do {
                    iVar7 = iVar7 + 1;
                  } while (iVar7 < (pCVar6->sample_info).sample_count);
                }
                sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_0054dbf0(pCVar6);
                support_trstream_cpp_CInStreamFile_dtor_FUN_0057cec0(&local_38,0);
                goto LAB_0054c57b;
              }
              pcVar11 = "Error reading file data for %s\n";
            }
            sound_sndmain_cpp_FUN_005549c0(pcVar11,filename);
          }
        }
        support_trstream_cpp_CInStreamFile_dtor_FUN_0057cec0(&local_38,0);
      }
      else {
        iVar7 = _stricmp(&local_238,&DAT_005e7e18);
        if (iVar7 != 0) {
          _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
          _DAT_01d046a4 = 0x40d;
          core_main_c_FUN_004e4500("Unknown sample file format extension: %s",filename);
LAB_0054c57b:
          _sprintf(&local_238,"SOUND: Loaded sample %s\n");
          wincore_winrun_cpp_FUN_0058ffc0(&local_238);
          return pCVar6;
        }
        sound_mp3_cpp_CMP3Decoder_openFile_FUN_00509cd0(&g_CMP3DecoderInstance,filename);
        (pCVar6->sample_info).bit_depth = 0x10;
        (pCVar6->sample_info).num_channels = g_CMP3DecoderInstance.num_channels;
        iVar7 = g_CMP3DecoderInstance.sample_rate;
        (pCVar6->sample_info).sample_count = -1;
        (pCVar6->sample_info).sample_rate = iVar7;
        sound_sndmain_cpp_FUN_0054bac0(pCVar6);
        if ((pCVar6->sample_info).sample_count < 0) {
          _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
          _DAT_01d046a4 = 0x3dd;
          core_main_c_FUN_004e4500("Don't know length of sample %s",filename);
        }
        pCVar6->taken = 0;
        pCVar6->ref_count = 0;
        pCVar6->buffer_id = 0;
        pCVar6->is_user_sample = 0;
        pCVar6->streaming_slot_index = -1;
        iVar7 = (pCVar6->sample_info).sample_count;
        pCVar6->streaming_buffer_size = iVar7;
        pCVar6->stream_read_position = iVar7;
        pCVar6->stream_write_position = iVar7;
        iVar7 = sound_sndmain_cpp_FUN_0054fd90(pCVar6,iVar7);
        pCVar6->data_size_bytes = iVar7;
        iVar7 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_0054d840(pCVar6);
        if (iVar7 != 0) {
          output_buffer =
               (short *)sound_sndmain_cpp_FUN_0054daf0(pCVar6,0,(pCVar6->sample_info).sample_count);
          if (output_buffer == (short *)0x0) {
            sound_sndmain_cpp_FUN_005549c0("Failed to lock sample %s\n",filename);
          }
          else {
            iVar7 = sound_mp3_cpp_CMP3Decoder_read_FUN_00509fa0
                              (&g_CMP3DecoderInstance,output_buffer,
                               (pCVar6->sample_info).sample_count);
            if (iVar7 == (pCVar6->sample_info).sample_count) {
              sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_0054dbf0(pCVar6);
              goto LAB_0054c57b;
            }
            sound_sndmain_cpp_FUN_005549c0("Error decoding file data from %s\n",filename);
          }
        }
      }
    }
    sound_mp3_cpp_CMP3Decoder_free_FUN_00509f30(&g_CMP3DecoderInstance);
    sound_sndmain_cpp_CSfxSample_freeMemory_FUN_0054d9b0(pCVar6);
    pCVar6 = (CSfxSample *)0x0;
  }
  return pCVar6;
}
