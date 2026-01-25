// Name: core_manpuz.cpp_FUN_0050a4f0
// Address: 0050a4f0
// Address Range: [[0050a4f0, 0050a60e]]
// Convention: __cdecl
// Signature: int core_manpuz.cpp_FUN_0050a4f0(void * ptr)

#include "nocturne.h"

int __cdecl core_manpuz_cpp_FUN_0050a4f0(void *ptr)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float in_stack_00000008;
  float in_stack_0000000c;
  uint *in_stack_00000010;
  char *in_stack_00000014;
  float *in_stack_00000018;
  
  iVar4 = 0;
  if (in_stack_00000008 - *(float *)ptr < -in_stack_0000000c) {
    fVar1 = *(float *)ptr - in_stack_0000000c;
  }
  else {
    if (in_stack_00000008 - *(float *)ptr <= in_stack_0000000c) {
      iVar4 = 1;
      *(float *)ptr = in_stack_00000008;
      goto LAB_0050a537;
    }
    fVar1 = *(float *)ptr + in_stack_0000000c;
  }
  *(float *)ptr = fVar1;
LAB_0050a537:
  fVar1 = *(float *)ptr * (float)0.0039215686274509803;
  if (fVar1 <= 0.0) {
    sound_sndmain_cpp_killSfx_FUN_005a9c40(*in_stack_00000010);
    return iVar4;
  }
  iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*in_stack_00000010);
  if (iVar2 != 0) {
    sound_sndmain_cpp_setSfxPosition_FUN_005a9820
              (*in_stack_00000010,(double)*in_stack_00000018,(double)in_stack_00000018[1],
               (double)in_stack_00000018[2]);
    sound_sndmain_cpp_setSfxVolume_FUN_005a9ae0(*in_stack_00000010,fVar1);
    return iVar4;
  }
  sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
  sound_sndmain_cpp_setNextSfxVolume_FUN_005a8a60(fVar1);
  sound_sndmain_cpp_setNextSfxStaticPosition_FUN_005a88e0
            ((double)*in_stack_00000018,(double)in_stack_00000018[1],(double)in_stack_00000018[2]);
  uVar3 = sound_sndmain_cpp_startSfx_FUN_005a8e90(in_stack_00000014);
  *in_stack_00000010 = uVar3;
  sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  return iVar4;
}
