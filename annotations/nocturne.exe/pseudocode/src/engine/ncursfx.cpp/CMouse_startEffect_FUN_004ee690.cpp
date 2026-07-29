// Name: engine_ncursfx.cpp_CMouse_startEffect_FUN_004ee690
// Address: 004ee690
// Address Range: [[004ee690, 004ee6b8]]
// Convention: __cdecl
// Signature: int __cdecl engine_ncursfx_cpp_CMouse_startEffect_FUN_004ee690(CMouse *this_ptr,uint button_mask)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_ncursfx_cpp_CMouse_startEffect_FUN_004ee690(CMouse *this_ptr,uint button_mask)

{
  if (((_DAT_01bd1d94 & button_mask) != 0) && (this_ptr->effect_mode == 0)) {
    this_ptr->effect_mode = 1;
    return 0;
  }
  return 0;
}
