// Name: engine_ncursfx.cpp_CMouse_consumeButton_FUN_005313e0
// Address: 005313e0
// Address Range: [[005313e0, 00531433]]
// Convention: __cdecl
// Signature: int __cdecl engine_ncursfx_cpp_CMouse_consumeButton_FUN_005313e0(CMouse *this_ptr,uint button_mask,int use_skull_effect)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_ncursfx_cpp_CMouse_consumeButton_FUN_005313e0(CMouse *this_ptr,uint button_mask,int use_skull_effect)

{
  if ((_DAT_01c43544 & button_mask) != 0) {
    if (*(int *)&this_ptr->field_0x25c == 0) {
      if (use_skull_effect == 0) {
        *(uint *)&this_ptr->field_0x25c = 1;
      }
      else {
        *(uint *)&this_ptr->field_0x25c = 2;
      }
    }
    _DAT_01c43544 = _DAT_01c43544 & (button_mask ^ 0xff);
    return 1;
  }
  return 0;
}
