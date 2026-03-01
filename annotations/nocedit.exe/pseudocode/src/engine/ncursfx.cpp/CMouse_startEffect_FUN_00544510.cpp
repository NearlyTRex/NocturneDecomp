// Name: engine_ncursfx.cpp_CMouse_startEffect_FUN_00544510
// Address: 00544510
// Address Range: [[00544510, 00544538]]
// Convention: __cdecl
// Signature: int __cdecl engine_ncursfx_cpp_CMouse_startEffect_FUN_00544510(CMouse *this_ptr,uint button_mask)

#include "nocturne.h"

int __cdecl engine_ncursfx_cpp_CMouse_startEffect_FUN_00544510(CMouse *this_ptr,uint button_mask)

{
  if (((g_MouseButtonFlags.dword & button_mask) != 0) && (this_ptr->effect_mode == 0)) {
    this_ptr->effect_mode = 1;
    return 0;
  }
  return 0;
}
