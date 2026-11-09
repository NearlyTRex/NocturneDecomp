// Name: sound_sndmain.cpp_setMemoryBudget_FUN_005574c0
// Address: 005574c0
// Address Range: [[005574c0, 005574dc]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setMemoryBudget_FUN_005574c0(int min_bytes,int max_bytes)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setMemoryBudget_FUN_005574c0(int min_bytes,int max_bytes)

{
  _DAT_00604248 = min_bytes;
  DAT_0060424c = max_bytes;
  sound_sndmain_cpp_FUN_005514c0(0);
  return;
}
