// Name: sound_sndmain.cpp_FUN_00551d20
// Address: 00551d20
// Address Range: [[00551d20, 005522c4]]
// Convention: __cdecl
// Signature: CSfxSample * __cdecl sound_sndmain_cpp_FUN_00551d20(char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSfxSample * __cdecl sound_sndmain_cpp_FUN_00551d20(char *filename)

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
  char local_23c;
  byte local_23b [511];
  CInStreamFile local_3c;
  
  bVar8 = 0;
  pCVar4 = g_SfxSamples;
  iVar5 = 0;
  do {
    iVar2 = _stricmp((char *)pCVar4,filename);
    if (iVar2 == 0) goto LAB_00551d58;
    iVar5 = iVar5 + 1;
    pCVar4 = pCVar4 + 1;
  } while (iVar5 < 0x40);
  pCVar4 = (CSfxSample *)0x0;
LAB_00551d58:
  if (pCVar4 != (CSfxSample *)0x0) {
    return pCVar4;
  }
  iVar5 = 0;
  do {
    _DAT_02cebc20 = _DAT_02cebc20 + 1;
    if (0x3f < _DAT_02cebc20) {
      _DAT_02cebc20 = 0;
    }
    if ((((g_SfxSamples[_DAT_02cebc20].taken == 0) && (g_SfxSamples[_DAT_02cebc20].ref_count == 0))
        && (g_SfxSamples[_DAT_02cebc20].is_user_sample == 0)) &&
       (g_SfxSamples[_DAT_02cebc20].locked_length == 0)) {
      pCVar4 = g_SfxSamples + _DAT_02cebc20;
      bVar7 = pCVar4 == (CSfxSample *)0x0;
      goto LAB_00551d88;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x40);
  pCVar4 = (CSfxSample *)0x0;
  bVar7 = true;
LAB_00551d88:
  if (!bVar7) {
    sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00553520(pCVar4);
    if ((DAT_02cdafb0 & 1) == 0) {
      DAT_02cdafb0 = DAT_02cdafb0 | 1;
      sound_mp3_cpp_CMP3Decoder_ctor_FUN_00502750(&g_CMP3DecoderInstance);
      _atexit(&g_CMP3DecoderDestructorNode1);
    }
    iVar5 = engine_dosio_cpp_getFileSize_FUN_004657f0("sound",filename);
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
      engine_dosio_cpp_splitPath_FUN_00465e50
                (filename,(char *)0x0,(char *)0x0,(char *)0x0,&local_23c);
      if (local_23c == '.') {
        uVar3 = 0xffffffff;
        pcVar9 = &local_23c;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + (uint)bVar8 * -2 + 1;
        } while (cVar1 != '\0');
        memmove(&local_23c,local_23b,~uVar3 - 1);
      }
      iVar5 = _stricmp(&local_23c,&DAT_005d2895);
      if (iVar5 == 0) {
        support_trstream_cpp_CInStreamFile_ctor_FUN_005738c0(&local_3c);
        iVar5 = support_trstream_cpp_CInStreamFile_openInDirectory_FUN_00573fc0
                          (&local_3c,"sound",filename,1);
        if (iVar5 == 0) {
          _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
          _DAT_01d71de4 = 0x36d;
          core_main_c_FUN_004e4330("Can't open %s",filename);
        }
        pCVar4->file_offset = 0;
        iVar5 = sound_sndmain_cpp_FUN_00551000(&local_3c,&pCVar4->file_offset,pCVar4);
        if (iVar5 != 0) {
          sound_sndmain_cpp_FUN_00551620(pCVar4);
          pCVar4->taken = 0;
          pCVar4->ref_count = 0;
          pCVar4->buffer_id = 0;
          pCVar4->is_user_sample = 0;
          pCVar4->streaming_slot_index = -1;
          iVar5 = (pCVar4->sample_info).sample_count;
          pCVar4->streaming_buffer_size = iVar5;
          pCVar4->stream_read_position = iVar5;
          pCVar4->stream_write_position = iVar5;
          iVar5 = sound_sndmain_cpp_FUN_00555900(pCVar4,iVar5);
          pCVar4->data_size_bytes = iVar5;
          iVar5 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_005533b0(pCVar4);
          if (iVar5 != 0) {
            support_trstream_cpp_CInStreamFile_seek_FUN_00573cf0(&local_3c,pCVar4->file_offset,0);
            buffer = (void *)sound_sndmain_cpp_FUN_00553660
                                       (pCVar4,0,(pCVar4->sample_info).sample_count);
            if (buffer == (void *)0x0) {
              pcVar9 = "Failed to lock sample %s\n";
            }
            else {
              iVar5 = sound_sndmain_cpp_FUN_00555900(pCVar4,(pCVar4->sample_info).sample_count);
              iVar2 = support_trstream_cpp_CInStreamFile_read_FUN_00573c00(&local_3c,buffer,iVar5);
              if (iVar2 == iVar5) {
                support_trstream_cpp_CInStreamFile_close_FUN_00573db0(&local_3c);
                if (((pCVar4->sample_info).bit_depth == 0x10) &&
                   (iVar5 = 0, 0 < (pCVar4->sample_info).sample_count)) {
                  do {
                    iVar5 = iVar5 + 1;
                  } while (iVar5 < (pCVar4->sample_info).sample_count);
                }
                sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_00553760(pCVar4);
                support_trstream_cpp_CInStreamFile_dtor_FUN_00573a40(&local_3c,0);
                goto LAB_005520db;
              }
              pcVar9 = "Error reading file data for %s\n";
            }
            sound_sndmain_cpp_FUN_0055a560(pcVar9,filename);
          }
        }
        support_trstream_cpp_CInStreamFile_dtor_FUN_00573a40(&local_3c,0);
      }
      else {
        iVar5 = _stricmp(&local_23c,&DAT_005d28fc);
        if (iVar5 != 0) {
          _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
          _DAT_01d71de4 = 0x40f;
          core_main_c_FUN_004e4330("Unknown sample file format extension: %s",filename);
LAB_005520db:
          _sprintf(&local_23c,"SOUND: Loaded sample %s\n");
          wincore_winrun_cpp_FUN_00581c70(&local_23c);
          return pCVar4;
        }
        sound_mp3_cpp_CMP3Decoder_openFile_FUN_005027b0(&g_CMP3DecoderInstance,filename);
        (pCVar4->sample_info).bit_depth = 0x10;
        (pCVar4->sample_info).num_channels = g_CMP3DecoderInstance.num_channels;
        iVar5 = g_CMP3DecoderInstance.sample_rate;
        (pCVar4->sample_info).sample_count = -1;
        (pCVar4->sample_info).sample_rate = iVar5;
        sound_sndmain_cpp_FUN_00551620(pCVar4);
        if ((pCVar4->sample_info).sample_count < 0) {
          _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
          _DAT_01d71de4 = 0x3df;
          core_main_c_FUN_004e4330("Don't know length of sample %s",filename);
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
        iVar5 = sound_sndmain_cpp_FUN_00555900(pCVar4,iVar5);
        pCVar4->data_size_bytes = iVar5;
        iVar5 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_005533b0(pCVar4);
        if (iVar5 != 0) {
          output_buffer =
               (short *)sound_sndmain_cpp_FUN_00553660(pCVar4,0,(pCVar4->sample_info).sample_count);
          if (output_buffer == (short *)0x0) {
            sound_sndmain_cpp_FUN_0055a560("Failed to lock sample %s\n",filename);
          }
          else {
            iVar5 = sound_mp3_cpp_CMP3Decoder_read_FUN_00502a80
                              (&g_CMP3DecoderInstance,output_buffer,
                               (pCVar4->sample_info).sample_count);
            if (iVar5 == (pCVar4->sample_info).sample_count) {
              sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_00553760(pCVar4);
              goto LAB_005520db;
            }
            sound_sndmain_cpp_FUN_0055a560("Error decoding file data from %s\n",filename);
          }
        }
      }
    }
    sound_mp3_cpp_CMP3Decoder_free_FUN_00502a10(&g_CMP3DecoderInstance);
    sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00553520(pCVar4);
    pCVar4 = (CSfxSample *)0x0;
  }
  return pCVar4;
}
