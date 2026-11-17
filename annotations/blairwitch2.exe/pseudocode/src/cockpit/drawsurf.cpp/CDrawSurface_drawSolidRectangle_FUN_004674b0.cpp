// Name: cockpit_drawsurf.cpp_CDrawSurface_drawSolidRectangle_FUN_004674b0
// Address: 004674b0
// Address Range: [[004674b0, 0046750f]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawSolidRectangle_FUN_004674b0(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawSolidRectangle_FUN_004674b0(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

{
  int iVar1;
  float unaff_retaddr;
  
  iVar1 = g_INT_0060b270;
  g_INT_0060b270 = 1;
  g_FLOAT_0060b274 = 0.0;
  cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedDashedLine_FUN_00467610(this_ptr,x1,y1,x2,y2);
  g_INT_0060b270 = iVar1;
  g_FLOAT_0060b274 = unaff_retaddr;
  return;
}
