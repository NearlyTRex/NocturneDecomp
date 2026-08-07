// Name: core_sound.cpp_CSound_FUN_0052ebc0
// Address: 0052ebc0
// Address Range: [[0052ebc0, 0052ec71]]
// Convention: __cdecl
// Signature: float __cdecl core_sound_cpp_CSound_FUN_0052ebc0(CSound *this_ptr,char *param_2)

#include "nocturne.h"

float __cdecl core_sound_cpp_CSound_FUN_0052ebc0(CSound *this_ptr,char *param_2)

{
  char cVar1;
  int iVar2;
  CSampleInfo *pCVar3;
  double dVar4;
  CSampleInfo local_138;
  
  sound_sndmain_cpp_CSfxSample_init_FUN_00525b70((CSfxSample *)&local_138);
  pCVar3 = &local_138;
  cVar1 = *param_2;
  while ((((cVar1 != '\0' && (cVar1 = *param_2, cVar1 != '@')) && (cVar1 != '*')) &&
         ((g_CharacterClassificationTable[(byte)(cVar1 + 1)] & 2) == 0))) {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    pCVar3->name[0] = cVar1;
    cVar1 = *param_2;
    pCVar3 = (CSampleInfo *)(pCVar3->name + 1);
  }
  pCVar3->name[0] = '\0';
  iVar2 = sound_sndmain_cpp_getSampleInfo_FUN_005279e0((CSfxSample *)&local_138);
  if (iVar2 == 0) {
    return -1.0;
  }
  dVar4 = sound_sndmain_cpp_CSampleInfo_getSampleDuration_FUN_00525bc0(&local_138);
  return (float)dVar4;
}
