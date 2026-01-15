// Name: core_manpuz.cpp_FUN_0050a4f0
// Address: 0050a4f0
// Address Range: [[0050a4f0, 0050a60e]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_0050a4f0()

#include "nocturne.h"

uint core_manpuz_cpp_FUN_0050a4f0(void)

{
  float volume;
  int iVar1;
  uint uVar2;
  uint uVar3;
  float *in_stack_00000004;
  float in_stack_00000008;
  float in_stack_0000000c;
  uint *in_stack_00000010;
  char *in_stack_00000014;
  float *in_stack_00000018;
  
  uVar3 = 0;
  if (in_stack_00000008 - *in_stack_00000004 < -in_stack_0000000c) {
    in_stack_0000000c = *in_stack_00000004 - in_stack_0000000c;
  }
  else {
    if (in_stack_00000008 - *in_stack_00000004 <= in_stack_0000000c) {
      uVar3 = 1;
      *in_stack_00000004 = in_stack_00000008;
      goto LAB_0050a537;
    }
    in_stack_0000000c = *in_stack_00000004 + in_stack_0000000c;
  }
  *in_stack_00000004 = in_stack_0000000c;
LAB_0050a537:
  volume = *in_stack_00000004 * (float)0.0039215686274509803;
  if (volume <= 0.0) {
    sound_sndmain_cpp_killSfx_FUN_005a9c40(*in_stack_00000010);
    return uVar3;
  }
  iVar1 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*in_stack_00000010);
  if (iVar1 != 0) {
    sound_sndmain_cpp_setSfxPosition_FUN_005a9820
              (*in_stack_00000010,(double)*in_stack_00000018,(double)in_stack_00000018[1],
               (double)in_stack_00000018[2]);
    sound_sndmain_cpp_setSfxVolume_FUN_005a9ae0(*in_stack_00000010,volume);
    return uVar3;
  }
  sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
  sound_sndmain_cpp_setNextSfxVolume_FUN_005a8a60(volume);
  sound_sndmain_cpp_setNextSfxStaticPosition_FUN_005a88e0
            ((double)*in_stack_00000018,(double)in_stack_00000018[1],(double)in_stack_00000018[2]);
  uVar2 = sound_sndmain_cpp_startSfx_FUN_005a8e90(in_stack_00000014);
  *in_stack_00000010 = uVar2;
  sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  return uVar3;
}
