// Name: core_dpart.cpp_CDemonPart_importTriangleMesh_FUN_00482a10
// Address: 00482a10
// Address Range: [[00482a10, 00482e3a]]
// Convention: __cdecl
// Signature: int __cdecl core_dpart_cpp_CDemonPart_importTriangleMesh_FUN_00482a10 (CDemonPart *this_ptr,int triangle_count,int enable_alloc,int source_triangle_count, CDemonTriangle *triangle_data)

#include "nocturne.h"

int __cdecl
core_dpart_cpp_CDemonPart_importTriangleMesh_FUN_00482a10
          (CDemonPart *this_ptr,int triangle_count,int enable_alloc,int source_triangle_count,
          CDemonTriangle *triangle_data)

{
  char *pcVar1;
  float fVar2;
  CVector3i *pCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int *piVar9;
  float *pfVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  char local_134 [224];
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  int local_18;
  
  this_ptr->face_count = triangle_count;
  this_ptr->vertex_count = triangle_count * 3;
  this_ptr->vertex_group_size = 1;
  if ((20000 < this_ptr->vertex_count) || (20000 < this_ptr->face_count)) {
    sprintf
              (local_134,"Too many! %d, %d",this_ptr->vertex_count,this_ptr->face_count);
    g_CurrentLineNumber = 0x267;
    g_CurrentFilename = "..\\core\\dpart.cpp";
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_134);
  }
  g_VertexCount = this_ptr->vertex_count;
  iVar7 = this_ptr->face_count;
  g_PolygonCount = iVar7;
  if (triangle_count != 0) {
    core_dpart_cpp_CDemonPart_alloc_FUN_00482180(this_ptr);
    local_18 = 0;
    if (0 < triangle_count) {
      iVar11 = 0;
      local_1c = 0xc;
      local_24 = 0;
      local_20 = 0;
      pfVar8 = (float *)(enable_alloc + 0xc);
      iVar7 = 0;
      do {
        pfVar10 = (float *)(local_18 * 0x38 + enable_alloc);
        fVar2 = (float)256;
        piVar9 = (int *)((int)&this_ptr->vertex_positions->x + local_24);
        dVar12 = round((double)(*pfVar10 * fVar2));
        iVar4 = local_28;
        local_18 = (int)ROUND(dVar12);
        *piVar9 = local_18;
        pCVar3 = this_ptr->vertex_positions;
        dVar12 = round((double)(pfVar10[1] * fVar2));
        iVar6 = local_2c;
        local_1c = (int)ROUND(dVar12);
        *(int *)((int)&pCVar3->y + iVar4) = local_1c;
        pCVar3 = this_ptr->vertex_positions;
        dVar12 = round((double)(pfVar10[2] * fVar2));
        iVar5 = local_28;
        iStack_40 = (int)ROUND(dVar12);
        *(int *)((int)&pCVar3->z + iVar6) = iStack_40;
        local_34 = local_24 * 3;
        iStack_3c = local_34 + 1;
        pCVar3 = this_ptr->vertex_positions;
        dVar12 = round((double)(*pfVar8 * fVar2));
        iVar4 = local_2c;
        iStack_44 = (int)ROUND(dVar12);
        *(int *)((int)&pCVar3->x + iVar5) = iStack_44;
        pCVar3 = this_ptr->vertex_positions;
        dVar12 = round((double)(pfVar8[1] * fVar2));
        iVar6 = local_30;
        iStack_48 = (int)ROUND(dVar12);
        *(int *)((int)&pCVar3->y + iVar4) = iStack_48;
        pCVar3 = this_ptr->vertex_positions;
        dVar12 = round((double)(pfVar8[2] * fVar2));
        *(int *)((int)&pCVar3->z + iVar6) = (int)ROUND(dVar12);
        dVar12 = 256;
        iVar6 = iStack_40 + 2;
        iStack_4c = iVar6 * 0xc;
        pCVar3 = this_ptr->vertex_positions;
        iStack_44 = iVar6;
        dVar13 = round((double)pfVar8[3] * 256);
        iVar4 = iStack_50;
        local_30 = (int)ROUND(dVar13);
        pCVar3[iVar6].x = local_30;
        pCVar3 = this_ptr->vertex_positions;
        dVar13 = round((double)pfVar8[4] * dVar12);
        iVar6 = iStack_54;
        local_34 = (int)ROUND(dVar13);
        *(int *)((int)&pCVar3->y + iVar4) = local_34;
        pCVar3 = this_ptr->vertex_positions;
        local_134[0] = -0x6e;
        local_134[1] = ',';
        local_134[2] = 'H';
        local_134[3] = '\0';
        dVar12 = round((double)pfVar8[5] * dVar12);
        iStack_38 = (int)ROUND(dVar12);
        *(int *)((int)&pCVar3->z + iVar6) = iStack_38;
        *(uint *)((int)&this_ptr->face_data->material + iVar11) = 0xffffffff;
        *(int *)((int)&this_ptr->face_data->vertex_index_1 + iVar11) = iStack_4c;
        *(int *)((int)&this_ptr->face_data->vertex_index_2 + iVar11) = iStack_54;
        *(int *)((int)&this_ptr->face_data->vertex_index_3 + iVar11) = iStack_50;
        *(float *)((int)&g_LoadedVertices[0].vertex.x + iStack_44) = *pfVar10;
        *(float *)((int)&g_LoadedVertices[0].vertex.y + iStack_44) = pfVar10[1];
        *(float *)((int)&g_LoadedVertices[0].vertex.z + iStack_44) = pfVar10[2];
        g_LoadedVertices[iStack_54].vertex.x = *pfVar8;
        g_LoadedVertices[iStack_54].vertex.y = pfVar8[1];
        g_LoadedVertices[iStack_54].vertex.z = pfVar8[2];
        g_LoadedVertices[iStack_50].vertex.x = pfVar8[3];
        g_LoadedVertices[iStack_50].vertex.y = pfVar8[4];
        fVar2 = pfVar8[5];
        pcVar1 = g_ModelPolygonData[0].texture_name + iVar7 + -4;
        pcVar1[0] = '\x01';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
        g_LoadedVertices[iStack_50].vertex.z = fVar2;
        *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar7 + 8) = iStack_50;
        *(uint *)((int)g_ModelPolygonData[0].vertex_indices + iVar7 + -0x14) = 3;
        *(uint *)((int)g_ModelPolygonData[0].uv_u + iVar7) = 0;
        *(uint *)((int)g_ModelPolygonData[0].uv_v + iVar7) = 0;
        *(uint *)((int)g_ModelPolygonData[0].uv_u + iVar7 + 4) = 0;
        *(uint *)((int)g_ModelPolygonData[0].uv_v + iVar7 + 4) = 0;
        *(uint *)((int)g_ModelPolygonData[0].uv_u + iVar7 + 8) = 0;
        *(uint *)((int)g_ModelPolygonData[0].uv_v + iVar7 + 8) = 0;
        pfVar8 = pfVar8 + 0xe;
        *(uint *)((int)g_ModelPolygonData[0].uv_v + iVar7 + 0x40) = 0;
        iVar11 = iVar11 + 0x20;
        *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar7) = iStack_4c;
        *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar7 + 4) = iStack_54;
        iStack_48 = iStack_48 + 0x24;
        g_ModelPolygonData[0].texture_name[iVar7] = '\0';
        g_ModelPolygonData[0].lightmap_name[iVar7] = '\0';
        iStack_40 = iStack_40 + 0x24;
        iStack_44 = iStack_44 + 0x3c;
        iStack_3c = iStack_3c + 1;
        iVar7 = iVar7 + 0x184;
      } while (iStack_3c < local_1c);
    }
    core_dpart_cpp_CDemonPart_processAndFinalize_FUN_00482e40(this_ptr,1,1);
    iVar7 = 0;
    if (0 < this_ptr->face_count) {
      do {
        iVar7 = iVar7 + 1;
      } while (iVar7 < this_ptr->face_count);
    }
  }
  return iVar7;
}
