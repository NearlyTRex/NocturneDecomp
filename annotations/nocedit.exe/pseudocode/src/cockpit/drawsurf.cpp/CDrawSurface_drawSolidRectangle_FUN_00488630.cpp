// Name: cockpit_drawsurf.cpp_CDrawSurface_drawSolidRectangle_FUN_00488630
// Address: 00488630
// Address Range: [[00488630, 0048869c]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawSolidRectangle_FUN_00488630(CDrawSurface * this_ptr, int x1, int y1, int x2, int y2)

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawSolidRectangle_FUN_00488630
          (CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

{
  int iVar1;
  float fVar2;
  double dVar3;
  
  fVar2 = g_DashAnimationThreshold;
  iVar1 = g_DashLength;
  g_DashLength = 1;
  g_DashAnimationThreshold = 0.0;
  cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004887a0(this_ptr,x1,y1,x2,y2);
  dVar3 = crt_math_c_round_FUN_005fe6b0((double)iVar1);
  g_DashLength = (int)ROUND(dVar3);
  g_DashAnimationThreshold = fVar2;
  return;
}
