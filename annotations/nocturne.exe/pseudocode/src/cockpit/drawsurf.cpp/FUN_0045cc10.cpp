// Name: cockpit_drawsurf.cpp_FUN_0045cc10
// Address: 0045cc10
// Address Range: [[0045cc10, 0045cc66]]
// Convention: unknown
// Signature: void cockpit_drawsurf_cpp_FUN_0045cc10(CDrawSurface *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

#include "nocturne.h"

void cockpit_drawsurf_cpp_FUN_0045cc10(CDrawSurface *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  int x;
  int y;
  
  x = ((param_3 + param_2 + 1) - param_6) / 2;
  y = ((param_5 + param_4 + 1) - param_7) / 2;
  cockpit_drawsurf_cpp_CDrawSurface_drawRectangleOutline_FUN_0045cb10
            (param_1,x,y,param_6 + x + -1,param_7 + -1 + y);
  return;
}
