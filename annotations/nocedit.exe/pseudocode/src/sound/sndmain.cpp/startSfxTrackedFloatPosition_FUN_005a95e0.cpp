// Name: sound_sndmain.cpp_startSfxTrackedFloatPosition_FUN_005a95e0
// Address: 005a95e0
// Address Range: [[005a95e0, 005a9614]]
// Convention: __cdecl
// Signature: uint sound_sndmain.cpp_startSfxTrackedFloatPosition_FUN_005a95e0(char * filename, CVector3f * position_source_ptr)

#include "nocturne.h"

uint __cdecl
sound_sndmain_cpp_startSfxTrackedFloatPosition_FUN_005a95e0
          (char *filename,CVector3f *position_source_ptr)

{
  uint uVar1;
  CVector3f *in_stack_00000010;
  
  sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
  sound_sndmain_cpp_clearNextSfxFlagBits_FUN_005a8bb0(1);
  sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_005a8940(in_stack_00000010);
  uVar1 = sound_sndmain_cpp_startSfx_FUN_005a8e90((char *)in_stack_00000010);
  sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  return uVar1;
}
