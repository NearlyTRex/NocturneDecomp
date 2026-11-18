// Name: sound_sndmain.cpp_setMemoryBudget_FUN_00527930
// Address: 00527930
// Address Range: [[00527930, 0052794c]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setMemoryBudget_FUN_00527930(int min_bytes,int max_bytes)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setMemoryBudget_FUN_00527930(int min_bytes,int max_bytes)

{
  g_MinimumSoundMemoryBudget = min_bytes;
  g_MaximumSoundMemoryBudget = max_bytes;
  sound_sndmain_cpp_ensureSoundMemoryAvailable_FUN_00521ca0(0);
  return;
}
