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
  float fVar1;
  uint extraout_EDX;
  uint unaff_EBP;
  float10 fVar2;
  double dVar3;
  
  fVar1 = 0.1f;
  g_DashLength = 1;
  0.1f = 0.0;
  cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004887a0(this_ptr,x1,y1,x2,y2);
  fVar2 = (float10)fVar1;
  dVar3 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,unaff_EBP));
  g_DashLength = (int)ROUND(fVar2);
  0.1f = SUB84 /* extract 2-byte value */(dVar3,0);
  return;
}
