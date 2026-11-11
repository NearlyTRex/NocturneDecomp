// Name: sound_sndmain.cpp_FUN_0056e830
// Address: 0056e830
// Address Range: [[0056e830, 0056edd4]]
// Convention: __cdecl
// Signature: CSfxSample * __cdecl sound_sndmain_cpp_FUN_0056e830(char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSfxSample * __cdecl sound_sndmain_cpp_FUN_0056e830(char *filename)

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
  char local_23c;
  byte local_23b [511];
  CInStreamFile local_3c;
  
  bVar10 = 0;
  pCVar6 = g_SfxSamples;
  iVar7 = 0;
  do {
    iVar2 = _stricmp((char *)pCVar6,filename);
    if (iVar2 == 0) goto LAB_0056e868;
    iVar7 = iVar7 + 1;
    pCVar6 = pCVar6 + 1;
  } while (iVar7 < 0x40);
  pCVar6 = (CSfxSample *)0x0;
LAB_0056e868:
  if (pCVar6 != (CSfxSample *)0x0) {
    return pCVar6;
  }
  iVar7 = 0;
  do {
    _DAT_02c78ff0 = _DAT_02c78ff0 + 1;
    if (0x3f < _DAT_02c78ff0) {
      _DAT_02c78ff0 = 0;
    }
    if ((((g_SfxSamples[_DAT_02c78ff0].taken == 0) && (g_SfxSamples[_DAT_02c78ff0].ref_count == 0))
        && (g_SfxSamples[_DAT_02c78ff0].is_user_sample == 0)) &&
       (g_SfxSamples[_DAT_02c78ff0].locked_length == 0)) {
      pCVar6 = g_SfxSamples + _DAT_02c78ff0;
      bVar9 = pCVar6 == (CSfxSample *)0x0;
      goto LAB_0056e898;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x40);
  pCVar6 = (CSfxSample *)0x0;
  bVar9 = true;
LAB_0056e898:
  if (!bVar9) {
    sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00570020(pCVar6);
    if ((DAT_02c68380 & 1) == 0) {
      DAT_02c68380 = DAT_02c68380 | 1;
      sound_mp3_cpp_CMP3Decoder_ctor_FUN_0052ae40(&g_CMP3DecoderInstance);
      _atexit(&g_CMP3DecoderDestructorNode1);
    }
    iVar7 = engine_dosio_cpp_getFileSize_FUN_00478fb0("sound",filename);
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
      engine_dosio_cpp_splitPath_FUN_00479580
                (filename,(char *)0x0,(char *)0x0,(char *)0x0,&local_23c);
      if (local_23c == '.') {
        uVar5 = 0xffffffff;
        pcVar11 = &local_23c;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar11 + (uint)bVar10 * -2 + 1;
        } while (cVar1 != '\0');
        memmove(&local_23c,local_23b,~uVar5 - 1);
      }
      iVar7 = _stricmp(&local_23c,&DAT_005f2fab);
      if (iVar7 == 0) {
        unkclass_instream_cpp_CInStreamFile_ctor_FUN_005a08d0(&local_3c);
        iVar7 = support_trstream_cpp_CInStreamFile_openInDirectory_FUN_005a0fd0
                          (&local_3c,"sound",filename,1);
        if (iVar7 == 0) {
          _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
          _DAT_01d1d404 = 0x36b;
          core_main_c_FUN_005030e0("Can't open %s",filename);
        }
        pCVar6->file_offset = 0;
        iVar7 = sound_sndmain_cpp_FUN_0056db10(&local_3c,&pCVar6->file_offset,pCVar6);
        if (iVar7 != 0) {
          sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_0056e130(pCVar6);
          pCVar6->taken = 0;
          pCVar6->ref_count = 0;
          pCVar6->buffer_id = 0;
          pCVar6->is_user_sample = 0;
          pCVar6->streaming_slot_index = -1;
          iVar7 = (pCVar6->sample_info).sample_count;
          pCVar6->streaming_buffer_size = iVar7;
          pCVar6->stream_read_position = iVar7;
          pCVar6->stream_write_position = iVar7;
          iVar7 = sound_sndmain_cpp_FUN_00572400(pCVar6,iVar7);
          pCVar6->data_size_bytes = iVar7;
          iVar7 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_0056feb0(pCVar6);
          if (iVar7 != 0) {
            unkaddr_0059f520_cpp_CInStreamFile_seek_FUN_005a0d00(&local_3c,pCVar6->file_offset,0);
            puVar3 = (uint *)
                     sound_sndmain_cpp_FUN_00570160(pCVar6,0,(pCVar6->sample_info).sample_count);
            if (puVar3 == (uint *)0x0) {
              pcVar11 = "Failed to lock sample %s\n";
            }
            else {
              uVar5 = sound_sndmain_cpp_FUN_00572400(pCVar6,(pCVar6->sample_info).sample_count);
              uVar4 = unkaddr_0059f520_cpp_CInStreamFile_read_FUN_005a0c10(&local_3c,puVar3,uVar5);
              if (uVar4 == uVar5) {
                unkaddr_0059f520_cpp_CInStreamFile_close_FUN_005a0dc0(&local_3c);
                if (((pCVar6->sample_info).bit_depth == 0x10) &&
                   (iVar7 = 0, 0 < (pCVar6->sample_info).sample_count)) {
                  do {
                    iVar7 = iVar7 + 1;
                  } while (iVar7 < (pCVar6->sample_info).sample_count);
                }
                sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_00570260(pCVar6);
                unkclass_instream_cpp_CInStreamFile_dtor_FUN_005a0a50(&local_3c,0);
                goto LAB_0056ebeb;
              }
              pcVar11 = "Error reading file data for %s\n";
            }
            sound_sndmain_cpp_FUN_005773f0(pcVar11,filename);
          }
        }
        unkclass_instream_cpp_CInStreamFile_dtor_FUN_005a0a50(&local_3c,0);
      }
      else {
        iVar7 = _stricmp(&local_23c,&DAT_005f3012);
        if (iVar7 != 0) {
          _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
          _DAT_01d1d404 = 0x40d;
          core_main_c_FUN_005030e0("Unknown sample file format extension: %s",filename);
LAB_0056ebeb:
          _sprintf(&local_23c,"SOUND: Loaded sample %s\n");
          wincore_winrun_cpp_FUN_005b3a90(&local_23c);
          return pCVar6;
        }
        sound_mp3_cpp_CMP3Decoder_openFile_FUN_0052aea0(&g_CMP3DecoderInstance,filename);
        (pCVar6->sample_info).bit_depth = 0x10;
        (pCVar6->sample_info).num_channels = g_CMP3DecoderInstance.num_channels;
        iVar7 = g_CMP3DecoderInstance.sample_rate;
        (pCVar6->sample_info).sample_count = -1;
        (pCVar6->sample_info).sample_rate = iVar7;
        sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_0056e130(pCVar6);
        if ((pCVar6->sample_info).sample_count < 0) {
          _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
          _DAT_01d1d404 = 0x3dd;
          core_main_c_FUN_005030e0("Don't know length of sample %s",filename);
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
        iVar7 = sound_sndmain_cpp_FUN_00572400(pCVar6,iVar7);
        pCVar6->data_size_bytes = iVar7;
        iVar7 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_0056feb0(pCVar6);
        if (iVar7 != 0) {
          output_buffer =
               (short *)sound_sndmain_cpp_FUN_00570160(pCVar6,0,(pCVar6->sample_info).sample_count);
          if (output_buffer == (short *)0x0) {
            sound_sndmain_cpp_FUN_005773f0("Failed to lock sample %s\n",filename);
          }
          else {
            iVar7 = sound_mp3_cpp_CMP3Decoder_read_FUN_0052b170
                              (&g_CMP3DecoderInstance,output_buffer,
                               (pCVar6->sample_info).sample_count);
            if (iVar7 == (pCVar6->sample_info).sample_count) {
              sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_00570260(pCVar6);
              goto LAB_0056ebeb;
            }
            sound_sndmain_cpp_FUN_005773f0("Error decoding file data from %s\n",filename);
          }
        }
      }
    }
    sound_mp3_cpp_CMP3Decoder_free_FUN_0052b100(&g_CMP3DecoderInstance);
    sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00570020(pCVar6);
    pCVar6 = (CSfxSample *)0x0;
  }
  return pCVar6;
}
