// Name: engine_ncursfx.cpp_CMouse_getPosition_FUN_00510230
// Address: 00510230
// Address Range: [[00510230, 00510246]]
// Convention: __cdecl
// Signature: void __cdecl engine_ncursfx_cpp_CMouse_getPosition_FUN_00510230(CMouse *this_ptr,int *out_x,int *out_y)

#include "nocturne.h"

void __cdecl engine_ncursfx_cpp_CMouse_getPosition_FUN_00510230(CMouse *this_ptr,int *out_x,int *out_y)

{
  *out_x = g_MouseX;
  *out_y = g_MouseY;
  return;
}
