// Name: sound_sndmain.cpp_setMemoryBudget_FUN_005574c0
// Address: 005574c0
// Address Range: [[005574c0, 005574dc]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setMemoryBudget_FUN_005574c0(int min_bytes,int max_bytes)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setMemoryBudget_FUN_005574c0(int min_bytes,int max_bytes)

{
  g_MinimumSoundMemoryBudget = min_bytes;
  g_MaximumSoundMemoryBudget = max_bytes;
  sound_sndmain_cpp_ensureSoundMemoryAvailable_FUN_005514c0(0);
  return;
}
