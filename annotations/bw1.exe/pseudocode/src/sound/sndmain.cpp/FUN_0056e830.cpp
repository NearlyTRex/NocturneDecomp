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
  uint uVar3;
  short *output_buffer;
  uint uVar4;
  CSfxSample *pCVar5;
  int iVar6;
  CSfxSample *pCVar7;
  bool bVar8;
  byte bVar9;
  char *pcVar10;
  char local_23c;
  byte local_23b [511];
  CInStreamFile local_3c;
  
  bVar9 = 0;
  pCVar5 = g_SfxSamples;
  iVar6 = 0;
  do {
    iVar2 = _stricmp((char *)pCVar5,filename);
    if (iVar2 == 0) goto LAB_0056e868;
    iVar6 = iVar6 + 1;
    pCVar5 = pCVar5 + 1;
  } while (iVar6 < 0x40);
  pCVar5 = (CSfxSample *)0x0;
LAB_0056e868:
  if (pCVar5 != (CSfxSample *)0x0) {
    return pCVar5;
  }
  iVar6 = 0;
  do {
    _DAT_02c78ff0 = _DAT_02c78ff0 + 1;
    if (0x3f < _DAT_02c78ff0) {
      _DAT_02c78ff0 = 0;
    }
    if ((((g_SfxSamples[_DAT_02c78ff0].taken == 0) && (g_SfxSamples[_DAT_02c78ff0].ref_count == 0))
        && (*(int *)&g_SfxSamples[_DAT_02c78ff0].field_0x15c == 0)) &&
       (g_SfxSamples[_DAT_02c78ff0].locked_length == 0)) {
      pCVar5 = g_SfxSamples + _DAT_02c78ff0;
      bVar8 = pCVar5 == (CSfxSample *)0x0;
      goto LAB_0056e898;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x40);
  pCVar5 = (CSfxSample *)0x0;
  bVar8 = true;
LAB_0056e898:
  if (!bVar8) {
    sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00570020(pCVar5);
    if ((DAT_02c68380 & 1) == 0) {
      DAT_02c68380 = DAT_02c68380 | 1;
      sound_mp3_cpp_CMP3Decoder_ctor_FUN_0052ae40(&g_CMP3DecoderInstance);
      _atexit(&g_CMP3DecoderDestructorNode1);
    }
    iVar6 = engine_dosio_cpp_getFileSize_FUN_00478fb0("sound",filename);
    pcVar10 = filename;
    pCVar7 = pCVar5;
    if (0 < iVar6) {
      do {
        cVar1 = *pcVar10;
        (pCVar7->sample_info).name[0] = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar10[1];
        (pCVar7->sample_info).name[1] = cVar1;
        pcVar10 = pcVar10 + 2;
        pCVar7 = (CSfxSample *)((pCVar7->sample_info).name + 2);
      } while (cVar1 != '\0');
      engine_dosio_cpp_splitPath_FUN_00479580
                (filename,(char *)0x0,(char *)0x0,(char *)0x0,&local_23c);
      if (local_23c == '.') {
        uVar4 = 0xffffffff;
        pcVar10 = &local_23c;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + (uint)bVar9 * -2 + 1;
        } while (cVar1 != '\0');
        memmove(&local_23c,local_23b,~uVar4 - 1);
      }
      iVar6 = _stricmp(&local_23c,&DAT_005f2fab);
      if (iVar6 == 0) {
        unkclass_instream_cpp_CInStreamFile_ctor_FUN_005a08d0(&local_3c);
        iVar6 = support_trstream_cpp_FUN_005a0fd0(&local_3c,"sound",filename,1);
        if (iVar6 == 0) {
          _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
          _DAT_01d1d404 = 0x36b;
          core_main_c_FUN_005030e0("Can't open %s",filename);
        }
        *(uint *)&pCVar5->field_0x178 = 0;
        iVar6 = sound_sndmain_cpp_FUN_0056db10(&local_3c,&pCVar5->field_0x178,pCVar5);
        if (iVar6 != 0) {
          sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_0056e130(pCVar5);
          pCVar5->taken = 0;
          pCVar5->ref_count = 0;
          pCVar5->buffer_id = 0;
          *(uint *)&pCVar5->field_0x15c = 0;
          *(uint *)&pCVar5->field_0x160 = 0xffffffff;
          iVar6 = (pCVar5->sample_info).sample_count;
          *(int *)&pCVar5->field_0x164 = iVar6;
          *(int *)&pCVar5->field_0x16c = iVar6;
          *(int *)&pCVar5->field_0x170 = iVar6;
          uVar3 = sound_sndmain_cpp_FUN_00572400(pCVar5,iVar6);
          *(uint *)&pCVar5->field_0x168 = uVar3;
          iVar6 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_0056feb0(pCVar5);
          if (iVar6 != 0) {
            unkaddr_0059f520_cpp_FUN_005a0d00(&local_3c,*(uint *)&pCVar5->field_0x178,0);
            iVar6 = sound_sndmain_cpp_FUN_00570160(pCVar5,0,(pCVar5->sample_info).sample_count);
            if (iVar6 == 0) {
              pcVar10 = "Failed to lock sample %s\n";
            }
            else {
              iVar2 = sound_sndmain_cpp_FUN_00572400(pCVar5,(pCVar5->sample_info).sample_count);
              iVar6 = unkaddr_0059f520_cpp_FUN_005a0c10(&local_3c,iVar6,iVar2);
              if (iVar6 == iVar2) {
                unkaddr_0059f520_cpp_FUN_005a0dc0(&local_3c);
                if (((pCVar5->sample_info).bit_depth == 0x10) &&
                   (iVar6 = 0, 0 < (pCVar5->sample_info).sample_count)) {
                  do {
                    iVar6 = iVar6 + 1;
                  } while (iVar6 < (pCVar5->sample_info).sample_count);
                }
                sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_00570260(pCVar5);
                unkclass_instream_cpp_CInStreamFile_dtor_FUN_005a0a50(&local_3c,0);
                goto LAB_0056ebeb;
              }
              pcVar10 = "Error reading file data for %s\n";
            }
            sound_sndmain_cpp_FUN_005773f0(pcVar10,filename);
          }
        }
        unkclass_instream_cpp_CInStreamFile_dtor_FUN_005a0a50(&local_3c,0);
      }
      else {
        iVar6 = _stricmp(&local_23c,&DAT_005f3012);
        if (iVar6 != 0) {
          _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
          _DAT_01d1d404 = 0x40d;
          core_main_c_FUN_005030e0("Unknown sample file format extension: %s",filename);
LAB_0056ebeb:
          _sprintf(&local_23c,"SOUND: Loaded sample %s\n");
          wincore_winrun_cpp_FUN_005b3a90(&local_23c);
          return pCVar5;
        }
        sound_mp3_cpp_CMP3Decoder_openFile_FUN_0052aea0(&g_CMP3DecoderInstance,filename);
        (pCVar5->sample_info).bit_depth = 0x10;
        (pCVar5->sample_info).num_channels = g_CMP3DecoderInstance.num_channels;
        iVar6 = g_CMP3DecoderInstance.sample_rate;
        (pCVar5->sample_info).sample_count = -1;
        (pCVar5->sample_info).sample_rate = iVar6;
        sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_0056e130(pCVar5);
        if ((pCVar5->sample_info).sample_count < 0) {
          _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
          _DAT_01d1d404 = 0x3dd;
          core_main_c_FUN_005030e0("Don't know length of sample %s",filename);
        }
        pCVar5->taken = 0;
        pCVar5->ref_count = 0;
        pCVar5->buffer_id = 0;
        *(uint *)&pCVar5->field_0x15c = 0;
        *(uint *)&pCVar5->field_0x160 = 0xffffffff;
        iVar6 = (pCVar5->sample_info).sample_count;
        *(int *)&pCVar5->field_0x164 = iVar6;
        *(int *)&pCVar5->field_0x16c = iVar6;
        *(int *)&pCVar5->field_0x170 = iVar6;
        uVar3 = sound_sndmain_cpp_FUN_00572400(pCVar5,iVar6);
        *(uint *)&pCVar5->field_0x168 = uVar3;
        iVar6 = sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_0056feb0(pCVar5);
        if (iVar6 != 0) {
          output_buffer =
               (short *)sound_sndmain_cpp_FUN_00570160(pCVar5,0,(pCVar5->sample_info).sample_count);
          if (output_buffer == (short *)0x0) {
            sound_sndmain_cpp_FUN_005773f0("Failed to lock sample %s\n",filename);
          }
          else {
            iVar6 = sound_mp3_cpp_CMP3Decoder_read_FUN_0052b170
                              (&g_CMP3DecoderInstance,output_buffer,
                               (pCVar5->sample_info).sample_count);
            if (iVar6 == (pCVar5->sample_info).sample_count) {
              sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_00570260(pCVar5);
              goto LAB_0056ebeb;
            }
            sound_sndmain_cpp_FUN_005773f0("Error decoding file data from %s\n",filename);
          }
        }
      }
    }
    sound_mp3_cpp_CMP3Decoder_free_FUN_0052b100(&g_CMP3DecoderInstance);
    sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00570020(pCVar5);
    pCVar5 = (CSfxSample *)0x0;
  }
  return pCVar5;
}
