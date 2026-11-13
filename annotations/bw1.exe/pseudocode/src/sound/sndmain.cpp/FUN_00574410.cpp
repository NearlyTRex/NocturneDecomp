// Name: sound_sndmain.cpp_FUN_00574410
// Address: 00574410
// Address Range: [[00574410, 0057469f]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_FUN_00574410(CSfxSample *out_sample)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_FUN_00574410(CSfxSample *out_sample)

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
  sound_sndmain_cpp_lockSound_FUN_00575d20();
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
        sound_sndmain_cpp_FUN_00573e70();
        return 1;
      }
    }
    iVar4 = iVar4 + 0x1b0;
  } while (iVar4 < 0x6c00);
  sound_sndmain_cpp_FUN_00573e70();
  iVar4 = engine_dosio_cpp_getFileSize_FUN_00478fb0("sound",(char *)out_sample);
  if (iVar4 < 1) {
    return 0;
  }
  engine_dosio_cpp_splitPath_FUN_00479580
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
  iVar4 = _stricmp(&local_140,&DAT_005f4125);
  if (iVar4 != 0) {
    iVar4 = _stricmp(&local_140,&DAT_005f412f);
    if (iVar4 == 0) {
      if ((DAT_02c745b8 & 1) == 0) {
        DAT_02c745b8 = DAT_02c745b8 | 1;
        sound_mp3_cpp_CMP3Decoder_ctor_FUN_0052ae40(&g_CMP3DecoderInstanceOther);
        _atexit(&g_CMP3DecoderDestructorNode2);
      }
      sound_mp3_cpp_CMP3Decoder_openFile_FUN_0052aea0
                (&g_CMP3DecoderInstanceOther,(char *)out_sample);
      (out_sample->sample_info).bit_depth = 0x10;
      (out_sample->sample_info).num_channels = g_CMP3DecoderInstanceOther.num_channels;
      iVar4 = g_CMP3DecoderInstanceOther.sample_rate;
      (out_sample->sample_info).sample_count = -1;
      (out_sample->sample_info).sample_rate = iVar4;
      sound_mp3_cpp_CMP3Decoder_free_FUN_0052b100(&g_CMP3DecoderInstanceOther);
    }
    else {
      _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
      _DAT_01d1d404 = 0x12c0;
      core_main_c_FUN_005030e0("Unknown sample file format extension: %s",out_sample);
    }
LAB_00574568:
    sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_0056e130(out_sample);
    if (0 < (out_sample->sample_info).sample_count) {
      return 1;
    }
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x12cb;
    core_main_c_FUN_005030e0("getSampleInfo - can't determine length for %s",out_sample);
    return 1;
  }
  support_trstream_cpp_CInStreamFile_ctor_FUN_005a08d0(&local_40);
  iVar4 = support_trstream_cpp_CInStreamFile_openInDirectory_FUN_005a0fd0
                    (&local_40,"sound",(char *)out_sample,1);
  if (iVar4 != 0) {
    local_14 = support_trstream_cpp_CInStreamFile_tell_FUN_005a0d50(&local_40);
    iVar4 = sound_sndmain_cpp_FUN_0056db10(&local_40,&local_14,out_sample);
    if (iVar4 != 0) {
      support_trstream_cpp_CInStreamFile_close_FUN_005a0dc0(&local_40);
      support_trstream_cpp_CInStreamFile_dtor_FUN_005a0a50(&local_40,0);
      goto LAB_00574568;
    }
  }
  support_trstream_cpp_CInStreamFile_dtor_FUN_005a0a50(&local_40,0);
  return 0;
}
