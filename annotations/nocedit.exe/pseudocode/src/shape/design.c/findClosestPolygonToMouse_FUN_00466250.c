// Name: shape_design.c_findClosestPolygonToMouse_FUN_00466250
// Address: 00466250
// Address Range: [[00466250, 0046660c]]
// Convention: __cdecl
// Signature: int __cdecl shape_design_c_findClosestPolygonToMouse_FUN_00466250(void)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

int __cdecl shape_design_c_findClosestPolygonToMouse_FUN_00466250(void)

{
  int iVar1;
  CVector3i local_104;
  SClipPlane local_f0 [5];
  char local_a0 [80];
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  
  if (g_PolygonCount == 0) {
    local_50 = -1;
  }
  else {
    for (local_4c = 0; local_4c < g_VertexCount; local_4c = local_4c + 1) {
      local_104.x = (int)ROUND(ROUND(g_LoadedVertices[local_4c].vertex.x * 256.0f
                                    ));
      local_104.y = (int)ROUND(ROUND(g_LoadedVertices[local_4c].vertex.y * 256.0f
                                    ));
      local_104.z = (int)ROUND(ROUND(g_LoadedVertices[local_4c].vertex.z * 256.0f
                                    ));
      engine_matrix_c_transformToCache_FUN_0050cd70(local_4c,&local_104);
    }
    for (local_4c = 0; local_4c < g_PolygonCount; local_4c = local_4c + 1) {
      local_38 = local_4c;
      local_48 = 0;
      for (local_3c = 0; local_3c < (int)g_ModelPolygonData[local_4c].vertex_indices_count;
          local_3c = local_3c + 1) {
        if ((int)(g_RenderVertexBuffer[g_ModelPolygonData[local_4c].vertex_indices[local_3c]].
                  projected_vertex.screen_x & -0x80000000) != 0) {
          local_48 = 1;
        }
      }
      if (local_48 == 0) {
        local_30 = 0;
        for (local_3c = 0; local_3c < (int)g_ModelPolygonData[local_4c].vertex_indices_count;
            local_3c = local_3c + 1) {
          local_30 = local_30 +
                     (g_RenderVertexBuffer[g_ModelPolygonData[local_4c].vertex_indices[local_3c]].
                      projected_vertex.screen_x >> 0x10);
        }
        g_PolygonScreenCache[local_4c].center_x =
             local_30 / (int)g_ModelPolygonData[local_4c].vertex_indices_count;
        local_30 = 0;
        for (local_3c = 0; local_3c < (int)g_ModelPolygonData[local_4c].vertex_indices_count;
            local_3c = local_3c + 1) {
          local_30 = local_30 +
                     (g_RenderVertexBuffer[g_ModelPolygonData[local_4c].vertex_indices[local_3c]].
                      projected_vertex.screen_y >> 0x10);
        }
        g_PolygonScreenCache[local_4c].center_y =
             local_30 / (int)g_ModelPolygonData[local_4c].vertex_indices_count;
      }
      else {
        g_PolygonScreenCache[local_4c].center_x = g_WindowWidth * 2;
        g_PolygonScreenCache[local_4c].center_y = g_WindowHeight * 2;
      }
    }
    local_14 = 0x40000000;
    local_34 = 0xffffffff;
    local_28 = -1;
    local_24 = -1;
    local_20 = -1;
    for (local_4c = 0; local_4c < g_PolygonCount; local_4c = local_4c + 1) {
      local_38 = local_4c;
      local_44 = g_MouseX - g_PolygonScreenCache[local_4c].center_x;
      local_40 = g_MouseY - g_PolygonScreenCache[local_4c].center_y;
      local_18 = local_44 * local_44 + local_40 * local_40;
      local_f0[0].A =
           (int)ROUND(ROUND(g_ModelPolygonData[local_4c].normal.x * 65535.0f));
      local_f0[0].B =
           (int)ROUND(ROUND(g_ModelPolygonData[local_4c].normal.y * 65535.0f));
      local_f0[0].C =
           (int)ROUND(ROUND(g_ModelPolygonData[local_4c].normal.z * 65535.0f));
      local_f0[0].D =
           (int)ROUND(ROUND(g_ModelPolygonData[local_4c].plane_distance * 65535.0f
                            * 256.0f));
      if ((local_18 < local_14) &&
         (iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(local_f0), iVar1 != 0)) {
        local_14 = local_18;
        g_PolygonScreenCache[local_4c].distance_squared = local_18;
        local_20 = local_24;
        local_24 = local_28;
        local_28 = local_4c;
      }
    }
    local_34 = local_28;
    local_1c = 1;
    local_3c = local_28;
    _sprintf(local_a0,"mX: %d  mY: %d",g_MouseX,g_MouseY);
    engine_2d_c_drawTextColor_FUN_00402430(local_a0,0,g_WindowHeight + -0x37);
    local_50 = local_34;
  }
  return local_50;
}
