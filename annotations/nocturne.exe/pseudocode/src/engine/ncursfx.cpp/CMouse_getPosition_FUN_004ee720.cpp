// Name: engine_ncursfx.cpp_CMouse_getPosition_FUN_004ee720
// Address: 004ee720
// Address Range: [[004ee720, 004ee736]]
// Convention: __cdecl
// Signature: void __cdecl engine_ncursfx_cpp_CMouse_getPosition_FUN_004ee720(CMouse *this_ptr,int *out_x,int *out_y)

#include "nocturne.h"

void __cdecl engine_ncursfx_cpp_CMouse_getPosition_FUN_004ee720(CMouse *this_ptr,int *out_x,int *out_y)

{
  *out_x = g_MouseX;
  *out_y = g_MouseY;
  return;
}
