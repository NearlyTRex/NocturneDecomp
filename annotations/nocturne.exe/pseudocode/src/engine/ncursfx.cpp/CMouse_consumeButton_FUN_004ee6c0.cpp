// Name: engine_ncursfx.cpp_CMouse_consumeButton_FUN_004ee6c0
// Address: 004ee6c0
// Address Range: [[004ee6c0, 004ee713]]
// Convention: __cdecl
// Signature: int __cdecl engine_ncursfx_cpp_CMouse_consumeButton_FUN_004ee6c0(CMouse *this_ptr,uint button_mask,int use_skull_effect)

#include "nocturne.h"

int __cdecl engine_ncursfx_cpp_CMouse_consumeButton_FUN_004ee6c0(CMouse *this_ptr,uint button_mask,int use_skull_effect)

{
  if ((g_MouseButtonFlags.dword & button_mask) != 0) {
    if (this_ptr->effect_mode == 0) {
      if (use_skull_effect == 0) {
        this_ptr->effect_mode = 1;
      }
      else {
        this_ptr->effect_mode = 2;
      }
    }
    g_MouseButtonFlags.dword = g_MouseButtonFlags.dword & (button_mask ^ 0xff);
    return 1;
  }
  return 0;
}
