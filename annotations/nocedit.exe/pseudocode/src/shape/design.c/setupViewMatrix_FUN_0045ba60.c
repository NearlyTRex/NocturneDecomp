// Name: shape_design.c_setupViewMatrix_FUN_0045ba60
// Address: 0045ba60
// Address Range: [[0045ba60, 0045bbb3]]
// Convention: __cdecl
// Signature: void shape_design.c_setupViewMatrix_FUN_0045ba60(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0045bb46) */

void __cdecl shape_design_c_setupViewMatrix_FUN_0045ba60(void)

{
  ushort local_20;
  ushort local_1c;
  ushort local_18;
  
  if (g_PolygonScreenCache[19999].view_mode == 0) {
    local_20 = 0x4000;
    local_1c = 0;
    local_18 = 0;
    g_RelativeX = 0;
    g_RelativeY = g_ZoomLevel << 4;
    g_RelativeZ = 0;
  }
  else if ((uint)g_PolygonScreenCache[19999].view_mode < 2) {
    local_20 = 0;
    local_1c = 0;
    local_18 = 0xc000;
    g_RelativeX = g_ZoomLevel << 4;
    g_RelativeY = 0;
    g_RelativeZ = 0;
  }
  else if (g_PolygonScreenCache[19999].view_mode == 2) {
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    g_RelativeX = 0;
    g_RelativeY = 0;
    g_RelativeZ = g_ZoomLevel * -0x10;
  }
  engine_matrix_c_buildRotationMatrix_FUN_0050c920(local_20,local_1c,local_18);
  g_TransformMatrix.m[0].z =
       (int)((g_TransformMatrix.m[0].z + (g_TransformMatrix.m[0].z >> 0x1f) * -0x10) -
            (uint)((g_TransformMatrix.m[0].z >> 0x1f) << 3 < 0)) >> 4;
  g_TransformMatrix.m[1].z =
       (int)((g_TransformMatrix.m[1].z + (g_TransformMatrix.m[1].z >> 0x1f) * -0x10) -
            (uint)((g_TransformMatrix.m[1].z >> 0x1f) << 3 < 0)) >> 4;
  g_TransformMatrix.m[2].z =
       (int)((g_TransformMatrix.m[2].z + (g_TransformMatrix.m[2].z >> 0x1f) * -0x10) -
            (uint)((g_TransformMatrix.m[2].z >> 0x1f) << 3 < 0)) >> 4;
  return;
}
