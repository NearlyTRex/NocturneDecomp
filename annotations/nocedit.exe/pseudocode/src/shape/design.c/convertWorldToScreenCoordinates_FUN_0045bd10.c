// Name: shape_design.c_convertWorldToScreenCoordinates_FUN_0045bd10
// Address: 0045bd10
// Address Range: [[0045bd10, 0045be3d]]
// Convention: __stack_esi
// Signature: SVertexData * __stack_esi shape_design_c_convertWorldToScreenCoordinates_FUN_0045bd10(SScreenCoord *input_coords,SVertexData *output_vertex)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0045be1d) */

SVertexData * __stack_esi shape_design_c_convertWorldToScreenCoordinates_FUN_0045bd10(SScreenCoord *input_coords,SVertexData *output_vertex)

{
  float local_38;
  float local_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fVar2;
  float fVar1;
  
  fVar1 = (float)g_ZoomLevel *
          (((float)input_coords->x - (float)g_WindowWidth * (float)0.5) /
          ((float)g_WindowWidth * (float)0.5)) * 0.00390625f *
          (((float)g_WindowWidth * (float)3) / (float)g_WindowHeight) *
          (float)0.25;
  fVar2 = (float)g_ZoomLevel *
          (-((float)input_coords->y - (float)g_WindowHeight * (float)0.5) /
          ((float)g_WindowHeight * (float)0.5)) * 0.00390625f;
  if (g_PolygonScreenCache[19999].view_mode == 0) {
    local_34 = (float)g_StoredWorldYCoordinate;
    local_38 = fVar1;
    local_30 = fVar2;
  }
  else if ((uint)g_PolygonScreenCache[19999].view_mode < 2) {
    local_38 = (float)g_StoredWorldYCoordinate;
    local_34 = fVar2;
    local_30 = fVar1;
  }
  else if (g_PolygonScreenCache[19999].view_mode == 2) {
    local_30 = (float)g_StoredWorldYCoordinate;
    local_38 = fVar1;
    local_34 = fVar2;
  }
  (output_vertex->vertex).x = local_38;
  (output_vertex->vertex).y = local_34;
  (output_vertex->vertex).z = local_30;
  output_vertex->u = fStack_2c;
  output_vertex->v = fStack_28;
  return output_vertex;
}
