// Name: sound_snddx.cpp_CDirectSoundDevice_freeSample_FUN_00555ff0
// Address: 00555ff0
// Address Range: [[00555ff0, 0055604a]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_freeSample_FUN_00555ff0(CDirectSoundDevice *this_ptr,int buffer_id)

#include "nocturne.h"

void __cdecl sound_snddx_cpp_CDirectSoundDevice_freeSample_FUN_00555ff0(CDirectSoundDevice *this_ptr,int buffer_id)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)(buffer_id * 0x18 + 0x264a5f4);
  piVar1 = (int *)*piVar2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *piVar2 = 0;
  }
  *(uint *)(buffer_id * 0x18 + 0x264a5fc) = 0;
  *(uint *)(buffer_id * 0x18 + 0x264a600) = 0;
  *(uint *)(buffer_id * 0x18 + 0x264a604) = 0;
  *(uint *)(buffer_id * 0x18 + 0x264a608) = 0;
  return;
}
