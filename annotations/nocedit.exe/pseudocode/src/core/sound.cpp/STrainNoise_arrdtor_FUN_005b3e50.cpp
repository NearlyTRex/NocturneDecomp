// Name: core_sound.cpp_STrainNoise_arrdtor_FUN_005b3e50
// Address: 005b3e50
// Address Range: [[005b3e50, 005b3e64]]
// Convention: __cdecl
// Signature: STrainNoise * __cdecl core_sound_cpp_STrainNoise_arrdtor_FUN_005b3e50(STrainNoise *objs,uint flags)

#include "nocturne.h"

STrainNoise * __cdecl core_sound_cpp_STrainNoise_arrdtor_FUN_005b3e50(STrainNoise *objs,uint flags)

{
  STrainNoise *pSVar1;
  
  pSVar1 = (STrainNoise *)__arrfini(objs,10,&g_STrainNoiseTypeInfo);
  return pSVar1;
}
