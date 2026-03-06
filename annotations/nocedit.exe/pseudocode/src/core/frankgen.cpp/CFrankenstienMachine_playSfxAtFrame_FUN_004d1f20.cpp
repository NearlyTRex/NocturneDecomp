// Name: core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004d1f20
// Address: 004d1f20
// Address Range: [[004d1f20, 004d1f6b]]
// Convention: __cdecl
// Signature: void __cdecl core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004d1f20(CFrankenstienMachine *this_ptr,float trigger_frame,char *sfx_filename)

#include "nocturne.h"

void __cdecl core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004d1f20(CFrankenstienMachine *this_ptr,float trigger_frame,char *sfx_filename)

{
  if ((FLOAT_02d7b7f0 <= trigger_frame) && (trigger_frame < this_ptr->master_frame)) {
    sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
    sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_005a8940(&this_ptr->anchor_world_position);
    sound_sndmain_cpp_startSfx_FUN_005a8e90(sfx_filename);
    sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    return;
  }
  return;
}
