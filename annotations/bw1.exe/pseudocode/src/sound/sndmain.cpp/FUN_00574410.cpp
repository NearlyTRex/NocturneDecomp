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
  char cVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  byte bVar9;
  char local_140;
  byte local_13f [255];
  CInStreamFile local_40;
  uint local_14;
  
  bVar9 = 0;
  sound_sndmain_cpp_lockSound_FUN_00575d20();
  iVar7 = 0;
  do {
    if (0 < *(int *)(&g_SfxSamples[0].field_0x110 + iVar7)) {
      iVar5 = _stricmp
                        (&g_SfxSamples[0].field_0x0 + iVar7,(char *)out_sample);
      if (iVar5 == 0) {
        pcVar8 = &g_SfxSamples[0].field_0x0 + iVar7;
        for (iVar5 = 0x54; iVar5 != 0; iVar5 = iVar5 + -1) {
          cVar1 = pcVar8[1];
          cVar2 = pcVar8[2];
          cVar3 = pcVar8[3];
          out_sample->field_0x0 = pcVar8[0];
          out_sample->field_0x1 = cVar1;
          out_sample->field_0x2 = cVar2;
          out_sample->field_0x3 = cVar3;
          pcVar8 = pcVar8 + (uint)bVar9 * -8 + 4;
          out_sample = (CSfxSample *)((int)out_sample + (uint)bVar9 * -8 + 4);
        }
        sound_sndmain_cpp_FUN_00573e70();
        return 1;
      }
    }
    iVar7 = iVar7 + 0x1b0;
  } while (iVar7 < 0x6c00);
  sound_sndmain_cpp_FUN_00573e70();
  iVar7 = engine_dosio_cpp_getFileSize_FUN_00478fb0("sound",(char *)out_sample);
  if (iVar7 < 1) {
    return 0;
  }
  engine_dosio_cpp_FUN_00479580((char *)out_sample,(char *)0x0,(char *)0x0,(char *)0x0,&local_140);
  if (local_140 == '.') {
    uVar6 = 0xffffffff;
    pcVar8 = &local_140;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
    } while (cVar1 != '\0');
    memmove(&local_140,local_13f,~uVar6 - 1);
  }
  iVar7 = _stricmp(&local_140,&DAT_005f4125);
  if (iVar7 != 0) {
    iVar7 = _stricmp(&local_140,&DAT_005f412f);
    if (iVar7 == 0) {
      if ((DAT_02c745b8 & 1) == 0) {
        DAT_02c745b8 = DAT_02c745b8 | 1;
        sound_mp3_cpp_CMP3Decoder_ctor_FUN_0052ae40(&g_CMP3DecoderInstanceOther);
        _atexit(&g_CMP3DecoderDestructorNode2);
      }
      sound_mp3_cpp_FUN_0052aea0(&g_CMP3DecoderInstanceOther,(char *)out_sample);
      *(uint *)&out_sample->field_0x104 = 0x10;
      *(uint *)&out_sample->field_0x108 = g_CMP3DecoderInstanceOther._260_4_;
      uVar4 = g_CMP3DecoderInstanceOther._256_4_;
      *(uint *)&out_sample->field_0x110 = 0xffffffff;
      *(uint *)&out_sample->field_0x10c = uVar4;
      sound_mp3_cpp_CMP3Decoder_free_FUN_0052b100(&g_CMP3DecoderInstanceOther);
    }
    else {
      _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
      _DAT_01d1d404 = 0x12c0;
      core_main_c_FUN_005030e0("Unknown sample file format extension: %s",out_sample);
    }
LAB_00574568:
    sound_sndmain_cpp_FUN_0056e130(out_sample);
    if (0 < *(int *)&out_sample->field_0x110) {
      return 1;
    }
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x12cb;
    core_main_c_FUN_005030e0("getSampleInfo - can't determine length for %s",out_sample);
    return 1;
  }
  unkclass_instream_cpp_CInStreamFile_ctor_FUN_005a08d0(&local_40);
  iVar7 = support_trstream_cpp_FUN_005a0fd0(&local_40,"sound",out_sample,1);
  if (iVar7 != 0) {
    local_14 = unkaddr_0059f520_cpp_FUN_005a0d50(&local_40);
    iVar7 = sound_sndmain_cpp_FUN_0056db10(&local_40,&local_14,out_sample);
    if (iVar7 != 0) {
      unkaddr_0059f520_cpp_FUN_005a0dc0(&local_40);
      unkclass_instream_cpp_CInStreamFile_dtor_FUN_005a0a50(&local_40,0);
      goto LAB_00574568;
    }
  }
  unkclass_instream_cpp_CInStreamFile_dtor_FUN_005a0a50(&local_40,0);
  return 0;
}
