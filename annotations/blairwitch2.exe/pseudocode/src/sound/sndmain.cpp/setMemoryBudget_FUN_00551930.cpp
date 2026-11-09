// Name: sound_sndmain.cpp_setMemoryBudget_FUN_00551930
// Address: 00551930
// Address Range: [[00551930, 0055194c]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setMemoryBudget_FUN_00551930(int min_bytes,int max_bytes)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setMemoryBudget_FUN_00551930(int min_bytes,int max_bytes)

{
  _DAT_0061bcbc = min_bytes;
  DAT_0061bcc0 = max_bytes;
  sound_sndmain_cpp_FUN_0054b960(0);
  return;
}
