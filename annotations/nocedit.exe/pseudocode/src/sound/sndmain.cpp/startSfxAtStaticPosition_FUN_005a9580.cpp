// Name: sound_sndmain.cpp_startSfxAtStaticPosition_FUN_005a9580
// Address: 005a9580
// Address Range: [[005a9580, 005a95d3]]
// Convention: __cdecl
// Signature: uint __cdecl sound_sndmain_cpp_startSfxAtStaticPosition_FUN_005a9580 (char *filename,double pos_x,double pos_y,double pos_z)

#include "nocturne.h"

uint __cdecl
sound_sndmain_cpp_startSfxAtStaticPosition_FUN_005a9580
          (char *filename,double pos_x,double pos_y,double pos_z)

{
  uint uVar1;
  
  sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
  sound_sndmain_cpp_clearNextSfxFlagBits_FUN_005a8bb0(1);
  sound_sndmain_cpp_setNextSfxStaticPosition_FUN_005a88e0(pos_x,pos_y,pos_z);
  uVar1 = sound_sndmain_cpp_startSfx_FUN_005a8e90(filename);
  sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  return uVar1;
}
