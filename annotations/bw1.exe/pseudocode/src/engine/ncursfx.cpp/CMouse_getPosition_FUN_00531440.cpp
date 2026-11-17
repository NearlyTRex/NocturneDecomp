// Name: engine_ncursfx.cpp_CMouse_getPosition_FUN_00531440
// Address: 00531440
// Address Range: [[00531440, 00531456]]
// Convention: __cdecl
// Signature: void __cdecl engine_ncursfx_cpp_CMouse_getPosition_FUN_00531440(CMouse *this_ptr,int *out_x,int *out_y)

#include "nocturne.h"

void __cdecl engine_ncursfx_cpp_CMouse_getPosition_FUN_00531440(CMouse *this_ptr,int *out_x,int *out_y)

{
  *out_x = g_MouseX;
  *out_y = g_MouseY;
  return;
}
