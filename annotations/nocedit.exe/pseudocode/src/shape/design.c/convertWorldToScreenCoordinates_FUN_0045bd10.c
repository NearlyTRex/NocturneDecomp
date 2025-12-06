// Name: shape_design.c_convertWorldToScreenCoordinates_FUN_0045bd10
// Address: 0045bd10
// Address Range: [[0045bd10, 0045be3d]]
// Convention: __cdecl
// Signature: void * shape_design.c_convertWorldToScreenCoordinates_FUN_0045bd10(SScreenCoord * input_coords, SVertexData * output_vertex)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0045be1d) */

void * __cdecl
shape_design_c_convertWorldToScreenCoordinates_FUN_0045bd10
          (SScreenCoord *input_coords,SVertexData *output_vertex)

{
  float fVar1;
  float fVar2;
  float *unaff_ESI;
  float local_38;
  float local_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  
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
  *unaff_ESI = local_38;
  unaff_ESI[1] = local_34;
  unaff_ESI[2] = local_30;
  unaff_ESI[3] = fStack_2c;
  unaff_ESI[4] = fStack_28;
  return unaff_ESI;
}
