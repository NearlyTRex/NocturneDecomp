// Name: sound_sndwav.cpp_FUN_0055e62e
// Address: 0055e62e
// Address Range: [[0055e62e, 0055e62f]]
// Convention: unknown
// Signature: undefined * sound_sndwav_cpp_FUN_0055e62e(undefined4 param_1,UINT_PTR param_2)

#include "nocturne.h"

byte * sound_sndwav_cpp_FUN_0055e62e(uint param_1,UINT_PTR param_2)

{
  int iVar1;
  MMRESULT MVar2;
  
  iVar1 = sound_sndwav_cpp_CWavInDevice_close_FUN_0055dda0((CWavInDevice *)&DAT_02cf567c);
  if (iVar1 == 0) {
    return (byte *)0x0;
  }
  MVar2 = waveInGetDevCapsA(param_2,(LPWAVEINCAPSA)&stack0xffffffd4,0x30);
  if (MVar2 != 0) {
    return (byte *)0x0;
  }
  DAT_00604518 = param_2;
  return &DAT_02cf567c;
}
