// Name: core_sound.cpp_FUN_0052eac0
// Address: 0052eac0
// Address Range: [[0052eac0, 0052eafe]]
// Convention: unknown
// Signature: undefined4 core_sound_cpp_FUN_0052eac0(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint core_sound_cpp_FUN_0052eac0(void)

{
  uint uVar1;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  float in_stack_00000010;
  
  sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
  sound_sndmain_cpp_setNextSfxDelay_FUN_00526210((double)in_stack_00000010);
  uVar1 = core_sound_cpp_playSfxInternal_FUN_0052d120(in_stack_00000008,in_stack_0000000c,0,0,0,0,1)
  ;
  sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
  return uVar1;
}
