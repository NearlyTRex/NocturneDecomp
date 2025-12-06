// Name: sound_sndmain.cpp_startSfxTrackedDoublePosition_FUN_005a9620
// Address: 005a9620
// Address Range: [[005a9620, 005a9654]]
// Convention: __cdecl
// Signature: uint sound_sndmain.cpp_startSfxTrackedDoublePosition_FUN_005a9620(char * filename, CVector3d * position_source_ptr)

#include "nocturne.h"

uint __cdecl
sound_sndmain_cpp_startSfxTrackedDoublePosition_FUN_005a9620
          (char *filename,CVector3d *position_source_ptr)

{
  uint uVar1;
  CVector3d *in_stack_00000010;
  
  sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
  sound_sndmain_cpp_clearNextSfxFlagBits_FUN_005a8bb0(1);
  sound_sndmain_cpp_setNextSfxTrackedDoublePosition_FUN_005a8970(in_stack_00000010);
  uVar1 = sound_sndmain_cpp_startSfx_FUN_005a8e90((char *)in_stack_00000010);
  sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  return uVar1;
}
