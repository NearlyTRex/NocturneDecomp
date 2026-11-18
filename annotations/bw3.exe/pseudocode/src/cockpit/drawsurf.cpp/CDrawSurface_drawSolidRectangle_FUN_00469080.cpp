// Name: cockpit_drawsurf.cpp_CDrawSurface_drawSolidRectangle_FUN_00469080
// Address: 00469080
// Address Range: [[00469080, 004690df]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawSolidRectangle_FUN_00469080(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawSolidRectangle_FUN_00469080(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

{
  int iVar1;
  float unaff_retaddr;
  
  iVar1 = g_INT_005f2aec;
  g_INT_005f2aec = 1;
  g_FLOAT_005f2af0 = 0.0;
  cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004691e0(this_ptr,x1,y1,x2,y2);
  g_INT_005f2aec = iVar1;
  g_FLOAT_005f2af0 = unaff_retaddr;
  return;
}
