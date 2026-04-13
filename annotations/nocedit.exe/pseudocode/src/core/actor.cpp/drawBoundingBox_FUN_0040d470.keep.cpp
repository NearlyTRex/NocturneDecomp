// Name: core_actor.cpp_drawBoundingBox_FUN_0040d470
// Address: 0040d470
// MANUAL RECONSTRUCTION
// Address Range: [[0040d470, 0040d936] [0060d1a5, 0060d3b8]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_drawBoundingBox_FUN_0040d470(CBoundingBox3D *bbox,int line_color)

#include "nocturne.h"

void __cdecl core_actor_cpp_drawBoundingBox_FUN_0040d470(CBoundingBox3D *bbox,int line_color)
{
  static const uint axis_masks[3] = {1, 2, 4};

  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  CVector3f *pCVar7;
  CVector3f *pCVar8;
  uint corner_index;
  int axis;
  CVector3f adjacent_corner;
  CVector3f current_corner;
  CVector3i current_fixed;
  CVector3i midpoint_fixed;
  SRenderVertex *pSVar12;

  g_ActiveRenderColor = line_color;

  for (corner_index = 0; (int)corner_index < 8; corner_index = corner_index + 1) {
    for (axis = 0; axis < 3; axis = axis + 1) {
      pCVar7 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0(bbox, &adjacent_corner, corner_index ^ axis_masks[axis]);
      pCVar8 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0(bbox, &current_corner, corner_index);

      fVar1 = pCVar7->x * 0.2f;
      fVar2 = pCVar7->y * 0.2f;
      fVar3 = 0.2f * pCVar7->z;
      fVar4 = pCVar8->x * 0.8f;
      fVar5 = pCVar8->y * 0.8f;
      fVar6 = 0.8f * pCVar8->z;

      current_fixed.x = (int)ROUND(pCVar8->x * 256.0f);
      current_fixed.y = (int)ROUND(pCVar8->y * 256.0f);
      current_fixed.z = (int)ROUND(pCVar8->z * 256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr1->vertex_buffer_ptr->projected_vertex, &current_fixed);

      midpoint_fixed.x = (int)ROUND((fVar4 + fVar1) * 256.0f);
      midpoint_fixed.y = (int)ROUND((fVar5 + fVar2) * 256.0f);
      midpoint_fixed.z = (int)ROUND((fVar6 + fVar3) * 256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr1->vertex_buffer_ptr[1].projected_vertex, &midpoint_fixed);

      pSVar12 = g_CDemonRendererPtr1->vertex_buffer_ptr;
      engine_3d_c_clipAndDrawLine2D_FUN_00407d70(pSVar12[0], pSVar12[1]);
    }
  }
  return;
}
