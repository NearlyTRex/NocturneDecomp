// Name: sound_sndmain.cpp_setMemoryBudget_FUN_005aa340
// Address: 005aa340
// Address Range: [[005aa340, 005aa35c]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setMemoryBudget_FUN_005aa340(int min_bytes,int max_bytes)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setMemoryBudget_FUN_005aa340(int min_bytes,int max_bytes)

{
  g_MinimumSoundMemoryBudget = min_bytes;
  g_MaximumSoundMemoryBudget = max_bytes;
  sound_sndmain_cpp_ensureSoundMemoryAvailable_FUN_005a4450(0);
  return;
}
