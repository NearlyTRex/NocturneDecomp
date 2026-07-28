// Name: cockpit_drawsurf.cpp_CDrawSurface_renderPackedBitmap_FUN_0045d2d0
// Address: 0045d2d0
// Address Range: [[0045d2d0, 0045d30d]]
// Convention: unknown
// Signature: void cockpit_drawsurf_cpp_CDrawSurface_renderPackedBitmap_FUN_0045d2d0(int param_1,int param_2,int param_3,CPackedBitmap *param_4)

#include "nocturne.h"

void cockpit_drawsurf_cpp_CDrawSurface_renderPackedBitmap_FUN_0045d2d0(int param_1,int param_2,int param_3,CPackedBitmap *param_4)

{
  cockpit_pkbitmap_cpp_CPackedBitmap_renderIfIntersectsRect_FUN_004f4410
            (param_4,param_2 + *(int *)(param_1 + 8),param_3 + *(int *)(param_1 + 0xc),
             *(int *)(param_1 + 0x10),*(int *)(param_1 + 0x14),*(int *)(param_1 + 0x18),
             *(int *)(param_1 + 0x1c));
  return;
}
