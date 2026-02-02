// Name: core_sound.cpp_CSound_getSoundDuration_FUN_005b3ba0
// Address: 005b3ba0
// Address Range: [[005b3ba0, 005b3c51]]
// Convention: __cdecl
// Signature: float __cdecl core_sound_cpp_CSound_getSoundDuration_FUN_005b3ba0(CSound *this_ptr,char *sound_name)

#include "nocturne.h"

float __cdecl core_sound_cpp_CSound_getSoundDuration_FUN_005b3ba0(CSound *this_ptr,char *sound_name)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  double dVar4;
  CSampleInfo *in_stack_fffffea0;
  
  sound_sndmain_cpp_CSfxSample_init_FUN_005a8480((CSfxSample *)&stack0xfffffea0);
  pcVar3 = &stack0xfffffea0;
  cVar1 = *sound_name;
  while ((((cVar1 != '\0' && (cVar1 = *sound_name, cVar1 != '@')) && (cVar1 != '*')) &&
         ((g_CharacterClassificationTable[(byte)(cVar1 + 1)] & 2) == 0))) {
    cVar1 = *sound_name;
    sound_name = sound_name + 1;
    *pcVar3 = cVar1;
    cVar1 = *sound_name;
    pcVar3 = pcVar3 + 1;
  }
  *pcVar3 = '\0';
  iVar2 = sound_sndmain_cpp_getSampleInfo_FUN_005aa3f0((CSfxSample *)&stack0xfffffea0);
  if (iVar2 == 0) {
    return -1.0;
  }
  dVar4 = sound_sndmain_cpp_CSampleInfo_getSampleDuration_FUN_005a84d0(in_stack_fffffea0);
  return (float)dVar4;
}
