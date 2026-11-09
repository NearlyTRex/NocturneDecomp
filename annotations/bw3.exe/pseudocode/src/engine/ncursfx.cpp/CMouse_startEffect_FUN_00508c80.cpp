// Name: engine_ncursfx.cpp_CMouse_startEffect_FUN_00508c80
// Address: 00508c80
// Address Range: [[00508c80, 00508ca8]]
// Convention: __cdecl
// Signature: int __cdecl engine_ncursfx_cpp_CMouse_startEffect_FUN_00508c80(CMouse *this_ptr,uint button_mask)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_ncursfx_cpp_CMouse_startEffect_FUN_00508c80(CMouse *this_ptr,uint button_mask)

{
  if (((_DAT_01c5fae4 & button_mask) != 0) && (*(int *)&this_ptr->field_0x25c == 0)) {
    *(uint *)&this_ptr->field_0x25c = 1;
    return 0;
  }
  return 0;
}
