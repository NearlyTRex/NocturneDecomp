// Name: sound_sndmain.cpp_CSfxSample_releaseSoundBuffer_FUN_00523cb0
// Address: 00523cb0
// Address Range: [[00523cb0, 00523d08]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_00523cb0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_CSfxSample_releaseSoundBuffer_FUN_00523cb0(int param_1)

{
  if (*(int *)(param_1 + 0x154) != 0) {
    if ((*(int *)(param_1 + 0x130) != 0) && (_DAT_02dc8318 != (int *)0x0)) {
      (**(code **)(*_DAT_02dc8318 + 0x38))
                (_DAT_02dc8318,*(int *)(param_1 + 0x130),*(uint *)(param_1 + 0x150),
                 *(uint *)(param_1 + 0x154),param_1);
    }
    *(uint *)(param_1 + 0x154) = 0;
    *(uint *)(param_1 + 0x150) = 0;
  }
  return;
}
