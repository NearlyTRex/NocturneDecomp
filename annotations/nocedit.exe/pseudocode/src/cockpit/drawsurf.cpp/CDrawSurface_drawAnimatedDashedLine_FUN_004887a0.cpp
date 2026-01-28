// Name: cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004887a0
// Address: 004887a0
// Address Range: [[004887a0, 00488982]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004887a0 (CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004887a0
          (CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

{
  CDrawSurface *x;
  int iVar1;
  CDrawSurface *this_ptr_00;
  int iVar2;
  int x_00;
  double dVar3;
  
  iVar1 = x2;
  this_ptr_00 = this_ptr;
  if (g_AnimationTimerValue != g_LastAnimationTimerValue) {
    g_DashAnimationAccumulatorOther =
         (float)g_GlobalDeltaTimeInt * (float)1.52587890625e-05 +
         g_DashAnimationAccumulatorOther;
    g_LastAnimationTimerValue = g_AnimationTimerValue;
    if (g_DashAnimationThreshold < g_DashAnimationAccumulatorOther) {
      g_DashOffsetCounter =
           g_DashAnimationAccumulatorOther / g_DashAnimationThreshold + g_DashOffsetCounter;
      if ((float)(g_DashLength * 2) < g_DashOffsetCounter) {
        g_DashOffsetCounter = 0.0;
      }
      g_DashAnimationAccumulatorOther = 0.0;
    }
  }
  dVar3 = crt_math_c_round_FUN_005fe6b0((double)g_DashOffsetCounter);
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
    if (iVar2 % (g_DashLength * 2) < g_DashLength) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(this_ptr_00,(int)x,y1);
    }
    iVar2 = iVar2 + 1;
  }
  for (; iVar1 < x2; iVar1 = iVar1 + 1) {
    if (iVar2 % (g_DashLength * 2) < g_DashLength) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(this_ptr_00,x_00,iVar1);
    }
    iVar2 = iVar2 + 1;
  }
  for (; (int)this_ptr < x_00; x_00 = x_00 + -1) {
    if (iVar2 % (g_DashLength * 2) < g_DashLength) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(this_ptr_00,x_00,x2);
    }
    iVar2 = iVar2 + 1;
  }
  for (; y1 < x2; x2 = x2 + -1) {
    if (iVar2 % (g_DashLength * 2) < g_DashLength) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(this_ptr_00,(int)this_ptr,x2);
    }
    iVar2 = iVar2 + 1;
  }
  return;
}
