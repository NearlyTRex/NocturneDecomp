// Name: core_game.cpp_CGame_setGogglesActive_FUN_004ba220
// Address: 004ba220
// Address Range: [[004ba220, 004ba272]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_setGogglesActive_FUN_004ba220(CGame *this_ptr,int active)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_setGogglesActive_FUN_004ba220(CGame *this_ptr,int active)

{
  if (active == this_ptr->goggles_active) {
    return;
  }
  if (active == 0) {
    this_ptr->goggles_active = 0;
    core_set_cpp_CDemonSet_setCameraView_FUN_00534890(g_CDemonSetPtr,_DAT_01d22c6c);
    return;
  }
  _DAT_01d22c6c = g_CDemonSetPtr->selected_camera_index;
  this_ptr->goggles_active = active;
  return;
}
