// Name: core_sound.cpp_CSound_getSoundDuration_FUN_005b3ba0
// Address: 005b3ba0
// Address Range: [[005b3ba0, 005b3c51]]
// Convention: __cdecl
// Signature: float __cdecl core_sound_cpp_CSound_getSoundDuration_FUN_005b3ba0(CSound *this_ptr,char *sound_name)

#include "nocturne.h"

float __cdecl core_sound_cpp_CSound_getSoundDuration_FUN_005b3ba0(CSound *this_ptr,char *sound_name)

{
  char cVar2;
  int iVar2;
  CSampleInfo *pCVar3;
  double dVar4;
  CSampleInfo local_160;
  char cVar1;
  
  sound_sndmain_cpp_CSfxSample_init_FUN_005a8480((CSfxSample *)&local_160);
  pCVar3 = &local_160;
  cVar1 = *sound_name;
  while ((((cVar1 != '\0' && (cVar2 = *sound_name, cVar2 != '@')) && (cVar2 != '*')) &&
         ((g_CharacterClassificationTable[(byte)(cVar2 + 1)] & 2) == 0))) {
    cVar2 = *sound_name;
    sound_name = sound_name + 1;
    pCVar3->name[0] = cVar2;
    cVar1 = *sound_name;
    pCVar3 = (CSampleInfo *)(pCVar3->name + 1);
  }
  pCVar3->name[0] = '\0';
  iVar2 = sound_sndmain_cpp_getSampleInfo_FUN_005aa3f0((CSfxSample *)&local_160);
  if (iVar2 == 0) {
    return -1.0;
  }
  dVar4 = sound_sndmain_cpp_CSampleInfo_getSampleDuration_FUN_005a84d0(&local_160);
  return (float)dVar4;
}
