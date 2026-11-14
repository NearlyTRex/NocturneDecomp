// Name: sound_sndwav.cpp_getWavInDevice_FUN_00558ad0
// Address: 00558ad0
// Address Range: [[00558ad0, 00558b16]]
// Convention: unknown
// Signature: undefined * sound_sndwav_cpp_getWavInDevice_FUN_00558ad0(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

byte * sound_sndwav_cpp_getWavInDevice_FUN_00558ad0(void)

{
  int iVar1;
  MMRESULT MVar2;
  UINT_PTR in_stack_00000008;
  
  iVar1 = sound_sndwav_cpp_CWavInDevice_close_FUN_00558240((CWavInDevice *)&DAT_0264b280);
  if (iVar1 == 0) {
    return (byte *)0x0;
  }
  MVar2 = waveInGetDevCapsA(in_stack_00000008,(LPWAVEINCAPSA)&stack0xffffffd4,0x30);
  if (MVar2 != 0) {
    return (byte *)0x0;
  }
  DAT_0061bf88 = in_stack_00000008;
  return &DAT_0264b280;
}
