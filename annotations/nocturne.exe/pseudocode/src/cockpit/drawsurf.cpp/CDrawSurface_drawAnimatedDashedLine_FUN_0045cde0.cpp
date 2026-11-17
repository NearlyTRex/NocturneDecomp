// Name: cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_0045cde0
// Address: 0045cde0
// Address Range: [[0045cde0, 0045cfc2]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedDashedLine_FUN_0045cde0(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedDashedLine_FUN_0045cde0(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

{
  CDrawSurface *x;
  int iVar1;
  CDrawSurface *this_ptr_00;
  int iVar2;
  int x_00;
  double dVar3;
  
  iVar1 = x2;
  this_ptr_00 = this_ptr;
  if (g_INT_01bd1d84 != g_INT_01b4d48c) {
    g_FLOAT_01b4d484 = (float)g_INT_01bd1d80 * (float)1.52587890625e-05 + g_FLOAT_01b4d484;
    g_INT_01b4d48c = g_INT_01bd1d84;
    if (g_FLOAT_005ae6f8 < g_FLOAT_01b4d484) {
      g_FLOAT_01b4d488 = g_FLOAT_01b4d484 / g_FLOAT_005ae6f8 + g_FLOAT_01b4d488;
      if ((float)(g_INT_005ae6f4 * 2) < g_FLOAT_01b4d488) {
        g_FLOAT_01b4d488 = 0.0;
      }
      g_FLOAT_01b4d484 = 0.0;
    }
  }
  dVar3 = round((double)g_FLOAT_01b4d488);
  iVar2 = (int)ROUND(dVar3);
  x_00 = x2;
  if (x2 < x1) {
    this_ptr = (CDrawSurface *)x2;
    x_00 = x1;
  }
  x = this_ptr;
  if (x2 < y1) {
    x2 = y1;
    y1 = iVar1;
  }
  for (; iVar1 = y1, (int)x < x_00; x = (CDrawSurface *)((int)&x->width + 1)) {
    if (iVar2 % (g_INT_005ae6f4 * 2) < g_INT_005ae6f4) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0(this_ptr_00,(int)x,y1);
    }
    iVar2 = iVar2 + 1;
  }
  for (; iVar1 < x2; iVar1 = iVar1 + 1) {
    if (iVar2 % (g_INT_005ae6f4 * 2) < g_INT_005ae6f4) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0(this_ptr_00,x_00,iVar1);
    }
    iVar2 = iVar2 + 1;
  }
  for (; (int)this_ptr < x_00; x_00 = x_00 + -1) {
    if (iVar2 % (g_INT_005ae6f4 * 2) < g_INT_005ae6f4) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0(this_ptr_00,x_00,x2);
    }
    iVar2 = iVar2 + 1;
  }
  for (; y1 < x2; x2 = x2 + -1) {
    if (iVar2 % (g_INT_005ae6f4 * 2) < g_INT_005ae6f4) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_0045bab0(this_ptr_00,(int)this_ptr,x2);
    }
    iVar2 = iVar2 + 1;
  }
  return;
}
