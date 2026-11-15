// Name: sound_snddx.cpp_CDirectSoundDevice_freeSample_FUN_00578a20
// Address: 00578a20
// Address Range: [[00578a20, 00578a7a]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_freeSample_FUN_00578a20(CDirectSoundDevice *this_ptr,int buffer_id)

#include "nocturne.h"

void __cdecl sound_snddx_cpp_CDirectSoundDevice_freeSample_FUN_00578a20(CDirectSoundDevice *this_ptr,int buffer_id)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)(buffer_id * 0x18 + 0x2c81dc4);
  piVar1 = (int *)*piVar2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *piVar2 = 0;
  }
  *(uint *)(buffer_id * 0x18 + 0x2c81dcc) = 0;
  *(uint *)(buffer_id * 0x18 + 0x2c81dd0) = 0;
  *(uint *)(buffer_id * 0x18 + 0x2c81dd4) = 0;
  *(uint *)(buffer_id * 0x18 + 0x2c81dd8) = 0;
  return;
}
