// Name: sound_sndmain.cpp_CSfxSample_freeSampleData_FUN_00523b70
// Address: 00523b70
// Address Range: [[00523b70, 00523b95]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSample_freeSampleData_FUN_00523b70(int param_1)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSample_freeSampleData_FUN_00523b70(int param_1)

{
  if (*(int *)(param_1 + 0x120) == 0) {
    return;
  }
  FUN_005638d0(*(int *)(param_1 + 0x120));
  *(uint *)(param_1 + 0x120) = 0;
  return;
}
