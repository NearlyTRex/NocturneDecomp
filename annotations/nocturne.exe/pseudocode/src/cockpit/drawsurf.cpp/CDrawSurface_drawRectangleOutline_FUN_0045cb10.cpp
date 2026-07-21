// Name: cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_0045cb10
// Address: 0045cb10
// Address Range: [[0045cb10, 0045cb64]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawRectangleOutline_FUN_0045cb10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawRectangleOutline_FUN_0045cb10(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawHorizontalLine_FUN_0045c730(param_1,param_2,param_3,param_4)
  ;
  cockpit_drawsurf_cpp_CDrawSurface_drawHorizontalLine_FUN_0045c730(param_1,param_2,param_5,param_4)
  ;
  cockpit_drawsurf_cpp_CDrawSurface_drawVerticalLine_FUN_0045c850(param_1,param_2,param_3,param_5);
  cockpit_drawsurf_cpp_CDrawSurface_drawVerticalLine_FUN_0045c850(param_1,param_4,param_3,param_5);
  return;
}
