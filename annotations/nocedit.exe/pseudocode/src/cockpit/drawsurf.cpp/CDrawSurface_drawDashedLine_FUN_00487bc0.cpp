// Name: cockpit_drawsurf.cpp_CDrawSurface_drawDashedLine_FUN_00487bc0
// Address: 00487bc0
// Address Range: [[00487bc0, 00487dd7]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawDashedLine_FUN_00487bc0(CDrawSurface * this_ptr, int x1, int y1, int x2, int y2)

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawDashedLine_FUN_00487bc0
          (CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

{
  float fVar1;
  uint in_EAX;
  ushort uVar2;
  int extraout_ECX;
  int y;
  int iVar3;
  int iVar4;
  int x;
  int iVar5;
  int iVar6;
  float10 fVar7;
  double dVar8;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_14;
  
  if (g_AnimationTimerValue != g_DashAnimationLastFrame) {
    g_DashAnimationAccumulator =
         (float)g_GlobalDeltaTimeInt * (float)1.52587890625e-05 + g_DashAnimationAccumulator;
    g_DashAnimationLastFrame = g_AnimationTimerValue;
    uVar2 = (ushort)((uint)in_EAX >> 0x10);
    in_EAX = CONCAT22 /* combine 2-byte values */(uVar2,(ushort)(g_DashAnimationAccumulator < 0.1f) << 8 |
                            (ushort)(NAN(g_DashAnimationAccumulator) ||
                                    NAN(0.1f)) << 10 |
                            (ushort)(g_DashAnimationAccumulator == 0.1f) << 0xe)
    ;
    if (g_DashAnimationAccumulator >= 0.1f &&
        (g_DashAnimationAccumulator == 0.1f) == 0) {
      g_DashAnimationOffset =
           g_DashAnimationAccumulator / 0.1f + g_DashAnimationOffset;
      fVar1 = (float)(g_DashLength * 2);
      in_EAX = CONCAT22 /* combine 2-byte values */(uVar2,(ushort)(fVar1 < g_DashAnimationOffset) << 8 |
                              (ushort)(NAN(fVar1) || NAN(g_DashAnimationOffset)) << 10 |
                              (ushort)(fVar1 == g_DashAnimationOffset) << 0xe);
      if (fVar1 < g_DashAnimationOffset) {
        in_EAX = 0;
        g_DashAnimationOffset = 0.0;
      }
      g_DashAnimationAccumulator = 0.0;
    }
  }
  fVar7 = (float10)g_DashAnimationOffset;
  dVar8 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(y2,in_EAX));
  local_14 = (uint)ROUND(fVar7);
  local_24 = 1;
  iVar6 = x1 - *(int *)(extraout_ECX + 8);
  x = x2 - *(int *)(extraout_ECX + 8);
  iVar4 = y1 - *(int *)(extraout_ECX + 0xc);
  y = (int)((ulonglong)dVar8 >> 0x20) - *(int *)(extraout_ECX + 0xc);
  local_28 = 1;
  iVar3 = iVar4;
  iVar5 = iVar6;
  if (iVar4 <= y) {
    local_28 = -1;
    iVar3 = y;
    y = iVar4;
    iVar5 = x;
    x = iVar6;
  }
  iVar3 = iVar3 - y;
  iVar5 = iVar5 - x;
  if (iVar5 < 0) {
    iVar5 = -iVar5;
    local_24 = -1;
  }
  if (iVar3 < iVar5) {
    local_1c = 0;
    iVar4 = iVar3 * 2 - iVar5;
    if (-1 < iVar5) {
      do {
        if ((int)((local_14 ^ (int)local_14 >> 0x1f) - ((int)local_14 >> 0x1f)) % (g_DashLength * 2)
            < g_DashLength) {
          cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0((CDrawSurface *)x1,x,y);
        }
        if (0 < iVar4) {
          y = y + 1;
          iVar4 = iVar4 - iVar5;
        }
        local_14 = local_14 + local_28;
        x = x + local_24;
        local_1c = local_1c + 1;
        iVar4 = iVar4 + iVar3;
      } while (local_1c <= iVar5);
    }
  }
  else {
    local_20 = 0;
    iVar4 = iVar5 * 2 - iVar3;
    if (-1 < iVar3) {
      do {
        if ((int)((local_14 ^ (int)local_14 >> 0x1f) - ((int)local_14 >> 0x1f)) % (g_DashLength * 2)
            < g_DashLength) {
          cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_004874d0((CDrawSurface *)x1,x,y);
        }
        if (0 < iVar4) {
          iVar4 = iVar4 - iVar3;
          x = x + local_24;
        }
        y = y + 1;
        iVar4 = iVar4 + iVar5;
        local_14 = local_14 + local_28;
        local_20 = local_20 + 1;
      } while (local_20 <= iVar3);
    }
  }
  return;
}
