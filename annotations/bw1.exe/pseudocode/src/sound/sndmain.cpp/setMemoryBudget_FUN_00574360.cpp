// Name: sound_sndmain.cpp_setMemoryBudget_FUN_00574360
// Address: 00574360
// Address Range: [[00574360, 0057437c]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setMemoryBudget_FUN_00574360(int min_bytes,int max_bytes)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setMemoryBudget_FUN_00574360(int min_bytes,int max_bytes)

{
  g_INT_0062330c = min_bytes;
  g_INT_00623310 = max_bytes;
  sound_sndmain_cpp_ensureSoundMemoryAvailable_FUN_0056dfd0(0);
  return;
}
