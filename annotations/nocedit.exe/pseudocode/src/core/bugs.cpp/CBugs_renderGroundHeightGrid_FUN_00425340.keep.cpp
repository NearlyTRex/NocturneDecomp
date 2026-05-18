// Name: core_bugs.cpp_CBugs_renderGroundHeightGrid_FUN_00425340
// Address: 00425340
// MANUAL RECONSTRUCTION
// Address Range: [[00425340, 004254aa]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_renderGroundHeightGrid_FUN_00425340(CBugs *this_ptr)

#include "nocturne.h"

void __cdecl core_bugs_cpp_CBugs_renderGroundHeightGrid_FUN_00425340(CBugs *this_ptr)

{
  int vertex_index1;
  int vertex_index2_00;
  int iVar3;
  int iVar4;
  int vertex_index2;
  CVector3i local_3c;
  int local_28;
  int local_24;
  float fVar1;
  float fVar2;
  
  local_28 = 0;
  do {
    fVar2 = (float)local_28 * 0.5f;
    fVar1 = this_ptr->grid_origin_x;
    iVar3 = 0;
    do {
      local_3c.x = (int)ROUND((fVar2 + fVar1) * 256.0f);
      local_3c.y = (int)ROUND((this_ptr->ground_heights[local_28][iVar3] + (float)0.25) *
                              256.0f);
      local_3c.z = (int)ROUND(((float)iVar3 * 0.5f + this_ptr->grid_origin_z) *
                              256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr[local_28 + iVar3 * 0xc].projected_vertex,
                 &local_3c);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xc);
    local_28 = local_28 + 1;
  } while (local_28 < 0xc);
  engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960(g_CDemonRendererPtr2,-1);
  local_24 = 0xc;
  do {
    iVar4 = 1;
    vertex_index2_00 = local_24;
    vertex_index2 = local_24 + -0xb;
    do {
      vertex_index1 = local_24 + iVar4;
      engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
                (g_CDemonRendererPtr2,vertex_index1,vertex_index2_00);
      vertex_index2_00 = vertex_index2_00 + 1;
      iVar4 = iVar4 + 1;
      engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
                (g_CDemonRendererPtr2,vertex_index1,vertex_index2);
      vertex_index2 = vertex_index2 + 1;
    } while (iVar4 < 0xc);
    local_24 = local_24 + 0xc;
  } while (local_24 != 0x90);
  return;
}
