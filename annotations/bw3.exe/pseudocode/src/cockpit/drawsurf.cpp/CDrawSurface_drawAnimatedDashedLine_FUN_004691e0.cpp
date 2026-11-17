// Name: cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004691e0
// Address: 004691e0
// Address Range: [[004691e0, 004693af]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004691e0(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004691e0(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  
  iVar2 = x2;
  iVar1 = x1;
  if (g_INT_01c5fad4 != g_INT_01bdd538) {
    g_FLOAT_01bdd530 = (float)g_INT_01c5fad0 * 1.525879e-05f + g_FLOAT_01bdd530;
    g_INT_01bdd538 = g_INT_01c5fad4;
    if (g_FLOAT_005f2af0 < g_FLOAT_01bdd530) {
      g_FLOAT_01bdd534 = g_FLOAT_01bdd530 / g_FLOAT_005f2af0 + g_FLOAT_01bdd534;
      if ((float)(g_INT_005f2aec * 2) < g_FLOAT_01bdd534) {
        g_FLOAT_01bdd534 = 0.0;
      }
      g_FLOAT_01bdd530 = 0.0;
    }
  }
  dVar4 = round((double)g_FLOAT_01bdd534);
  iVar3 = (int)ROUND(dVar4);
  if (x2 < x1) {
    x1 = x2;
    x2 = iVar1;
    iVar1 = iVar2;
  }
  for (; iVar2 = x1, iVar1 < x2; iVar1 = iVar1 + 1) {
    if (iVar3 % (g_INT_005f2aec * 2) < g_INT_005f2aec) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00467f30(this_ptr,iVar1,x1);
    }
    iVar3 = iVar3 + 1;
  }
  for (; iVar1 = x2, iVar2 < x2; iVar2 = iVar2 + 1) {
    if (iVar3 % (g_INT_005f2aec * 2) < g_INT_005f2aec) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00467f30(this_ptr,x2,iVar2);
    }
    iVar3 = iVar3 + 1;
  }
  for (; x1 < iVar1; iVar1 = iVar1 + -1) {
    if (iVar3 % (g_INT_005f2aec * 2) < g_INT_005f2aec) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00467f30(this_ptr,iVar1,x2);
    }
    iVar3 = iVar3 + 1;
  }
  for (; x1 < x2; x2 = x2 + -1) {
    if (iVar3 % (g_INT_005f2aec * 2) < g_INT_005f2aec) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00467f30(this_ptr,x1,x2);
    }
    iVar3 = iVar3 + 1;
  }
  return;
}
