// Name: sound_sndmain.cpp_getSampleInfo_FUN_00557570
// Address: 00557570
// Address Range: [[00557570, 005577ff]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_getSampleInfo_FUN_00557570(CSfxSample *out_sample)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_getSampleInfo_FUN_00557570(CSfxSample *out_sample)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  byte bVar6;
  char local_140;
  byte local_13f [255];
  CInStreamFile local_40;
  int local_14;
  
  bVar6 = 0;
  sound_sndmain_cpp_lockSound_FUN_00558e90();
  iVar4 = 0;
  do {
    if (0 < *(int *)(g_SfxSamples[0].sample_info.name + iVar4 + 0x110)) {
      pcVar5 = g_SfxSamples[0].sample_info.name + iVar4;
      iVar2 = _stricmp(pcVar5,(char *)out_sample);
      if (iVar2 == 0) {
        for (iVar4 = 0x54; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(uint *)(out_sample->sample_info).name = *(uint *)pcVar5;
          pcVar5 = pcVar5 + (uint)bVar6 * -8 + 4;
          out_sample = (CSfxSample *)((int)out_sample + (uint)bVar6 * -8 + 4);
        }
        sound_sndmain_cpp_unlockSound_FUN_00556fd0();
        return 1;
      }
    }
    iVar4 = iVar4 + 0x1b0;
  } while (iVar4 < 0x6c00);
  sound_sndmain_cpp_unlockSound_FUN_00556fd0();
  iVar4 = engine_dosio_cpp_getFileSize_FUN_004657f0("sound",(char *)out_sample);
  if (iVar4 < 1) {
    return 0;
  }
  engine_dosio_cpp_splitPath_FUN_00465e50
            ((char *)out_sample,(char *)0x0,(char *)0x0,(char *)0x0,&local_140);
  if (local_140 == '.') {
    uVar3 = 0xffffffff;
    pcVar5 = &local_140;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
    } while (cVar1 != '\0');
    memmove(&local_140,local_13f,~uVar3 - 1);
  }
  iVar4 = _stricmp(&local_140,&DAT_005d3a0f);
  if (iVar4 != 0) {
    iVar4 = _stricmp(&local_140,&DAT_005d3a19);
    if (iVar4 == 0) {
      if ((DAT_02ce71e8 & 1) == 0) {
        DAT_02ce71e8 = DAT_02ce71e8 | 1;
        sound_mp3_cpp_CMP3Decoder_ctor_FUN_00502750(&g_CMP3DecoderInstanceOther);
        _atexit(&g_CMP3DecoderDestructorNode2);
      }
      sound_mp3_cpp_CMP3Decoder_openFile_FUN_005027b0
                (&g_CMP3DecoderInstanceOther,(char *)out_sample);
      (out_sample->sample_info).bit_depth = 0x10;
      (out_sample->sample_info).num_channels = g_CMP3DecoderInstanceOther.num_channels;
      iVar4 = g_CMP3DecoderInstanceOther.sample_rate;
      (out_sample->sample_info).sample_count = -1;
      (out_sample->sample_info).sample_rate = iVar4;
      sound_mp3_cpp_CMP3Decoder_free_FUN_00502a10(&g_CMP3DecoderInstanceOther);
    }
    else {
      _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
      _DAT_01d71de4 = 0x12d1;
      core_main_c_FUN_004e4330("Unknown sample file format extension: %s",out_sample);
    }
LAB_005576c8:
    sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_00551620(out_sample);
    if (0 < (out_sample->sample_info).sample_count) {
      return 1;
    }
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0x12dc;
    core_main_c_FUN_004e4330("getSampleInfo - can't determine length for %s",out_sample);
    return 1;
  }
  support_trstream_cpp_CInStreamFile_ctor_FUN_005738c0(&local_40);
  iVar4 = support_trstream_cpp_CInStreamFile_openInDirectory_FUN_00573fc0
                    (&local_40,"sound",(char *)out_sample,1);
  if (iVar4 != 0) {
    local_14 = support_trstream_cpp_CInStreamFile_tell_FUN_00573d40(&local_40);
    iVar4 = sound_sndmain_cpp_parseWavFile_FUN_00551000(&local_40.base,&local_14,out_sample);
    if (iVar4 != 0) {
      support_trstream_cpp_CInStreamFile_close_FUN_00573db0(&local_40);
      support_trstream_cpp_CInStreamFile_dtor_FUN_00573a40(&local_40,0);
      goto LAB_005576c8;
    }
  }
  support_trstream_cpp_CInStreamFile_dtor_FUN_00573a40(&local_40,0);
  return 0;
}
