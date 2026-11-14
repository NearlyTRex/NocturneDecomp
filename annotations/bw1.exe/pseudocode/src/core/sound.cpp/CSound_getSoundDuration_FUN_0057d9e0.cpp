// Name: core_sound.cpp_CSound_getSoundDuration_FUN_0057d9e0
// Address: 0057d9e0
// Address Range: [[0057d9e0, 0057da91]]
// Convention: __cdecl
// Signature: float __cdecl core_sound_cpp_CSound_getSoundDuration_FUN_0057d9e0(CSound *this_ptr,char *sound_name)

#include "nocturne.h"

float __cdecl core_sound_cpp_CSound_getSoundDuration_FUN_0057d9e0(CSound *this_ptr,char *sound_name)

{
  char cVar1;
  int iVar2;
  CSampleInfo *pCVar3;
  double dVar4;
  CSampleInfo local_160;
  
  sound_sndmain_cpp_CSfxSample_init_FUN_00572340((CSfxSample *)&local_160);
  pCVar3 = &local_160;
  cVar1 = *sound_name;
  while ((((cVar1 != '\0' && (cVar1 = *sound_name, cVar1 != '@')) && (cVar1 != '*')) &&
         (((&DAT_00626114)[(byte)(cVar1 + 1)] & 2) == 0))) {
    cVar1 = *sound_name;
    sound_name = sound_name + 1;
    pCVar3->name[0] = cVar1;
    cVar1 = *sound_name;
    pCVar3 = (CSampleInfo *)(pCVar3->name + 1);
  }
  pCVar3->name[0] = '\0';
  iVar2 = sound_sndmain_cpp_getSampleInfo_FUN_00574410((CSfxSample *)&local_160);
  if (iVar2 == 0) {
    return -1.0;
  }
  dVar4 = sound_sndmain_cpp_CSampleInfo_getSampleDuration_FUN_00572390(&local_160);
  return (float)dVar4;
}
