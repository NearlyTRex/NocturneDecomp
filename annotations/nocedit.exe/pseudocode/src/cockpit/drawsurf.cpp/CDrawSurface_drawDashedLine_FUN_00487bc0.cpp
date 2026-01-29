// Name: cockpit_drawsurf.cpp_CDrawSurface_drawDashedLine_FUN_00487bc0
// Address: 00487bc0
// Address Range: [[00487bc0, 00487dd7]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawDashedLine_FUN_00487bc0 (CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawDashedLine_FUN_00487bc0
          (CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

{
  int y;
  int iVar1;
  int iVar2;
  int x;
  int iVar3;
  int iVar4;
  double dVar5;
  CDrawSurface *unaff_retaddr;
  int iStack_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_1c;
  
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
  dVar5 = round((double)g_DashAnimationOffset);
  local_1c = (uint)ROUND(dVar5);
  local_2c = 1;
  iVar4 = x1 - this_ptr->x;
  x = x2 - this_ptr->x;
  iVar2 = y1 - this_ptr->y;
  y = y2 - this_ptr->y;
  iStack_30 = 1;
  iVar1 = iVar2;
  iVar3 = iVar4;
  if (iVar2 <= y) {
    iStack_30 = -1;
    iVar1 = y;
    y = iVar2;
    iVar3 = x;
    x = iVar4;
  }
  iVar1 = iVar1 - y;
  iVar3 = iVar3 - x;
  if (iVar3 < 0) {
    iVar3 = -iVar3;
    local_2c = -1;
  }
  if (iVar1 < iVar3) {
    local_24 = 0;
    iVar2 = iVar1 * 2 - iVar3;
    if (-1 < iVar3) {
      do {
        if ((int)((local_1c ^ (int)local_1c >> 0x1f) - ((int)local_1c >> 0x1f)) % (g_DashLength * 2)
            < g_DashLength) {
          cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(unaff_retaddr,x,y);
        }
        if (0 < iVar2) {
          y = y + 1;
          iVar2 = iVar2 - iVar3;
        }
        local_1c = local_1c + iStack_30;
        x = x + local_2c;
        local_24 = local_24 + 1;
        iVar2 = iVar2 + iVar1;
      } while (local_24 <= iVar3);
    }
  }
  else {
    local_28 = 0;
    iVar2 = iVar3 * 2 - iVar1;
    if (-1 < iVar1) {
      do {
        if ((int)((local_1c ^ (int)local_1c >> 0x1f) - ((int)local_1c >> 0x1f)) % (g_DashLength * 2)
            < g_DashLength) {
          cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0(unaff_retaddr,x,y);
        }
        if (0 < iVar2) {
          iVar2 = iVar2 - iVar1;
          x = x + local_2c;
        }
        y = y + 1;
        iVar2 = iVar2 + iVar3;
        local_1c = local_1c + iStack_30;
        local_28 = local_28 + 1;
      } while (local_28 <= iVar1);
    }
  }
  return;
}
