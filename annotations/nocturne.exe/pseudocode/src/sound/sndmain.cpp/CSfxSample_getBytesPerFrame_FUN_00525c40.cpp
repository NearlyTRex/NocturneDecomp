// Name: sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_00525c40
// Address: 00525c40
// Address Range: [[00525c40, 00525c60]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_00525c40(int param_1)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_00525c40(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x104) * *(int *)(param_1 + 0x108);
  iVar2 = iVar1 >> 0x1f;
  return (int)((iVar1 + iVar2 * -8) - (uint)(iVar2 << 2 < 0)) >> 3;
}
