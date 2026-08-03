// Name: sound_snddx.cpp_CDirectSoundDevice_freeSample_FUN_0052ad50
// Address: 0052ad50
// Address Range: [[0052ad50, 0052adb1]]
// Convention: unknown
// Signature: void sound_snddx_cpp_CDirectSoundDevice_freeSample_FUN_0052ad50(undefined4 param_1,int param_2)

#include "nocturne.h"

void sound_snddx_cpp_CDirectSoundDevice_freeSample_FUN_0052ad50(uint param_1,int param_2)

{
  int *piVar1;
  
  if (((param_2 < 1) || (0x18 < param_2)) || (*(int *)(&DAT_02dc9244 + param_2 * 4) == 0)) {
    g_CHAR_PTR_01cc4800 = "..\\sound\\snddx.cpp";
    g_INT_01cc4804 = 0x2a1;
    core_main_c_FUN_004c8440("DirectSoundDevice::freeSample - Invalid handle: %d",param_2);
  }
  piVar1 = *(int **)(&DAT_02dc9244 + param_2 * 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(int *)(&DAT_02dc9244 + param_2 * 4) = 0;
    return;
  }
  return;
}
