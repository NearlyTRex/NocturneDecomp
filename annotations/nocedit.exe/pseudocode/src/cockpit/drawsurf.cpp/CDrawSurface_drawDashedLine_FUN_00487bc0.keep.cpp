// Name: cockpit_drawsurf.cpp_CDrawSurface_drawDashedLine_FUN_00487bc0
// Address: 00487bc0
// MANUAL RECONSTRUCTION
// Address Range: [[00487bc0, 00487dd7]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawDashedLine_FUN_00487bc0(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawDashedLine_FUN_00487bc0(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

{
  int y;
  int iVar1;
  int iVar2;
  int x;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_18;
  
  if (g_AnimationTimerValue != g_DashAnimationLastFrame) {
    g_DashAnimationAccumulator =
         (float)g_GlobalDeltaTimeInt * (float)1.52587890625e-05 + g_DashAnimationAccumulator;
    g_DashAnimationLastFrame = g_AnimationTimerValue;
    if (g_DashAnimationThreshold < g_DashAnimationAccumulator) {
      g_DashAnimationOffset =
           g_DashAnimationAccumulator / g_DashAnimationThreshold + g_DashAnimationOffset;
      if ((float)(g_DashLength * 2) < g_DashAnimationOffset) {
        g_DashAnimationOffset = 0.0;
      }
      g_DashAnimationAccumulator = 0.0;
    }
  }
  local_18 = (uint)ROUND(ROUND(g_DashAnimationOffset));
  local_28 = 1;
  iVar4 = x1 - this_ptr->x;
  x = x2 - this_ptr->x;
  iVar2 = y1 - this_ptr->y;
  y = y2 - this_ptr->y;
  local_2c = 1;
  iVar1 = iVar2;
  iVar5 = iVar4;
  if (iVar2 <= y) {
    local_2c = -1;
    iVar1 = y;
    y = iVar2;
    iVar5 = x;
    x = iVar4;
  }
  iVar1 = iVar1 - y;
  iVar3 = iVar5 - x;
  if (iVar3 < 0) {
    iVar3 = -iVar3;
    local_28 = -1;
  }
  if (iVar1 < iVar3) {
    local_20 = 0;
    iVar5 = iVar1 * 2 - iVar3;
    if (-1 < iVar3) {
      do {
        if (ABS((int)local_18) % (g_DashLength * 2) < g_DashLength) {
          cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(this_ptr,x,y);
        }
        if (0 < iVar5) {
          y = y + 1;
          iVar5 = iVar5 - iVar3;
        }
        local_18 = local_18 + local_2c;
        x = x + local_28;
        local_20 = local_20 + 1;
        iVar5 = iVar5 + iVar1;
      } while (local_20 <= iVar3);
    }
  }
  else {
    local_24 = 0;
    iVar5 = iVar3 * 2 - iVar1;
    if (-1 < iVar1) {
      do {
        if (ABS((int)local_18) % (g_DashLength * 2) < g_DashLength) {
          cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(this_ptr,x,y);
        }
        if (0 < iVar5) {
          iVar5 = iVar5 - iVar1;
          x = x + local_28;
        }
        y = y + 1;
        iVar5 = iVar5 + iVar3;
        local_18 = local_18 + local_2c;
        local_24 = local_24 + 1;
      } while (local_24 <= iVar1);
    }
  }
  return;
}
