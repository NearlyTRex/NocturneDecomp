// Name: sound_sndwav.cpp_getWavInDevice_FUN_0057b500
// Address: 0057b500
// Address Range: [[0057b500, 0057b546]]
// Convention: __cdecl
// Signature: CWavInDevice * __cdecl sound_sndwav_cpp_getWavInDevice_FUN_0057b500(UINT device_id)

#include "nocturne.h"

CWavInDevice * __cdecl sound_sndwav_cpp_getWavInDevice_FUN_0057b500(UINT device_id)

{
  int iVar1;
  MMRESULT MVar2;
  UINT_PTR in_stack_00000008;
  
  iVar1 = sound_sndwav_cpp_CWavInDevice_close_FUN_0057ac70((CWavInDevice *)&DAT_02c82a50);
  if (iVar1 == 0) {
    return (CWavInDevice *)0x0;
  }
  MVar2 = waveInGetDevCapsA(in_stack_00000008,(LPWAVEINCAPSA)&stack0xffffffd4,0x30);
  if (MVar2 != 0) {
    return (CWavInDevice *)0x0;
  }
  DAT_006235d8 = in_stack_00000008;
  return (CWavInDevice *)&DAT_02c82a50;
}
