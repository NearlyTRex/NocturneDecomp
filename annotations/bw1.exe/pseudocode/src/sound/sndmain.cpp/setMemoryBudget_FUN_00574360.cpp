// Name: sound_sndmain.cpp_setMemoryBudget_FUN_00574360
// Address: 00574360
// Address Range: [[00574360, 0057437c]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setMemoryBudget_FUN_00574360(int min_bytes,int max_bytes)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setMemoryBudget_FUN_00574360(int min_bytes,int max_bytes)

{
  _DAT_0062330c = min_bytes;
  DAT_00623310 = max_bytes;
  sound_sndmain_cpp_ensureSoundMemoryAvailable_FUN_0056dfd0(0);
  return;
}
