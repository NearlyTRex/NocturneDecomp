// Name: shape_edittool.cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050
// Address: 004a2050
// MANUAL RECONSTRUCTION
// Address Range: [[004a2050, 004a250a] [00602c18, 00602e33]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050(CEditorTools *this_ptr,CVector3f *corner1,CVector3f *corner2,int color_value)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050(CEditorTools *this_ptr,CVector3f *corner1,CVector3f *corner2,int color_value)

{
  CVector3f corners[8];
  CVector3i pt;
  uint i;
  uint axis_bit;
  uint other;

  __arrinit(corners, 8, &g_CVectorTypeInfo);

  // Build the 8 cube corners. Bit N of i selects corner1 (1) vs corner2 (0) for axis N.
  for (i = 0; i < 8; i++) {
    corners[i].x = (i & 1) ? corner1->x : corner2->x;
    corners[i].y = (i & 2) ? corner1->y : corner2->y;
    corners[i].z = (i & 4) ? corner1->z : corner2->z;
  }

  g_ActiveRenderColor = color_value;

  // For each corner, draw 3 short stub edges (one per axis): a line from the corner
  // to a point 20% along the way to the adjacent corner across that axis.
  for (i = 0; i < 8; i++) {
    for (axis_bit = 1; axis_bit <= 4; axis_bit <<= 1) {
      other = i ^ axis_bit;
      pt.x = (int)ROUND(corners[i].x * 256.0f);
      pt.y = (int)ROUND(corners[i].y * 256.0f);
      pt.z = (int)ROUND(corners[i].z * 256.0f);
      engine_matrix_c_transformToCache_FUN_0050cd70(0, &pt);
      pt.x = (int)ROUND((corners[i].x * 0.8f + corners[other].x * 0.2f) * 256.0f);
      pt.y = (int)ROUND((corners[i].y * 0.8f + corners[other].y * 0.2f) * 256.0f);
      pt.z = (int)ROUND((corners[i].z * 0.8f + corners[other].z * 0.2f) * 256.0f);
      engine_matrix_c_transformToCache_FUN_0050cd70(1, &pt);
      engine_3d_c_clipAndDrawLine2D_FUN_00407d70(g_RenderVertexBuffer[0], g_RenderVertexBuffer[1]);
    }
  }
  return;
}
