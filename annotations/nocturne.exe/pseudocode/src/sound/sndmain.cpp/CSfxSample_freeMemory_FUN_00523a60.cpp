// Name: sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00523a60
// Address: 00523a60
// Address Range: [[00523a60, 00523b1e]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00523a60(undefined1 *param_1)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00523a60(byte *param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 300) != 0) {
    PTR_01cc4800 = "..\\sound\\sndmain.cpp";
    INT_01cc4804 = 0x70a;
    core_main_c_FUN_004c8440("SfxSample::freeMemory - freeing sample in use!");
  }
  sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_00523cb0(param_1);
  sound_sndmain_cpp_CSfxSample_freeSampleData_FUN_00523b70(param_1);
  sound_sndmain_cpp_CSfxSample_releaseBufferId_FUN_00523b20(param_1);
  if (*(int *)(param_1 + 0x144) != 0) {
    uVar1 = sound_mp3_cpp_CMP3Decoder_dtor_FUN_004e7dd0(*(int *)(param_1 + 0x144),0);
    FUN_00564494(uVar1);
  }
  *(uint *)(param_1 + 0x144) = 0;
  if (*(int *)(param_1 + 0x14c) != 0) {
    _fclose(*(int *)(param_1 + 0x14c));
    *(uint *)(param_1 + 0x14c) = 0;
  }
  *(uint *)(param_1 + 0x128) = 0;
  *(uint *)(param_1 + 0x138) = 0;
  *(uint *)(param_1 + 0x134) = 0xffffffff;
  *param_1 = 0;
  return;
}
