// Name: engine_ncursfx.cpp_CMouse_consumeButton_FUN_005101d0
// Address: 005101d0
// Address Range: [[005101d0, 00510223]]
// Convention: __cdecl
// Signature: int __cdecl engine_ncursfx_cpp_CMouse_consumeButton_FUN_005101d0(CMouse *this_ptr,uint button_mask,int use_skull_effect)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_ncursfx_cpp_CMouse_consumeButton_FUN_005101d0(CMouse *this_ptr,uint button_mask,int use_skull_effect)

{
  if ((_DAT_01c2a384 & button_mask) != 0) {
    if (*(int *)&this_ptr->field_0x25c == 0) {
      if (use_skull_effect == 0) {
        *(uint *)&this_ptr->field_0x25c = 1;
      }
      else {
        *(uint *)&this_ptr->field_0x25c = 2;
      }
    }
    _DAT_01c2a384 = _DAT_01c2a384 & (button_mask ^ 0xff);
    return 1;
  }
  return 0;
}
