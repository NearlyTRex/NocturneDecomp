// Name: core_frankgen.cpp_SoundPushPlayPopAgain_FUN_004d1f20
// Address: 004d1f20
// Address Range: [[004d1f20, 004d1f6b]]
// Convention: unknown
// Signature: undefined core_frankgen.cpp_SoundPushPlayPopAgain_FUN_004d1f20()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_other_frankgen.cpp_SoundPushPlayPopAgain(uint param_1,
   uint param_2, uint param_3) */

void core_frankgen_cpp_SoundPushPlayPopAgain_FUN_004d1f20(void)

{
  int in_stack_00000004;
  float in_stack_00000008;
  char *in_stack_00000014;
  
  if ((_DAT_02d7b7f0 <= in_stack_00000008) &&
     (in_stack_00000008 < *(float *)(in_stack_00000004 + 0x15c))) {
    sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
    sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_005a8940
              ((CVector3f *)((int)in_stack_00000008 + 0x490));
    sound_sndmain_cpp_startSfx_FUN_005a8e90(in_stack_00000014);
    sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    return;
  }
  return;
}
