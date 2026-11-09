// Name: sound_sndwav.cpp_FUN_00558ace
// Address: 00558ace
// Address Range: [[00558ace, 00558b16]]
// Convention: unknown
// Signature: undefined * sound_sndwav_cpp_FUN_00558ace(undefined4 param_1,UINT_PTR param_2)

#include "nocturne.h"

byte * sound_sndwav_cpp_FUN_00558ace(uint param_1,UINT_PTR param_2)

{
  int iVar1;
  MMRESULT MVar2;
  
  iVar1 = sound_sndwav_cpp_CWavInDevice_close_FUN_00558240((CWavInDevice *)&DAT_0264b280);
  if (iVar1 == 0) {
    return (byte *)0x0;
  }
  MVar2 = waveInGetDevCapsA(param_2,(LPWAVEINCAPSA)&stack0xffffffd4,0x30);
  if (MVar2 != 0) {
    return (byte *)0x0;
  }
  DAT_0061bf88 = param_2;
  return &DAT_0264b280;
}
