// Name: core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004c59f0
// Address: 004c59f0
// Address Range: [[004c59f0, 004c5a3b]]
// Convention: __cdecl
// Signature: void __cdecl core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004c59f0(CFrankenstienMachine *this_ptr,float trigger_frame,char *sfx_filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004c59f0(CFrankenstienMachine *this_ptr,float trigger_frame,char *sfx_filename)

{
  if ((_DAT_01cc90b0 <= trigger_frame) && (trigger_frame < this_ptr->master_frame)) {
    sound_sndmain_cpp_pushSfxOptions_FUN_00572ac0();
    sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_005727e0(&this_ptr->anchor_world_position);
    sound_sndmain_cpp_startSfx_FUN_00572d20(sfx_filename);
    sound_sndmain_cpp_popSfxOptions_FUN_00572b40();
    return;
  }
  return;
}
