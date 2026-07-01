// Name: core_dcube.cpp_CDemonCube_loadGeometryFromTriangleList_FUN_004570a0
// Address: 004570a0
// MANUAL RECONSTRUCTION
// Address Range: [[004570a0, 00457427]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCube_loadGeometryFromTriangleList_FUN_004570a0(CDemonCube *this_ptr,CDemonTriangle *triangle_data,int triangle_count,CVector3f *min_bounds,CVector3f *max_bounds,uchar *ground_types,uint *voxel_data)

#include "nocturne.h"

void __cdecl core_dcube_cpp_CDemonCube_loadGeometryFromTriangleList_FUN_004570a0(CDemonCube *this_ptr,CDemonTriangle *triangle_data,int triangle_count,CVector3f *min_bounds,CVector3f *max_bounds,uchar *ground_types,uint *voxel_data)

{
  CVector3f *pCVar3;
  int iVar6;
  char local_120 [256];

  if (&this_ptr->min_bounds != min_bounds) {
    this_ptr->min_bounds = *min_bounds;
  }
  if (&this_ptr->max_bounds != max_bounds) {
    this_ptr->max_bounds = *max_bounds;
  }
  if (triangle_count != 0) {
    g_VertexCount = triangle_count * 3;
    g_PolygonCount = triangle_count;
    if ((20000 < g_VertexCount) || (20000 < triangle_count)) {
      _sprintf(local_120,"Too many! %d, %d",g_VertexCount,triangle_count);
      g_CurrentFilename = "..\\core\\dcube.cpp";
      g_CurrentLineNumber = 1814;
      core_main_c_displayErrorAndQuit_FUN_00506f10(local_120);
    }
    for (iVar6 = 0; iVar6 < triangle_count; iVar6 = iVar6 + 1) {
      g_LoadedVertices[iVar6 * 3 + 0].vertex = triangle_data[iVar6].vertex1;
      g_LoadedVertices[iVar6 * 3 + 1].vertex = triangle_data[iVar6].vertex2;
      g_LoadedVertices[iVar6 * 3 + 2].vertex = triangle_data[iVar6].vertex3;

      g_ModelPolygonData[iVar6].polygon_type = 1;
      g_ModelPolygonData[iVar6].vertex_indices_count = 3;
      g_ModelPolygonData[iVar6].vertex_indices[0] = iVar6 * 3;
      g_ModelPolygonData[iVar6].vertex_indices[1] = iVar6 * 3 + 1;
      g_ModelPolygonData[iVar6].vertex_indices[2] = iVar6 * 3 + 2;
      g_ModelPolygonData[iVar6].uv_u[0] = 0;
      g_ModelPolygonData[iVar6].uv_u[1] = 0;
      g_ModelPolygonData[iVar6].uv_u[2] = 0;
      g_ModelPolygonData[iVar6].uv_v[0] = 0;
      g_ModelPolygonData[iVar6].uv_v[1] = 0;
      g_ModelPolygonData[iVar6].uv_v[2] = 0;
      g_ModelPolygonData[iVar6].part_assignment = 0;
      g_ModelPolygonData[iVar6].texture_name[0] = '\0';
      g_ModelPolygonData[iVar6].lightmap_name[0] = '\0';
    }
    shape_design_c_calculateVertexNormals_FUN_0045be40();
    shape_design_c_vertexReducer_FUN_00467850(0.01,-1.0,-1);
    this_ptr->vertex_count = g_VertexCount;
    iVar6 = g_PolygonCount;
    this_ptr->triangle_count = g_PolygonCount;
    if ((iVar6 == 0) || (this_ptr->vertex_count == 0)) {
      this_ptr->triangle_count = 0;
      this_ptr->vertex_count = 0;
      return;
    }
    core_dcube_cpp_CDemonCube_allocGeometryMemory_FUN_00456840(this_ptr);
    for (iVar6 = 0; iVar6 < this_ptr->vertex_count; iVar6 = iVar6 + 1) {
      this_ptr->vertex_buffer[iVar6] = g_LoadedVertices[iVar6].vertex;
    }
    for (iVar6 = 0; iVar6 < this_ptr->triangle_count; iVar6 = iVar6 + 1) {
      pCVar3 = this_ptr->vertex_buffer;
      core_dcube_cpp_CDemonCubeTriangle_init_FUN_00455430
                (&this_ptr->triangle_buffer[iVar6],
                 pCVar3 + g_ModelPolygonData[iVar6].vertex_indices[0],
                 pCVar3 + g_ModelPolygonData[iVar6].vertex_indices[1],
                 pCVar3 + g_ModelPolygonData[iVar6].vertex_indices[2]);
      ((uchar *)this_ptr->ground_type_memory)[iVar6] = ground_types[iVar6];
    }
    memcpy(this_ptr->voxel_buffer1, voxel_data, sizeof(SVoxelGrid));
  }
  return;
}
