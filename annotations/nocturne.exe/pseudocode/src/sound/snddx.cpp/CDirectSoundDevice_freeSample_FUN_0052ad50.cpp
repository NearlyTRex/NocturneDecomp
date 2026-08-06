// Name: sound_snddx.cpp_CDirectSoundDevice_freeSample_FUN_0052ad50
// Address: 0052ad50
// Address Range: [[0052ad50, 0052adb1]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_freeSample_FUN_0052ad50(CDirectSoundDevice *this_ptr,int buffer_id)

#include "nocturne.h"

void __cdecl sound_snddx_cpp_CDirectSoundDevice_freeSample_FUN_0052ad50(CDirectSoundDevice *this_ptr,int buffer_id)

{
  int *piVar1;
  
  if (((buffer_id < 1) || (0x18 < buffer_id)) || (*(int *)(&DAT_02dc9244 + buffer_id * 4) == 0)) {
    g_CurrentFilename = "..\\sound\\snddx.cpp";
    g_CurrentLineNumber = 673;
    core_main_c_displayErrorAndQuit_FUN_004c8440("DirectSoundDevice::freeSample - Invalid handle: %d");
  }
  piVar1 = *(int **)(&DAT_02dc9244 + buffer_id * 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(int *)(&DAT_02dc9244 + buffer_id * 4) = 0;
    return;
  }
  return;
}
