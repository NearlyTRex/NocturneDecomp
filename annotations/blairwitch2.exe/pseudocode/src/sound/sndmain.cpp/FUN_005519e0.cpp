// Name: sound_sndmain.cpp_FUN_005519e0
// Address: 005519e0
// Address Range: [[005519e0, 00551c6d]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_FUN_005519e0(CSfxSample *out_sample)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_FUN_005519e0(CSfxSample *out_sample)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  byte bVar6;
  char local_13c;
  byte local_13b [255];
  CInStreamFile local_3c;
  int local_14;
  
  bVar6 = 0;
  sound_sndmain_cpp_lockSound_FUN_005532f0();
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
        sound_sndmain_cpp_FUN_00551440();
        return 1;
      }
    }
    iVar4 = iVar4 + 0x1ac;
  } while (iVar4 < 0x6b00);
  sound_sndmain_cpp_FUN_00551440();
  iVar4 = engine_dosio_cpp_getFileSize_FUN_00460aa0("sound",(char *)out_sample);
  if (iVar4 < 1) {
    return 0;
  }
  engine_dosio_cpp_splitPath_FUN_00461070
            ((char *)out_sample,(char *)0x0,(char *)0x0,(char *)0x0,&local_13c);
  if (local_13c == '.') {
    uVar3 = 0xffffffff;
    pcVar5 = &local_13c;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
    } while (cVar1 != '\0');
    memmove(&local_13c,local_13b,~uVar3 - 1);
  }
  iVar4 = _stricmp(&local_13c,&DAT_005e8f2b);
  if (iVar4 != 0) {
    iVar4 = _stricmp(&local_13c,&DAT_005e8f35);
    if (iVar4 == 0) {
      if ((DAT_0263cee8 & 1) == 0) {
        DAT_0263cee8 = DAT_0263cee8 | 1;
        sound_mp3_cpp_CMP3Decoder_ctor_FUN_00509c70(&g_CMP3DecoderInstanceOther);
        _atexit(&g_CMP3DecoderDestructorNode2);
      }
      sound_mp3_cpp_CMP3Decoder_openFile_FUN_00509cd0
                (&g_CMP3DecoderInstanceOther,(char *)out_sample);
      (out_sample->sample_info).bit_depth = 0x10;
      (out_sample->sample_info).num_channels = g_CMP3DecoderInstanceOther.num_channels;
      iVar4 = g_CMP3DecoderInstanceOther.sample_rate;
      (out_sample->sample_info).sample_count = -1;
      (out_sample->sample_info).sample_rate = iVar4;
      sound_mp3_cpp_CMP3Decoder_free_FUN_00509f30(&g_CMP3DecoderInstanceOther);
    }
    else {
      _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
      _DAT_01d046a4 = 0x12c9;
      core_main_c_FUN_004e4500("Unknown sample file format extension: %s",out_sample);
    }
LAB_00551b36:
    sound_sndmain_cpp_FUN_0054bac0(out_sample);
    if (0 < (out_sample->sample_info).sample_count) {
      return 1;
    }
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0x12d4;
    core_main_c_FUN_004e4500("getSampleInfo - can't determine length for %s",out_sample);
    return 1;
  }
  support_trstream_cpp_CInStreamFile_ctor_FUN_0057cd50(&local_3c);
  iVar4 = support_trstream_cpp_CInStreamFile_openInDirectory_FUN_0057d390
                    (&local_3c,"sound",(char *)out_sample);
  if (iVar4 != 0) {
    local_14 = support_trstream_cpp_CInStreamFile_tell_FUN_0057d110(&local_3c);
    iVar4 = sound_sndmain_cpp_FUN_0054b4a0(&local_3c,&local_14,out_sample);
    if (iVar4 != 0) {
      support_trstream_cpp_CInStreamFile_close_FUN_0057d180(&local_3c);
      support_trstream_cpp_CInStreamFile_dtor_FUN_0057cec0(&local_3c,0);
      goto LAB_00551b36;
    }
  }
  support_trstream_cpp_CInStreamFile_dtor_FUN_0057cec0(&local_3c,0);
  return 0;
}
