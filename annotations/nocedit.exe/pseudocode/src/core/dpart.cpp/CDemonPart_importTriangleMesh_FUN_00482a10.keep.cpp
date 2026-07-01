// Name: core_dpart.cpp_CDemonPart_importTriangleMesh_FUN_00482a10
// Address: 00482a10
// MANUAL RECONSTRUCTION
// Address Range: [[00482a10, 00482e3a]]
// Convention: __cdecl
// Signature: int __cdecl core_dpart_cpp_CDemonPart_importTriangleMesh_FUN_00482a10(CDemonPart *this_ptr,int triangle_count,CDemonTriangle *triangles)

#include "nocturne.h"

int __cdecl core_dpart_cpp_CDemonPart_importTriangleMesh_FUN_00482a10(CDemonPart *this_ptr,int triangle_count,CDemonTriangle *triangles)

{
  float fVar2;
  double dVar3;
  int iVar4;
  CDemonTriangle *pCVar6;
  char local_134 [256];
  int local_30;
  int local_2c;
  int local_28;
  int local_18;
  
  this_ptr->face_count = triangle_count;
  this_ptr->vertex_count = triangle_count * 3;
  this_ptr->vertex_group_size = 1;
  if ((20000 < this_ptr->vertex_count) || (20000 < this_ptr->face_count)) {
    _sprintf(local_134,"Too many! %d, %d",this_ptr->vertex_count,this_ptr->face_count);
    g_CurrentLineNumber = 615;
    g_CurrentFilename = "..\\core\\dpart.cpp";
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_134);
  }
  g_VertexCount = this_ptr->vertex_count;
  iVar4 = this_ptr->face_count;
  g_PolygonCount = iVar4;
  if (triangle_count != 0) {
    core_dpart_cpp_CDemonPart_alloc_FUN_00482180(this_ptr);
    local_18 = 0;
    if (0 < triangle_count) {
      do {
        pCVar6 = triangles + local_18;
        fVar2 = (float)256;
        dVar3 = 256;
        local_28 = local_18 * 3;
        local_30 = local_28 + 1;
        local_2c = local_28 + 2;
        this_ptr->vertex_positions[local_28].x = (int)ROUND(ROUND((pCVar6->vertex1).x * fVar2));
        this_ptr->vertex_positions[local_28].y = (int)ROUND(ROUND((pCVar6->vertex1).y * fVar2));
        this_ptr->vertex_positions[local_28].z = (int)ROUND(ROUND((pCVar6->vertex1).z * fVar2));
        this_ptr->vertex_positions[local_30].x = (int)ROUND(ROUND((pCVar6->vertex2).x * fVar2));
        this_ptr->vertex_positions[local_30].y = (int)ROUND(ROUND((pCVar6->vertex2).y * fVar2));
        this_ptr->vertex_positions[local_30].z = (int)ROUND(ROUND((pCVar6->vertex2).z * fVar2));
        this_ptr->vertex_positions[local_2c].x = (int)ROUND(ROUND((double)(pCVar6->vertex3).x * 256));
        this_ptr->vertex_positions[local_2c].y = (int)ROUND(ROUND((double)(pCVar6->vertex3).y * dVar3));
        this_ptr->vertex_positions[local_2c].z = (int)ROUND(ROUND((double)(pCVar6->vertex3).z * dVar3));
        this_ptr->face_data[local_18].vertex_index_4 = 0xffffffff;
        this_ptr->face_data[local_18].vertex_index_1 = local_28;
        this_ptr->face_data[local_18].vertex_index_2 = local_30;
        this_ptr->face_data[local_18].vertex_index_3 = local_2c;
        g_LoadedVertices[local_28].vertex = pCVar6->vertex1;
        g_LoadedVertices[local_30].vertex = pCVar6->vertex2;
        g_LoadedVertices[local_2c].vertex = pCVar6->vertex3;
        g_ModelPolygonData[local_18].polygon_type = 1;
        g_ModelPolygonData[local_18].vertex_indices[0] = local_28;
        g_ModelPolygonData[local_18].vertex_indices[1] = local_30;
        g_ModelPolygonData[local_18].vertex_indices[2] = local_2c;
        g_ModelPolygonData[local_18].vertex_indices_count = 3;
        g_ModelPolygonData[local_18].uv_u[0] = 0.0f;
        g_ModelPolygonData[local_18].uv_v[0] = 0.0f;
        g_ModelPolygonData[local_18].uv_u[1] = 0.0f;
        g_ModelPolygonData[local_18].uv_v[1] = 0.0f;
        g_ModelPolygonData[local_18].uv_u[2] = 0.0f;
        g_ModelPolygonData[local_18].uv_v[2] = 0.0f;
        g_ModelPolygonData[local_18].part_assignment = 0;
        g_ModelPolygonData[local_18].texture_name[0] = '\0';
        g_ModelPolygonData[local_18].lightmap_name[0] = '\0';
        local_18 = local_18 + 1;
      } while (local_18 < triangle_count);
    }
    core_dpart_cpp_CDemonPart_processAndFinalize_FUN_00482e40(this_ptr,1,1);
    iVar4 = 0;
    if (0 < this_ptr->face_count) {
      do {
        iVar4 = iVar4 + 1;
      } while (iVar4 < this_ptr->face_count);
    }
  }
  return iVar4;
}
