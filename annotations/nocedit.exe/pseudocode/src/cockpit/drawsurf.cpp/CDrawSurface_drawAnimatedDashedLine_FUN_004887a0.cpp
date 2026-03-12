// Name: cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004887a0
// Address: 004887a0
// Address Range: [[004887a0, 00488982]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004887a0(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004887a0(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

{
  int iVar4;
  int iVar5;
  int iVar3;
  int iVar2;
  int iVar1;
  
  iVar5 = y2;
  iVar4 = x1;
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
  iVar3 = (int)ROUND(ROUND(g_DashOffsetCounter));
  if (x2 < x1) {
    x1 = x2;
    x2 = iVar4;
  }
  iVar1 = x1;
  if (y2 < y1) {
    y2 = y1;
    y1 = iVar5;
  }
  for (; iVar2 = y1, iVar1 < x2; iVar1 = iVar1 + 1) {
    if (iVar3 % (g_DashLength * 2) < g_DashLength) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(this_ptr,iVar1,y1);
    }
    iVar3 = iVar3 + 1;
  }
  for (; iVar2 < y2; iVar2 = iVar2 + 1) {
    if (iVar3 % (g_DashLength * 2) < g_DashLength) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(this_ptr,x2,iVar2);
    }
    iVar3 = iVar3 + 1;
  }
  for (; x1 < x2; x2 = x2 + -1) {
    if (iVar3 % (g_DashLength * 2) < g_DashLength) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(this_ptr,x2,y2);
    }
    iVar3 = iVar3 + 1;
  }
  for (; y1 < y2; y2 = y2 + -1) {
    if (iVar3 % (g_DashLength * 2) < g_DashLength) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(this_ptr,x1,y2);
    }
    iVar3 = iVar3 + 1;
  }
  return;
}
