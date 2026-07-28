// Name: cockpit_drawsurf.cpp_FUN_0045d070
// Address: 0045d070
// Address Range: [[0045d070, 0045d0c6]]
// Convention: unknown
// Signature: void cockpit_drawsurf_cpp_FUN_0045d070(CDrawSurface *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

#include "nocturne.h"

void cockpit_drawsurf_cpp_FUN_0045d070(CDrawSurface *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  int x1;
  int y1;
  
  x1 = ((param_3 + param_2 + 1) - param_6) / 2;
  y1 = ((param_5 + param_4 + 1) - param_7) / 2;
  cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedDashedLine_FUN_0045cde0
            (param_1,x1,y1,param_6 + x1 + -1,param_7 + -1 + y1);
  return;
}
