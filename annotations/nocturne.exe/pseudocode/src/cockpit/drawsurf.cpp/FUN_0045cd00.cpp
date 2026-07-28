// Name: cockpit_drawsurf.cpp_FUN_0045cd00
// Address: 0045cd00
// Address Range: [[0045cd00, 0045cd71]]
// Convention: unknown
// Signature: void cockpit_drawsurf_cpp_FUN_0045cd00(CDrawSurface *param_1,int param_2,int param_3,uint param_4,uint param_5)

#include "nocturne.h"

void cockpit_drawsurf_cpp_FUN_0045cd00(CDrawSurface *param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  int x2;
  int y2;
  
  x2 = (int)param_4 / 2 + param_2;
  if ((param_4 & 1) == 0) {
    x2 = x2 + -1;
  }
  y2 = (int)param_5 / 2 + param_3;
  if ((param_5 & 1) == 0) {
    y2 = y2 + -1;
  }
  cockpit_drawsurf_cpp_CDrawSurface_drawSolidRectangle_FUN_0045cc70
            (param_1,param_2 - (int)param_4 / 2,param_3 - (int)param_5 / 2,x2,y2);
  return;
}
