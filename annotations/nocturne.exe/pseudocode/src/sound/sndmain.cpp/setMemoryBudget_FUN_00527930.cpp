// Name: sound_sndmain.cpp_setMemoryBudget_FUN_00527930
// Address: 00527930
// Address Range: [[00527930, 0052794c]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setMemoryBudget_FUN_00527930(int min_bytes,int max_bytes)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setMemoryBudget_FUN_00527930(int min_bytes,int max_bytes)

{
  _DAT_005bea90 = min_bytes;
  DAT_005bea94 = max_bytes;
  sound_sndmain_cpp_ensureSoundMemoryAvailable_FUN_00521ca0(0);
  return;
}
