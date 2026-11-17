// Name: core_game.cpp_CGame_setGogglesActive_FUN_004d1760
// Address: 004d1760
// Address Range: [[004d1760, 004d17b2]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_setGogglesActive_FUN_004d1760(CGame *this_ptr,int active)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_setGogglesActive_FUN_004d1760(CGame *this_ptr,int active)

{
  if (active == this_ptr->goggles_active) {
    return;
  }
  if (active == 0) {
    this_ptr->goggles_active = 0;
    core_set_cpp_CDemonSet_setCameraView_FUN_0054f0d0
              (g_CDemonSetPtr,(int)g_CHero_PTR_ARRAY_01cd0c60[1]);
    return;
  }
  g_CHero_PTR_ARRAY_01cd0c60[1] = (CHero *)g_CDemonSetPtr->selected_camera_index;
  this_ptr->goggles_active = active;
  return;
}
