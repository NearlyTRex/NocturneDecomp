// Name: core_frankgen.cpp_SoundPushPlayPopAgain_FUN_004d1f20
// Address: 004d1f20
// Address Range: [[004d1f20, 004d1f6b]]
// Convention: __cdecl
// Signature: void __cdecl core_frankgen_cpp_SoundPushPlayPopAgain_FUN_004d1f20(void)

#include "nocturne.h"

void __cdecl core_frankgen_cpp_SoundPushPlayPopAgain_FUN_004d1f20(void)

{
  int in_stack_00000004;
  float in_stack_00000008;
  char *in_stack_0000000c;
  
  if ((FLOAT_02d7b7f0 <= in_stack_00000008) &&
     (in_stack_00000008 < *(float *)(in_stack_00000004 + 0x15c))) {
    sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
    sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_005a8940
              ((CVector3f *)(in_stack_00000004 + 0x490));
    sound_sndmain_cpp_startSfx_FUN_005a8e90(in_stack_0000000c);
    sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    return;
  }
  return;
}
