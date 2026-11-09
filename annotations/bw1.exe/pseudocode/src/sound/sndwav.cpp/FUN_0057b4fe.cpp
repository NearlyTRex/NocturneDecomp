// Name: sound_sndwav.cpp_FUN_0057b4fe
// Address: 0057b4fe
// Address Range: [[0057b4fe, 0057b4ff]]
// Convention: unknown
// Signature: undefined * sound_sndwav_cpp_FUN_0057b4fe(undefined4 param_1,UINT_PTR param_2)

#include "nocturne.h"

byte * sound_sndwav_cpp_FUN_0057b4fe(uint param_1,UINT_PTR param_2)

{
  int iVar1;
  MMRESULT MVar2;
  
  iVar1 = sound_sndwav_cpp_CWavInDevice_close_FUN_0057ac70((CWavInDevice *)&DAT_02c82a50);
  if (iVar1 == 0) {
    return (byte *)0x0;
  }
  MVar2 = waveInGetDevCapsA(param_2,(LPWAVEINCAPSA)&stack0xffffffd4,0x30);
  if (MVar2 != 0) {
    return (byte *)0x0;
  }
  DAT_006235d8 = param_2;
  return &DAT_02c82a50;
}
