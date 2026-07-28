// Name: core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30
// Address: 00494e30
// Address Range: [[00494e30, 00494e7b]]
// Convention: __cdecl
// Signature: void __cdecl core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30(CFrankenstienMachine *this_ptr,float trigger_frame,char *sfx_filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_00494e30(CFrankenstienMachine *this_ptr,float trigger_frame,char *sfx_filename)

{
  if ((_DAT_01c71340 <= trigger_frame) && (trigger_frame < this_ptr->master_frame)) {
    sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
    sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_00525fc0(&this_ptr->anchor_world_position);
    sound_sndmain_cpp_startSfx_FUN_005265a0(sfx_filename);
    sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
    return;
  }
  return;
}
