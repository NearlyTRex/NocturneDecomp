// Name: core_game.cpp_CGame_setGogglesActive_FUN_004d1760
// Address: 004d1760
// Address Range: [[004d1760, 004d17b2]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_setGogglesActive_FUN_004d1760(CGame *this_ptr,int active)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_setGogglesActive_FUN_004d1760(CGame *this_ptr,int active)

{
  if (active == this_ptr->goggles_active) {
    return;
  }
  if (active == 0) {
    this_ptr->goggles_active = 0;
    core_set_cpp_CDemonSet_setCameraView_FUN_0054f0d0(g_CDemonSetPtr,_DAT_01cd0c64);
    return;
  }
  _DAT_01cd0c64 = g_CDemonSetPtr->selected_camera_index;
  this_ptr->goggles_active = active;
  return;
}
