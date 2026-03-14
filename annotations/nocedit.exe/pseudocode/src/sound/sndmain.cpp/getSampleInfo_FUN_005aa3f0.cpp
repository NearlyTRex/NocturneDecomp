// Name: sound_sndmain.cpp_getSampleInfo_FUN_005aa3f0
// Address: 005aa3f0
// Address Range: [[005aa3f0, 005aa652]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_getSampleInfo_FUN_005aa3f0(CSfxSample *out_sample)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_getSampleInfo_FUN_005aa3f0(CSfxSample *out_sample)

{
  int iVar1;
  int iVar2;
  _FILE *file_handle;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar2;
  byte bVar6;
  char local_114;
  byte local_113 [255];
  long local_14;
  char cVar1;
  
  bVar6 = 0;
  sound_sndmain_cpp_lockSound_FUN_005abd30();
  iVar4 = 0;
  do {
    if (0 < *(int *)(g_SfxSamples[0].sample_info.name + iVar4 + 0x110)) {
      pcVar5 = g_SfxSamples[0].sample_info.name + iVar4;
      iVar2 = _stricmp(pcVar5,(char *)out_sample);
      if (iVar2 == 0) {
        for (iVar1 = 0x54; iVar1 != 0; iVar1 = iVar1 + -1) {
          pcVar5 = pcVar5 + (uint)bVar6 * -8 + 4;
          *(uint *)(out_sample->sample_info).name = *(uint *)pcVar5;
          pcVar5 = pcVar5;
          out_sample = (CSfxSample *)((int)out_sample + (uint)bVar6 * -8 + 4);
        }
        sound_sndmain_cpp_unlockSound_FUN_005abdc0();
        return 1;
      }
    }
    iVar4 = iVar4 + 0x180;
  } while (iVar4 < 0x6000);
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  iVar1 = engine_dosio_c_getFileSize_FUN_00481880("sound",(char *)out_sample);
  if (0 < iVar1) {
    engine_dosio_c_splitPath_FUN_00481f20
              ((char *)out_sample,(char *)0x0,(char *)0x0,(char *)0x0,&local_114);
    if (local_114 == '.') {
      uVar3 = 0xffffffff;
      pcVar2 = &local_114;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + (uint)bVar6 * -2 + 1;
      } while (cVar1 != '\0');
      memmove(&local_114,local_113,~uVar3 - 1);
    }
    iVar1 = _stricmp(&local_114,"wav");
    if (iVar1 != 0) {
      iVar1 = _stricmp(&local_114,"mp3");
      if (iVar1 == 0) {
        if ((g_GlobalMP3DecoderInitializedOther & 1) == 0) {
          g_GlobalMP3DecoderInitializedOther = g_GlobalMP3DecoderInitializedOther | 1;
          sound_mp3_cpp_CMP3Decoder_ctor_FUN_005344f0(&g_CMP3DecoderInstance);
          _atexit(&g_CMP3DecoderDestructorNode2);
        }
        sound_mp3_cpp_CMP3Decoder_openFile_FUN_00534550(&g_CMP3DecoderInstance,(char *)out_sample);
        (out_sample->sample_info).bit_depth = 0x10;
        (out_sample->sample_info).num_channels = g_CMP3DecoderInstance.num_channels;
        iVar1 = g_CMP3DecoderInstance.sample_rate;
        (out_sample->sample_info).sample_count = -1;
        (out_sample->sample_info).sample_rate = iVar1;
        sound_mp3_cpp_CMP3Decoder_free_FUN_005349e0(&g_CMP3DecoderInstance);
      }
      else {
        g_CurrentFilename = "..\\sound\\sndmain.cpp";
        g_CurrentLineNumber = 0x10d3;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Unknown sample file format extension: %s",out_sample)
        ;
      }
LAB_005aa53c:
      sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_005a45c0(out_sample);
      if ((out_sample->sample_info).sample_count < 1) {
        g_CurrentFilename = "..\\sound\\sndmain.cpp";
        g_CurrentLineNumber = 0x10de;
        core_main_c_displayErrorAndQuit_FUN_00506f10("getSampleInfo - can't determine length for %s",out_sample)
        ;
        return 1;
      }
      return 1;
    }
    file_handle = engine_dosio_c_getFile_FUN_00481a50
                            ("sound",(char *)out_sample,"rb");
    if (file_handle != (_FILE *)0x0) {
      local_14 = _ftell(file_handle);
      iVar1 = sound_sndmain_cpp_parseWavFile_FUN_005a3fe0(file_handle,&local_14,out_sample);
      if (iVar1 != 0) {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\sound\\sndmain.cpp",0x10ba);
        goto LAB_005aa53c;
      }
    }
    if (file_handle != (_FILE *)0x0) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\sound\\sndmain.cpp",0x10af);
      return 0;
    }
  }
  return 0;
}
