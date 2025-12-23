// Name: sound_sndmain.cpp_testSoundFile_FUN_005ad3b0
// Address: 005ad3b0
// Address Range: [[005ad3b0, 005ad5b8]]
// Convention: __cdecl
// Signature: char * sound_sndmain.cpp_testSoundFile_FUN_005ad3b0(char * sample_name)

#include "nocturne.h"

char * __cdecl sound_sndmain_cpp_testSoundFile_FUN_005ad3b0(char *sample_name)

{
  char cVar1;
  int iVar2;
  uint sfx_handle;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  char *pcVar4;
  double dVar5;
  uint output_format;
  uint in_stack_fffffe94;
  float fStack_78;
  float fStack_14;
  
  sound_sndmain_cpp_CSfxSample_init_FUN_005a8480((CSfxSample *)&stack0xfffffe90);
  pcVar4 = &stack0xfffffe74;
  pcVar3 = sample_name;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  iVar2 = sound_sndmain_cpp_getSampleInfo_FUN_005aa3f0((CSfxSample *)&stack0xfffffe74);
  if (iVar2 == 0) {
    crt_stdio_c_sprintf_FUN_005fdbd0(g_SoundTestErrorBuffer,"Can't get sample info for %s");
    pcVar3 = g_SoundTestErrorBuffer;
  }
  else if ((int)fStack_78 < 1) {
    crt_stdio_c_sprintf_FUN_005fdbd0(g_SoundTestErrorBuffer,"Sample %s has unknown or invalid length");
    pcVar3 = g_SoundTestErrorBuffer;
  }
  else {
    sound_sndmain_cpp_set3DListenerPos_FUN_005aa020(0.0,0.0,0.0);
    sound_sndmain_cpp_set3DListenerOrient_FUN_005aa0a0(1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0);
    sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
    sound_sndmain_cpp_setNextSfxStaticPosition_FUN_005a88e0(0.0,0.0,20.0);
    sound_sndmain_cpp_setNextSfxBaseFrequency_FUN_005a8a80(10.0);
    sfx_handle = sound_sndmain_cpp_startSfx_FUN_005a8e90(sample_name);
    sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    if (sfx_handle == 0) {
      crt_stdio_c_sprintf_FUN_005fdbd0(g_SoundTestErrorBuffer,"Error playing %s");
      pcVar3 = g_SoundTestErrorBuffer;
    }
    else {
      dVar5 = sound_sndmain_cpp_getSfxPlaybackPosition_FUN_005a9720(0,in_stack_fffffe94);
      fStack_14 = (float)((ulonglong)dVar5 >> 0x20);
      if (0.0 <= (float)dVar5) {
        while (iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(sfx_handle), iVar2 != 0) {
          output_format = 0x5ad54b;
          iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,1);
          if (iVar2 != 0) {
            return "Canceled";
          }
          dVar5 = sound_sndmain_cpp_getSfxPlaybackPosition_FUN_005a9720(0,output_format);
          if ((float)dVar5 < fStack_14) break;
          wincore_winrun_cpp_sleep_FUN_005f40e0(0.05);
          fStack_14 = (float)dVar5;
        }
      }
      pcVar3 = (char *)0x0;
    }
  }
  return pcVar3;
}
