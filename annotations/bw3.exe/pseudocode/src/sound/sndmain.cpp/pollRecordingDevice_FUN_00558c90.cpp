// Name: sound_sndmain.cpp_pollRecordingDevice_FUN_00558c90
// Address: 00558c90
// Address Range: [[00558c90, 00558cd3]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_pollRecordingDevice_FUN_00558c90(short *output_buffer,int num_samples)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_pollRecordingDevice_FUN_00558c90(short *output_buffer,int num_samples)

{
  int iVar1;
  
  sound_sndmain_cpp_lockSound_FUN_00558e90();
  iVar1 = sound_sndmain_cpp_isRecordingStarted_FUN_00558b00();
  if ((iVar1 != 0) && (_DAT_02cf3c68 != (int *)0x0)) {
    iVar1 = (**(code **)(*_DAT_02cf3c68 + 0x10))(_DAT_02cf3c68,output_buffer,num_samples);
    sound_sndmain_cpp_FUN_00556fd0();
    return iVar1;
  }
  sound_sndmain_cpp_FUN_00556fd0();
  return -1;
}
