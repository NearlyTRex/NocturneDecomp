// Name: sound_sndmain.cpp_CSfxSample_seek_FUN_00523d10
// Address: 00523d10
// Address Range: [[00523d10, 00523e93]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSample_seek_FUN_00523d10(int param_1,int param_2,int param_3)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSample_seek_FUN_00523d10(int param_1,int param_2,int param_3)

{
  double dVar1;
  int iVar2;
  float10 fVar3;
  
  if (*(int *)(param_1 + 0x134) < 0) {
    PTR_01cc4800 = "..\\sound\\sndmain.cpp";
    INT_01cc4804 = 0x791;
    core_main_c_FUN_004c8440();
  }
  dVar1 = (double)sound_sndmain_cpp_CSfxSample_normalizePlaybackPos_FUN_00525de0
                            (param_1,(double)param_2,0);
  fVar3 = (float10)round((float10)dVar1);
  *(int *)(param_1 + 0x13c) = (int)ROUND(fVar3);
  if (*(int *)(param_1 + 0x13c) < 0) {
    *(uint *)(param_1 + 0x13c) = 0;
  }
  if ((param_3 < 0) || (*(int *)(param_1 + 0x138) <= param_3)) {
    PTR_01cc4800 = "..\\sound\\sndmain.cpp";
    INT_01cc4804 = 0x79c;
    core_main_c_FUN_004c8440();
  }
  *(int *)(param_1 + 0x140) = param_3;
  if (*(int *)(param_1 + 0x144) == 0) {
    if (*(int *)(param_1 + 0x14c) == 0) {
      PTR_01cc4800 = "..\\sound\\sndmain.cpp";
      INT_01cc4804 = 0x7b0;
      core_main_c_FUN_004c8440("SfxSample::seek - no MP3 and no wavFile for sample '%s'",param_1);
      return;
    }
    iVar2 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_00525c40(param_1,0);
    _fseek(*(uint *)(param_1 + 0x14c),
               iVar2 * *(int *)(param_1 + 0x13c) + *(int *)(param_1 + 0x148));
  }
  else {
    iVar2 = sound_mp3_cpp_CMP3Decoder_seek_FUN_004e8410
                      (*(int *)(param_1 + 0x144),*(uint *)(param_1 + 0x13c));
    if (iVar2 == 0) {
      PTR_01cc4800 = "..\\sound\\sndmain.cpp";
      INT_01cc4804 = 0x7a5;
      core_main_c_FUN_004c8440
                ("Error seeking %s to %d",param_1,*(uint *)(param_1 + 0x13c));
      return;
    }
  }
  return;
}
