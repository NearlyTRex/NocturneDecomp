// Name: sound_sndmain.cpp_CSfxSample_init_FUN_00525b70
// Address: 00525b70
// Address Range: [[00525b70, 00525bba]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_CSfxSample_init_FUN_00525b70(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_CSfxSample_init_FUN_00525b70(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  memset(param_1,0,0x128);
  fVar1 = (float)_DAT_005bea88;
  fVar2 = _DAT_02dbd370 * fVar1;
  fVar3 = 10000.0f * fVar1;
  *(float *)(param_1 + 0x114) = 20.0f * fVar1;
  *(float *)(param_1 + 0x118) = fVar2;
  *(float *)(param_1 + 0x11c) = fVar3;
  return param_1;
}
