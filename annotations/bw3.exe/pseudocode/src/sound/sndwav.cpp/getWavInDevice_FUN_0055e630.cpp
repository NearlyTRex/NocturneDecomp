// Name: sound_sndwav.cpp_getWavInDevice_FUN_0055e630
// Address: 0055e630
// Address Range: [[0055e630, 0055e676]]
// Convention: __cdecl
// Signature: CWavInDevice * __cdecl sound_sndwav_cpp_getWavInDevice_FUN_0055e630(UINT device_id)

#include "nocturne.h"

CWavInDevice * __cdecl sound_sndwav_cpp_getWavInDevice_FUN_0055e630(UINT device_id)

{
  int iVar1;
  MMRESULT MVar2;
  UINT_PTR in_stack_00000008;
  
  iVar1 = sound_sndwav_cpp_CWavInDevice_close_FUN_0055dda0((CWavInDevice *)&DAT_02cf567c);
  if (iVar1 == 0) {
    return (CWavInDevice *)0x0;
  }
  MVar2 = waveInGetDevCapsA(in_stack_00000008,(LPWAVEINCAPSA)&stack0xffffffd4,0x30);
  if (MVar2 != 0) {
    return (CWavInDevice *)0x0;
  }
  DAT_00604518 = in_stack_00000008;
  return (CWavInDevice *)&DAT_02cf567c;
}
