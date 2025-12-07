// Name: core_dpart.cpp_CDemonPart_importTriangleMesh_FUN_00482a10
// Address: 00482a10
// Address Range: [[00482a10, 00482e3a]]
// Convention: __cdecl
// Signature: int core_dpart.cpp_CDemonPart_importTriangleMesh_FUN_00482a10(CDemonPart * this_ptr, int triangle_count, int enable_alloc, int source_triangle_count, CDemonTriangle * triangle_data)

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
  float *pfVar5;
  int iVar6;
  BADSPACEBASE *in_ESP;
  float *pfVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int unaff_retaddr;
  int in_stack_00000018;
  int local_24;
  int local_20;
  int local_18;
  int iVar13;
  
  this_ptr->face_count = triangle_count;
  this_ptr->vertex_count = triangle_count * 3;
  this_ptr->vertex_group_size = 1;
  if ((20000 < this_ptr->vertex_count) || (20000 < this_ptr->face_count)) {
    crt_stdio_c_sprintf_FUN_005fdbd0
              (&stack0xfffffecc,"Too many! %d, %d",this_ptr->vertex_count,this_ptr->face_count)
    ;
    g_CurrentLineNumber = 0x267;
    g_CurrentFilename = "..\\core\\dpart.cpp";
    core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xfffffed0);
  }
  g_VertexCount = this_ptr->vertex_count;
  iVar13 = this_ptr->face_count;
  g_PolygonCount = iVar13;
  if (source_triangle_count != 0) {
    core_dpart_cpp_CDemonPart_alloc_FUN_00482180(this_ptr);
    iVar13 = 0;
    if (0 < (int)triangle_data) {
      iVar8 = 0;
      local_18 = 0;
      pfVar5 = (float *)(in_stack_00000018 + 0xc);
      iVar6 = 0;
      do {
        pfVar7 = (float *)(iVar13 * 0x38 + in_stack_00000018);
        pCVar3 = this_ptr->vertex_positions;
        fVar2 = (float)256;
        dVar9 = crt_math_c_round_FUN_005fe6b0((double)(*pfVar7 * fVar2));
        in_stack_00000018 = (int)ROUND(dVar9);
        *(int *)((int)&pCVar3->x + local_18) = in_stack_00000018;
        pCVar3 = this_ptr->vertex_positions;
        dVar10 = crt_math_c_round_FUN_005fe6b0((double)(pfVar7[1] * fVar2));
        *(int *)((int)&pCVar3->y + triangle_count) = (int)ROUND(dVar10);
        pCVar3 = this_ptr->vertex_positions;
        dVar9 = crt_math_c_round_FUN_005fe6b0((double)(pfVar7[2] * fVar2));
        iVar13 = (int)ROUND(dVar9);
        *(int *)(this_ptr->format + (int)&pCVar3->z) = iVar13;
        pCVar3 = this_ptr->vertex_positions;
        dVar9 = crt_math_c_round_FUN_005fe6b0((double)(*pfVar5 * fVar2));
        *(int *)((int)&pCVar3->x + triangle_count) = (int)ROUND(dVar9);
        pCVar3 = this_ptr->vertex_positions;
        dVar11 = crt_math_c_round_FUN_005fe6b0((double)(pfVar5[1] * fVar2));
        *(int *)((int)&pCVar3->y + (int)this_ptr->format) = (int)ROUND(dVar11);
        pCVar3 = this_ptr->vertex_positions;
        dVar9 = crt_math_c_round_FUN_005fe6b0((double)(pfVar5[2] * fVar2));
        *(int *)((int)&pCVar3->z + unaff_retaddr) = (int)ROUND(dVar9);
        dVar9 = 256;
        iVar4 = (iVar13 + 2) * 0xc;
        pCVar3 = this_ptr->vertex_positions;
        dVar12 = crt_math_c_round_FUN_005fe6b0((double)pfVar5[3] * 256);
        unaff_retaddr = (int)ROUND(dVar12);
        pCVar3[iVar13 + 2].x = unaff_retaddr;
        pCVar3 = this_ptr->vertex_positions;
        dVar12 = crt_math_c_round_FUN_005fe6b0((double)pfVar5[4] * dVar9);
        *(int *)((int)&pCVar3->y + local_20) = (int)ROUND(dVar12);
        pCVar3 = this_ptr->vertex_positions;
        dVar9 = crt_math_c_round_FUN_005fe6b0((double)pfVar5[5] * dVar9);
        *(int *)((int)&pCVar3->z + local_24) = (int)ROUND(dVar9);
        *(uint *)((int)&this_ptr->face_data->material + iVar8) = 0xffffffff;
        *(int *)((int)&this_ptr->face_data->vertex_index_1 + iVar8) = iVar4;
        *(int *)((int)&this_ptr->face_data->vertex_index_2 + iVar8) = local_24;
        *(int *)((int)&this_ptr->face_data->vertex_index_3 + iVar8) = local_20;
        *(float *)((int)&g_LoadedVertices[0].vertex.x + iVar13 + 2) = *pfVar7;
        *(float *)((int)&g_LoadedVertices[0].vertex.y + iVar13 + 2) = pfVar7[1];
        *(float *)((int)&g_LoadedVertices[0].vertex.z + iVar13 + 2) = pfVar7[2];
        g_LoadedVertices[local_24].vertex.x = *pfVar5;
        g_LoadedVertices[local_24].vertex.y = pfVar5[1];
        g_LoadedVertices[local_24].vertex.z = pfVar5[2];
        g_LoadedVertices[local_20].vertex.x = pfVar5[3];
        g_LoadedVertices[local_20].vertex.y = pfVar5[4];
        fVar2 = pfVar5[5];
        pcVar1 = g_ModelPolygonData[0].texture_name + iVar6 + -4;
        pcVar1[0] = '\x01';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
        g_LoadedVertices[local_20].vertex.z = fVar2;
        *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar6 + 8) = local_20;
        *(uint *)((int)g_ModelPolygonData[0].vertex_indices + iVar6 + -0x14) = 3;
        *(uint *)((int)g_ModelPolygonData[0].uv_u + iVar6) = 0;
        *(uint *)((int)g_ModelPolygonData[0].uv_v + iVar6) = 0;
        *(uint *)((int)g_ModelPolygonData[0].uv_u + iVar6 + 4) = 0;
        *(uint *)((int)g_ModelPolygonData[0].uv_v + iVar6 + 4) = 0;
        *(uint *)((int)g_ModelPolygonData[0].uv_u + iVar6 + 8) = 0;
        *(uint *)((int)g_ModelPolygonData[0].uv_v + iVar6 + 8) = 0;
        pfVar5 = pfVar5 + 0xe;
        *(uint *)((int)g_ModelPolygonData[0].uv_v + iVar6 + 0x40) = 0;
        iVar8 = iVar8 + 0x20;
        *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar6) = iVar4;
        *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar6 + 4) = local_24;
        local_18 = (int)ROUND(dVar11) + 0x24;
        g_ModelPolygonData[0].texture_name[iVar6] = '\0';
        g_ModelPolygonData[0].lightmap_name[iVar6] = '\0';
        iVar13 = enable_alloc * 3 + 2;
        iVar6 = iVar6 + 0x184;
      } while (iVar13 < (int)ROUND(dVar10));
    }
    core_dpart_cpp_CDemonPart_processAndFinalize_FUN_00482e40(this_ptr,1,1);
    iVar13 = 0;
    if (0 < this_ptr->face_count) {
      do {
        iVar13 = iVar13 + 1;
      } while (iVar13 < this_ptr->face_count);
    }
  }
  return iVar13;
}
