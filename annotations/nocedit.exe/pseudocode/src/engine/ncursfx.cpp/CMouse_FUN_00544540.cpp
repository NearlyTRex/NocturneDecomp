// Name: engine_ncursfx.cpp_CMouse_FUN_00544540
// Address: 00544540
// Address Range: [[00544540, 00544593]]
// Convention: __cdecl
// Signature: int __cdecl engine_ncursfx_cpp_CMouse_FUN_00544540(CMouse *this_ptr)

#include "nocturne.h"

int __cdecl engine_ncursfx_cpp_CMouse_FUN_00544540(CMouse *this_ptr)

{
  uint in_stack_00000008;
  int in_stack_0000000c;
  
  if ((g_MouseButtonFlags & in_stack_00000008) != 0) {
    if (this_ptr->field_604 == 0) {
      if (in_stack_0000000c == 0) {
        this_ptr->field_604 = 1;
      }
      else {
        this_ptr->field_604 = 2;
      }
    }
    g_MouseButtonFlags = g_MouseButtonFlags & (in_stack_00000008 ^ 0xff);
    return 1;
  }
  return 0;
}
