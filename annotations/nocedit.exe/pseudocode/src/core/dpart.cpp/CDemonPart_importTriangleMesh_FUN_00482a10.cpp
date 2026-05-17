// Name: core_dpart.cpp_CDemonPart_importTriangleMesh_FUN_00482a10
// Address: 00482a10
// Address Range: [[00482a10, 00482e3a]]
// Convention: __cdecl
// Signature: int __cdecl core_dpart_cpp_CDemonPart_importTriangleMesh_FUN_00482a10(CDemonPart *this_ptr,int triangle_count,CDemonTriangle *triangles)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

int __cdecl core_dpart_cpp_CDemonPart_importTriangleMesh_FUN_00482a10(CDemonPart *this_ptr,int triangle_count,CDemonTriangle *triangles)

{
  char *pcVar1;
  float fVar2;
  double dVar3;
  int iVar4;
  CVector3f *pCVar5;
  CDemonTriangle *pCVar6;
  int iVar7;
  char local_134 [256];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  this_ptr->face_count = triangle_count;
  this_ptr->vertex_count = triangle_count * 3;
  this_ptr->vertex_group_size = 1;
  if ((20000 < this_ptr->vertex_count) || (20000 < this_ptr->face_count)) {
    _sprintf(local_134,"Too many! %d, %d",this_ptr->vertex_count,this_ptr->face_count);
    g_CurrentLineNumber = 0x267;
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
      iVar7 = 0;
      local_1c = 0xc;
      local_24 = 0;
      local_20 = 0;
      pCVar5 = &triangles->vertex2;
      iVar4 = 0;
      do {
        pCVar6 = triangles + local_18;
        fVar2 = (float)256;
        *(int *)((int)&this_ptr->vertex_positions->x + local_24) =
             (int)ROUND(ROUND((pCVar6->vertex1).x * fVar2));
        *(int *)((int)&this_ptr->vertex_positions->y + local_24) =
             (int)ROUND(ROUND((pCVar6->vertex1).y * fVar2));
        *(int *)((int)&this_ptr->vertex_positions->z + local_24) =
             (int)ROUND(ROUND((pCVar6->vertex1).z * fVar2));
        local_28 = local_18 * 3;
        local_30 = local_28 + 1;
        *(int *)((int)&this_ptr->vertex_positions->x + local_1c) =
             (int)ROUND(ROUND(pCVar5->x * fVar2));
        *(int *)((int)&this_ptr->vertex_positions->y + local_1c) =
             (int)ROUND(ROUND(pCVar5->y * fVar2));
        *(int *)((int)&this_ptr->vertex_positions->z + local_1c) =
             (int)ROUND(ROUND(pCVar5->z * fVar2));
        dVar3 = 256;
        local_2c = local_28 + 2;
        local_34 = local_2c * 0xc;
        this_ptr->vertex_positions[local_2c].x =
             (int)ROUND(ROUND((double)pCVar5[1].x * 256));
        this_ptr->vertex_positions[local_2c].y = (int)ROUND(ROUND((double)pCVar5[1].y * dVar3));
        local_14 = (int)ROUND(ROUND((double)pCVar5[1].z * dVar3));
        this_ptr->vertex_positions[local_2c].z = local_14;
        *(uint *)((int)&this_ptr->face_data->vertex_index_4 + iVar7) = 0xffffffff;
        *(int *)((int)&this_ptr->face_data->vertex_index_1 + iVar7) = local_28;
        *(int *)((int)&this_ptr->face_data->vertex_index_2 + iVar7) = local_30;
        *(int *)((int)&this_ptr->face_data->vertex_index_3 + iVar7) = local_2c;
        *(float *)((int)&g_LoadedVertices[0].vertex.x + local_20) = (pCVar6->vertex1).x;
        *(float *)((int)&g_LoadedVertices[0].vertex.y + local_20) = (pCVar6->vertex1).y;
        *(float *)((int)&g_LoadedVertices[0].vertex.z + local_20) = (pCVar6->vertex1).z;
        g_LoadedVertices[local_30].vertex.x = pCVar5->x;
        g_LoadedVertices[local_30].vertex.y = pCVar5->y;
        g_LoadedVertices[local_30].vertex.z = pCVar5->z;
        g_LoadedVertices[local_2c].vertex.x = pCVar5[1].x;
        g_LoadedVertices[local_2c].vertex.y = pCVar5[1].y;
        fVar2 = pCVar5[1].z;
        pcVar1 = g_ModelPolygonData[0].texture_name + iVar4 + -4;
        pcVar1[0] = '\x01';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
        g_LoadedVertices[local_2c].vertex.z = fVar2;
        *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar4 + 8) = local_2c;
        *(uint *)((int)g_ModelPolygonData[0].vertex_indices + iVar4 + -0x14) = 3;
        *(uint *)((int)g_ModelPolygonData[0].uv_u + iVar4) = 0;
        *(uint *)((int)g_ModelPolygonData[0].uv_v + iVar4) = 0;
        *(uint *)((int)g_ModelPolygonData[0].uv_u + iVar4 + 4) = 0;
        *(uint *)((int)g_ModelPolygonData[0].uv_v + iVar4 + 4) = 0;
        *(uint *)((int)g_ModelPolygonData[0].uv_u + iVar4 + 8) = 0;
        *(uint *)((int)g_ModelPolygonData[0].uv_v + iVar4 + 8) = 0;
        pCVar5 = (CVector3f *)((int)(pCVar5 + 4) + 8);
        *(uint *)((int)g_ModelPolygonData[0].uv_v + iVar4 + 0x40) = 0;
        iVar7 = iVar7 + 0x20;
        *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar4) = local_28;
        *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar4 + 4) = local_30;
        local_24 = local_24 + 0x24;
        g_ModelPolygonData[0].texture_name[iVar4] = '\0';
        g_ModelPolygonData[0].lightmap_name[iVar4] = '\0';
        local_1c = local_1c + 0x24;
        local_20 = local_20 + 0x3c;
        local_18 = local_18 + 1;
        iVar4 = iVar4 + 0x184;
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
