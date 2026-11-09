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
  char cVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  byte bVar9;
  char local_13c;
  byte local_13b [255];
  CInStreamFile local_3c;
  uint local_14;
  
  bVar9 = 0;
  sound_sndmain_cpp_lockSound_FUN_005532f0();
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
        sound_sndmain_cpp_FUN_00551440();
        return 1;
      }
    }
    iVar7 = iVar7 + 0x1ac;
  } while (iVar7 < 0x6b00);
  sound_sndmain_cpp_FUN_00551440();
  iVar7 = engine_dosio_cpp_getFileSize_FUN_00460aa0("sound",(char *)out_sample);
  if (iVar7 < 1) {
    return 0;
  }
  engine_dosio_cpp_FUN_00461070((char *)out_sample,(char *)0x0,(char *)0x0,(char *)0x0,&local_13c);
  if (local_13c == '.') {
    uVar6 = 0xffffffff;
    pcVar8 = &local_13c;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
    } while (cVar1 != '\0');
    memmove(&local_13c,local_13b,~uVar6 - 1);
  }
  iVar7 = _stricmp(&local_13c,&DAT_005e8f2b);
  if (iVar7 != 0) {
    iVar7 = _stricmp(&local_13c,&DAT_005e8f35);
    if (iVar7 == 0) {
      if ((DAT_0263cee8 & 1) == 0) {
        DAT_0263cee8 = DAT_0263cee8 | 1;
        sound_mp3_cpp_CMP3Decoder_ctor_FUN_00509c70(&g_CMP3DecoderInstanceOther);
        _atexit(&g_CMP3DecoderDestructorNode2);
      }
      sound_mp3_cpp_FUN_00509cd0(&g_CMP3DecoderInstanceOther,(char *)out_sample);
      *(uint *)&out_sample->field_0x104 = 0x10;
      *(uint *)&out_sample->field_0x108 = g_CMP3DecoderInstanceOther._260_4_;
      uVar4 = g_CMP3DecoderInstanceOther._256_4_;
      *(uint *)&out_sample->field_0x110 = 0xffffffff;
      *(uint *)&out_sample->field_0x10c = uVar4;
      sound_mp3_cpp_CMP3Decoder_free_FUN_00509f30(&g_CMP3DecoderInstanceOther);
    }
    else {
      _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
      _DAT_01d046a4 = 0x12c9;
      core_main_c_FUN_004e4500("Unknown sample file format extension: %s",out_sample);
    }
LAB_00551b36:
    sound_sndmain_cpp_FUN_0054bac0(out_sample);
    if (0 < *(int *)&out_sample->field_0x110) {
      return 1;
    }
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0x12d4;
    core_main_c_FUN_004e4500("getSampleInfo - can't determine length for %s",out_sample);
    return 1;
  }
  unkclass_instream_cpp_CInStreamFile_ctor_FUN_0057cd50(&local_3c);
  iVar7 = support_trstream_cpp_FUN_0057d390(&local_3c,"sound",out_sample);
  if (iVar7 != 0) {
    local_14 = unkaddr_0057b9a0_cpp_FUN_0057d110(&local_3c);
    iVar7 = sound_sndmain_cpp_FUN_0054b4a0(&local_3c,&local_14,out_sample);
    if (iVar7 != 0) {
      unkaddr_0057b9a0_cpp_FUN_0057d180(&local_3c);
      unkclass_instream_cpp_CInStreamFile_dtor_FUN_0057cec0(&local_3c,0);
      goto LAB_00551b36;
    }
  }
  unkclass_instream_cpp_CInStreamFile_dtor_FUN_0057cec0(&local_3c,0);
  return 0;
}
