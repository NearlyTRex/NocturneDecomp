// Name: sound_snddx.cpp_CDirectSoundDevice_unlockSample_FUN_0052ae90
// Address: 0052ae90
// Address Range: [[0052ae90, 0052af4f]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_unlockSample_FUN_0052ae90(CDirectSoundDevice *this_ptr,int buffer_id)

#include "nocturne.h"

void __cdecl sound_snddx_cpp_CDirectSoundDevice_unlockSample_FUN_0052ae90(CDirectSoundDevice *this_ptr,int buffer_id)

{
  uint error_code;
  char *pcVar1;
  int in_stack_00000014;
  int *piStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  
  if (((buffer_id < 1) || (0x18 < buffer_id)) || (*(int *)(&DAT_02dc9244 + buffer_id * 4) == 0)) {
    g_CurrentFilename = "..\\sound\\snddx.cpp";
    g_CurrentLineNumber = 694;
    uStack_1ac = 0x52aed2;
    core_main_c_displayErrorAndQuit_FUN_004c8440("DirectSoundDevice::unlockSample - Can't unlock invalid handle: %d");
  }
  uStack_1ac = *(uint *)(in_stack_00000014 + 0x158);
  uStack_1b0 = *(uint *)(in_stack_00000014 + 0x160);
  piStack_1b4 = *(int **)(&DAT_02dc9244 + buffer_id * 4);
  error_code = (**(code **)(*piStack_1b4 + 0x4c))();
  if (error_code != 0) {
    pcVar1 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(error_code);
    _sprintf((char *)&piStack_1b4,"DirectSux: Unable to %s.  (%s)",
               "Unlock hw sample buffer",pcVar1);
    sound_sndmain_cpp_logSoundError_FUN_00529980((char *)&piStack_1b4);
    return;
  }
  return;
}
