// Name: core_sound.cpp_freeTrainNoises_FUN_005b3e50
// Address: 005b3e50
// Address Range: [[005b3e50, 005b3e64]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_freeTrainNoises_FUN_005b3e50(STrainNoise **array)

#include "nocturne.h"

void __cdecl core_sound_cpp_freeTrainNoises_FUN_005b3e50(STrainNoise **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,10,&g_STrainNoiseTypeInfo);
  return;
}
