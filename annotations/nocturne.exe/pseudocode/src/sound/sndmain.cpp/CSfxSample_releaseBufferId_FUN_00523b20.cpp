// Name: sound_sndmain.cpp_CSfxSample_releaseBufferId_FUN_00523b20
// Address: 00523b20
// Address Range: [[00523b20, 00523b61]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSample_releaseBufferId_FUN_00523b20(CSfxSample *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_CSfxSample_releaseBufferId_FUN_00523b20(CSfxSample *this_ptr)

{
  if (this_ptr->loop_endpoints[2] != 0) {
    if (_DAT_02dc8318 != (int *)0x0) {
      (**(code **)(*_DAT_02dc8318 + 0x30))(_DAT_02dc8318,this_ptr->loop_endpoints[2]);
      this_ptr->loop_endpoints[2] = 0;
      return;
    }
    this_ptr->loop_endpoints[2] = 0;
  }
  return;
}
