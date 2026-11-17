// Name: cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_00467610
// Address: 00467610
// Address Range: [[00467610, 004677df]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedDashedLine_FUN_00467610(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedDashedLine_FUN_00467610(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  
  iVar2 = x2;
  iVar1 = x1;
  if (g_INT_01c2a374 != g_INT_01ba59a4) {
    g_FLOAT_01ba599c = (float)g_INT_01c2a370 * 1.525879e-05f + g_FLOAT_01ba599c;
    g_INT_01ba59a4 = g_INT_01c2a374;
    if (g_FLOAT_0060b274 < g_FLOAT_01ba599c) {
      g_FLOAT_01ba59a0 = g_FLOAT_01ba599c / g_FLOAT_0060b274 + g_FLOAT_01ba59a0;
      if ((float)(g_INT_0060b270 * 2) < g_FLOAT_01ba59a0) {
        g_FLOAT_01ba59a0 = 0.0;
      }
      g_FLOAT_01ba599c = 0.0;
    }
  }
  dVar4 = round((double)g_FLOAT_01ba59a0);
  iVar3 = (int)ROUND(dVar4);
  if (x2 < x1) {
    x1 = x2;
    x2 = iVar1;
    iVar1 = iVar2;
  }
  for (; iVar2 = x1, iVar1 < x2; iVar1 = iVar1 + 1) {
    if (iVar3 % (g_INT_0060b270 * 2) < g_INT_0060b270) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00466360(this_ptr,iVar1,x1);
    }
    iVar3 = iVar3 + 1;
  }
  for (; iVar1 = x2, iVar2 < x2; iVar2 = iVar2 + 1) {
    if (iVar3 % (g_INT_0060b270 * 2) < g_INT_0060b270) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00466360(this_ptr,x2,iVar2);
    }
    iVar3 = iVar3 + 1;
  }
  for (; x1 < iVar1; iVar1 = iVar1 + -1) {
    if (iVar3 % (g_INT_0060b270 * 2) < g_INT_0060b270) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00466360(this_ptr,iVar1,x2);
    }
    iVar3 = iVar3 + 1;
  }
  for (; x1 < x2; x2 = x2 + -1) {
    if (iVar3 % (g_INT_0060b270 * 2) < g_INT_0060b270) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00466360(this_ptr,x1,x2);
    }
    iVar3 = iVar3 + 1;
  }
  return;
}
