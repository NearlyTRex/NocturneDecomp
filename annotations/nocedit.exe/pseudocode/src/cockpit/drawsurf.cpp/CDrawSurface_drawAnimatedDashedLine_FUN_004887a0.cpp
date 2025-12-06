// Name: cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004887a0
// Address: 004887a0
// Address Range: [[004887a0, 00488982]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004887a0(CDrawSurface * this_ptr, int x1, int y1, int x2, int y2)

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004887a0
          (CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

{
  int iVar1;
  uint in_EAX;
  int iVar2;
  int iVar3;
  int y;
  float10 fVar4;
  double dVar5;
  int in_stack_00000018;
  
  iVar1 = in_stack_00000018;
  y = y1;
  if (g_AnimationTimerValue != g_LastAnimationTimerValue) {
    g_DashAnimationAccumulator =
         (float)g_GlobalDeltaTimeInt * (float)1.52587890625e-05 + g_DashAnimationAccumulator
    ;
    g_LastAnimationTimerValue = g_AnimationTimerValue;
    in_EAX = CONCAT22 /* combine 2-byte values */((short)((uint)in_EAX >> 0x10),
                      (ushort)(g_DashAnimationAccumulator < 0.1f) << 8 |
                      (ushort)(NAN(g_DashAnimationAccumulator) || NAN(0.1f)) <<
                      10 | (ushort)(g_DashAnimationAccumulator == 0.1f) << 0xe);
    if (g_DashAnimationAccumulator >= 0.1f &&
        (g_DashAnimationAccumulator == 0.1f) == 0) {
      g_DashOffsetCounter =
           g_DashAnimationAccumulator / 0.1f + g_DashOffsetCounter;
      if ((float)(g_DashLength * 2) < g_DashOffsetCounter) {
        g_DashOffsetCounter = 0.0;
      }
      in_EAX = 0;
      g_DashAnimationAccumulator = 0.0;
    }
  }
  fVar4 = (float10)g_DashOffsetCounter;
  dVar5 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(x1,in_EAX));
  iVar2 = (int)((ulonglong)dVar5 >> 0x20);
  iVar3 = (int)ROUND(fVar4);
  if (x2 < iVar2) {
    y1 = x2;
    x2 = iVar2;
  }
  iVar2 = y1;
  if (in_stack_00000018 < y) {
    in_stack_00000018 = y;
    y = iVar1;
  }
  for (; iVar1 = y, iVar2 < x2; iVar2 = iVar2 + 1) {
    if (iVar3 % (g_DashLength * 2) < g_DashLength) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(this_ptr,iVar2,y);
    }
    iVar3 = iVar3 + 1;
  }
  for (; iVar1 < in_stack_00000018; iVar1 = iVar1 + 1) {
    if (iVar3 % (g_DashLength * 2) < g_DashLength) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(this_ptr,x2,iVar1);
    }
    iVar3 = iVar3 + 1;
  }
  for (; y1 < x2; x2 = x2 + -1) {
    if (iVar3 % (g_DashLength * 2) < g_DashLength) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(this_ptr,x2,in_stack_00000018);
    }
    iVar3 = iVar3 + 1;
  }
  for (; y < in_stack_00000018; in_stack_00000018 = in_stack_00000018 + -1) {
    if (iVar3 % (g_DashLength * 2) < g_DashLength) {
      cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(this_ptr,y1,in_stack_00000018);
    }
    iVar3 = iVar3 + 1;
  }
  return;
}
