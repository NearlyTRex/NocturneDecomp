// Name: sound_snddx.cpp_CDirectSoundDevice_unlockSample_FUN_0052ae90
// Address: 0052ae90
// Address Range: [[0052ae90, 0052af4f]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_unlockSample_FUN_0052ae90(CDirectSoundDevice *this_ptr,int buffer_id)

#include "nocturne.h"

void __cdecl sound_snddx_cpp_CDirectSoundDevice_unlockSample_FUN_0052ae90(CDirectSoundDevice *this_ptr,int buffer_id)

{
  uint error_code;
  int in_stack_00000014;
  int *piStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  char *pcStack_1a8;
  int iStack_1a4;
  
  if (((buffer_id < 1) || (0x18 < buffer_id)) || (*(int *)(&DAT_02dc9244 + buffer_id * 4) == 0)) {
    iStack_1a4 = buffer_id;
    pcStack_1a8 = "DirectSoundDevice::unlockSample - Can't unlock invalid handle: %d";
    g_CHAR_PTR_01cc4800 = "..\\sound\\snddx.cpp";
    g_INT_01cc4804 = 0x2b6;
    uStack_1ac = 0x52aed2;
    core_main_c_FUN_004c8440();
  }
  iStack_1a4 = *(uint *)(in_stack_00000014 + 0x15c);
  pcStack_1a8 = *(char **)(in_stack_00000014 + 0x164);
  uStack_1ac = *(uint *)(in_stack_00000014 + 0x158);
  uStack_1b0 = *(uint *)(in_stack_00000014 + 0x160);
  piStack_1b4 = *(int **)(&DAT_02dc9244 + buffer_id * 4);
  error_code = (**(code **)(*piStack_1b4 + 0x4c))();
  if (error_code != 0) {
    sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(error_code);
    _sprintf((char *)&piStack_1b4,"DirectSux: Unable to %s.  (%s)");
    sound_sndmain_cpp_FUN_00529980(&piStack_1b4);
    return;
  }
  return;
}
