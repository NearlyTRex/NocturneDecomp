// Name: sound_sndmain.cpp_setMemoryBudget_FUN_00551930
// Address: 00551930
// Address Range: [[00551930, 0055194c]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setMemoryBudget_FUN_00551930(int min_bytes,int max_bytes)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setMemoryBudget_FUN_00551930(int min_bytes,int max_bytes)

{
  g_INT_0061bcbc = min_bytes;
  g_INT_0061bcc0 = max_bytes;
  sound_sndmain_cpp_ensureSoundMemoryAvailable_FUN_0054b960(0);
  return;
}
