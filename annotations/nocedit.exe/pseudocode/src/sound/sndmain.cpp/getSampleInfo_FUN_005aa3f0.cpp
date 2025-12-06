// Name: sound_sndmain.cpp_getSampleInfo_FUN_005aa3f0
// Address: 005aa3f0
// Address Range: [[005aa3f0, 005aa652]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_getSampleInfo_FUN_005aa3f0(CSfxSample * out_sample)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_getSampleInfo_FUN_005aa3f0(CSfxSample *out_sample)

{
  int iVar1;
  FILE *file_handle;
  uint uVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  long in_stack_0000000c;
  char cVar6;
  uint in_stack_fffffefc;
  
  bVar5 = 0;
  sound_sndmain_cpp_lockSound_FUN_005abd30();
  iVar3 = 0;
  do {
    if (0 < *(int *)((int)g_SfxSamples[0].loop_markers + iVar3 + -0x2c)) {
      pcVar4 = g_SfxSamples[0].sample_info.name + iVar3;
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0(pcVar4,(char *)out_sample);
      if (iVar1 == 0) {
        for (iVar3 = 0x54; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(uint *)(out_sample->sample_info).name = *(uint *)pcVar4;
          pcVar4 = pcVar4 + (uint)bVar5 * -8 + 4;
          out_sample = (CSfxSample *)((int)out_sample + (uint)bVar5 * -8 + 4);
        }
        sound_sndmain_cpp_unlockSound_FUN_005abdc0();
        return 1;
      }
    }
    cVar6 = (char)in_stack_fffffefc;
    iVar3 = iVar3 + 0x180;
  } while (iVar3 < 0x6000);
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  iVar3 = engine_dosio_c_getFileSize_FUN_00481880("sound",(char *)out_sample);
  if (0 < iVar3) {
    engine_dosio_c_splitPath_FUN_00481f20
              ((char *)out_sample,(char *)0x0,(char *)0x0,(char *)0x0,&stack0xfffffef8);
    if (cVar6 == '.') {
      uVar2 = 0xffffffff;
      pcVar4 = &stack0xfffffefc;
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar6 = *pcVar4;
        pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
      } while (cVar6 != '\0');
      crt_string_c_memmove_FUN_005fe5e0(&stack0xfffffefc,&stack0xfffffefd,~uVar2 - 1);
    }
    iVar3 = crt_string_c_stricmp_FUN_005fe7f0(&stack0xffffff00,"wav");
    if (iVar3 != 0) {
      iVar3 = crt_string_c_stricmp_FUN_005fe7f0(&stack0xffffff04,"mp3");
      if (iVar3 == 0) {
        if ((g_GlobalMP3DecoderInitialized & 1) == 0) {
          g_GlobalMP3DecoderInitialized = g_GlobalMP3DecoderInitialized | 1;
          sound_mp3_cpp_CMP3Decoder_ctor_FUN_005344f0(&g_CMP3DecoderInstance);
          crt_stdlib_c_atexit_FUN_005ff060(&g_CMP3DecoderDestructorNode);
        }
        sound_mp3_cpp_CMP3Decoder_openFile_FUN_00534550(&g_CMP3DecoderInstance,(char *)out_sample);
        (out_sample->sample_info).bit_depth = 0x10;
        (out_sample->sample_info).num_channels = g_CMP3DecoderInstance.num_channels;
        iVar3 = g_CMP3DecoderInstance.sample_rate;
        (out_sample->sample_info).sample_count = -1;
        (out_sample->sample_info).sample_rate = iVar3;
        sound_mp3_cpp_CMP3Decoder_free_FUN_005349e0(&g_CMP3DecoderInstance);
      }
      else {
        g_CurrentFilename = "..\\sound\\sndmain.cpp";
        g_CurrentLineNumber = 0x10d3;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Unknown sample file format extension: %s");
      }
LAB_005aa53c:
      sound_sndmain_cpp_CSfxSample_parseConfigFile_FUN_005a45c0(out_sample);
      if ((out_sample->sample_info).sample_count < 1) {
        g_CurrentFilename = "..\\sound\\sndmain.cpp";
        g_CurrentLineNumber = 0x10de;
        core_main_c_displayErrorAndQuit_FUN_00506f10("getSampleInfo - can't determine length for %s");
        return 1;
      }
      return 1;
    }
    file_handle = engine_dosio_c_getFile_FUN_00481a50
                            ("sound",(char *)out_sample,"rb");
    if (file_handle != (FILE *)0x0) {
      in_stack_0000000c = crt_stdio_c_ftell_FUN_00601560(file_handle);
      iVar3 = sound_sndmain_cpp_parseWavFile_FUN_005a3fe0(file_handle,&stack0x0000000c,out_sample);
      if (iVar3 != 0) {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\sound\\sndmain.cpp",0x10ba);
        goto LAB_005aa53c;
      }
    }
    if (file_handle != (FILE *)0x0) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\sound\\sndmain.cpp",0x10af);
      return 0;
    }
  }
  return 0;
}
