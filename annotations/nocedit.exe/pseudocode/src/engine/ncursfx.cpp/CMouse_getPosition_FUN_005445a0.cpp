// Name: engine_ncursfx.cpp_CMouse_getPosition_FUN_005445a0
// Address: 005445a0
// Address Range: [[005445a0, 005445b6]]
// Convention: __cdecl
// Signature: void __cdecl engine_ncursfx_cpp_CMouse_getPosition_FUN_005445a0(CMouse *this_ptr,int *out_x,int *out_y)

#include "nocturne.h"

void __cdecl engine_ncursfx_cpp_CMouse_getPosition_FUN_005445a0(CMouse *this_ptr,int *out_x,int *out_y)

{
  *out_x = g_MouseX;
  *out_y = g_MouseY;
  return;
}
