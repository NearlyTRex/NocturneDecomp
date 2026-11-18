// Name: engine_ncursfx.cpp_CMouse_startEffect_FUN_005101a0
// Address: 005101a0
// Address Range: [[005101a0, 005101c8]]
// Convention: __cdecl
// Signature: int __cdecl engine_ncursfx_cpp_CMouse_startEffect_FUN_005101a0(CMouse *this_ptr,uint button_mask)

#include "nocturne.h"

int __cdecl engine_ncursfx_cpp_CMouse_startEffect_FUN_005101a0(CMouse *this_ptr,uint button_mask)

{
  if (((g_MouseButtonFlags.dword & button_mask) != 0) && (this_ptr->effect_mode == 0)) {
    this_ptr->effect_mode = 1;
    return 0;
  }
  return 0;
}
