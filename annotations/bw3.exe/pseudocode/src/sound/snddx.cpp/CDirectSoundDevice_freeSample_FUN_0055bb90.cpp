// Name: sound_snddx.cpp_CDirectSoundDevice_freeSample_FUN_0055bb90
// Address: 0055bb90
// Address Range: [[0055bb90, 0055bbea]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_freeSample_FUN_0055bb90(CDirectSoundDevice *this_ptr,int buffer_id)

#include "nocturne.h"

void __cdecl sound_snddx_cpp_CDirectSoundDevice_freeSample_FUN_0055bb90(CDirectSoundDevice *this_ptr,int buffer_id)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)(buffer_id * 0x18 + 0x2cf49f4);
  piVar1 = (int *)*piVar2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *piVar2 = 0;
  }
  *(uint *)(buffer_id * 0x18 + 0x2cf49fc) = 0;
  *(uint *)(buffer_id * 0x18 + 0x2cf4a00) = 0;
  *(uint *)(buffer_id * 0x18 + 0x2cf4a04) = 0;
  *(uint *)(buffer_id * 0x18 + 0x2cf4a08) = 0;
  return;
}
