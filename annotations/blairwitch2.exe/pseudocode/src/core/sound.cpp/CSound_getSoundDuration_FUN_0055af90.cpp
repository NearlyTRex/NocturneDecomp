// Name: core_sound.cpp_CSound_getSoundDuration_FUN_0055af90
// Address: 0055af90
// Address Range: [[0055af90, 0055b041]]
// Convention: __cdecl
// Signature: float __cdecl core_sound_cpp_CSound_getSoundDuration_FUN_0055af90(CSound *this_ptr,char *sound_name)

#include "nocturne.h"

float __cdecl core_sound_cpp_CSound_getSoundDuration_FUN_0055af90(CSound *this_ptr,char *sound_name)

{
  CSampleInfo CVar1;
  int iVar2;
  CSampleInfo *pCVar3;
  double dVar4;
  CSampleInfo local_160 [348];
  
  sound_sndmain_cpp_CSfxSample_init_FUN_0054fcd0((CSfxSample *)local_160);
  pCVar3 = local_160;
  CVar1 = (CSampleInfo)*sound_name;
  while ((((CVar1 != (CSampleInfo)0x0 &&
           (CVar1 = (CSampleInfo)*sound_name, CVar1 != (CSampleInfo)0x40)) &&
          (CVar1 != (CSampleInfo)0x2a)) && (((&DAT_0061ed94)[(byte)((char)CVar1 + 1)] & 2) == 0))) {
    CVar1 = (CSampleInfo)*sound_name;
    sound_name = sound_name + 1;
    *pCVar3 = CVar1;
    CVar1 = (CSampleInfo)*sound_name;
    pCVar3 = pCVar3 + 1;
  }
  *pCVar3 = (CSampleInfo)0x0;
  iVar2 = sound_sndmain_cpp_FUN_005519e0((CSfxSample *)local_160);
  if (iVar2 == 0) {
    return -1.0;
  }
  dVar4 = sound_sndmain_cpp_CSampleInfo_getSampleDuration_FUN_0054fd20(local_160);
  return (float)dVar4;
}
