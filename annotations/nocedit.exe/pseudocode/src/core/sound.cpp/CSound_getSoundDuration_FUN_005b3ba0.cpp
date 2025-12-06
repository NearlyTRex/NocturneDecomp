// Name: core_sound.cpp_CSound_getSoundDuration_FUN_005b3ba0
// Address: 005b3ba0
// Address Range: [[005b3ba0, 005b3c51]]
// Convention: __cdecl
// Signature: float core_sound.cpp_CSound_getSoundDuration_FUN_005b3ba0(CSound * this_ptr, char * sound_name)

#include "nocturne.h"

float __cdecl core_sound_cpp_CSound_getSoundDuration_FUN_005b3ba0(CSound *this_ptr,char *sound_name)

{
  char cVar1;
  int iVar2;
  byte **ppuVar3;
  BADSPACEBASE *in_ESP;
  double dVar4;
  byte *puStack_15c;
  CSampleInfo *in_stack_fffffea8;
  
  sound_sndmain_cpp_CSfxSample_init_FUN_005a8480((CSfxSample *)&stack0xfffffea0);
  ppuVar3 = &puStack_15c;
  cVar1 = *sound_name;
  while ((((cVar1 != '\0' && (cVar1 = *sound_name, cVar1 != '@')) && (cVar1 != '*')) &&
         ((g_CharacterClassificationTable[(byte)(cVar1 + 1)] & 2U) == 0))) {
    cVar1 = *sound_name;
    sound_name = sound_name + 1;
    *(char *)ppuVar3 = cVar1;
    cVar1 = *sound_name;
    ppuVar3 = (byte **)((int)ppuVar3 + 1);
  }
  *(char *)ppuVar3 = '\0';
  iVar2 = sound_sndmain_cpp_getSampleInfo_FUN_005aa3f0((CSfxSample *)&puStack_15c);
  puStack_15c = &stack0xfffffea8;
  if (iVar2 == 0) {
    return -1.0;
  }
  dVar4 = sound_sndmain_cpp_CSampleInfo_getSampleDuration_FUN_005a84d0(in_stack_fffffea8);
  return (float)dVar4;
}
