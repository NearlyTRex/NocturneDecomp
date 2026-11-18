// Name: engine_ncursfx.cpp_CMouse_getPosition_FUN_00508d10
// Address: 00508d10
// Address Range: [[00508d10, 00508d26]]
// Convention: __cdecl
// Signature: void __cdecl engine_ncursfx_cpp_CMouse_getPosition_FUN_00508d10(CMouse *this_ptr,int *out_x,int *out_y)

#include "nocturne.h"

void __cdecl engine_ncursfx_cpp_CMouse_getPosition_FUN_00508d10(CMouse *this_ptr,int *out_x,int *out_y)

{
  *out_x = g_MouseX;
  *out_y = g_MouseY;
  return;
}
