// Name: core_frankgen.cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004aca40
// Address: 004aca40
// Address Range: [[004aca40, 004aca8b]]
// Convention: __cdecl
// Signature: void __cdecl core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004aca40(CFrankenstienMachine *this_ptr,float trigger_frame,char *sfx_filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_frankgen_cpp_CFrankenstienMachine_playSfxAtFrame_FUN_004aca40(CFrankenstienMachine *this_ptr,float trigger_frame,char *sfx_filename)

{
  if ((_DAT_01cb0620 <= trigger_frame) && (trigger_frame < this_ptr->master_frame)) {
    sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
    sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_00550170(&this_ptr->anchor_world_position);
    sound_sndmain_cpp_FUN_005506b0(sfx_filename);
    sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
    return;
  }
  return;
}
