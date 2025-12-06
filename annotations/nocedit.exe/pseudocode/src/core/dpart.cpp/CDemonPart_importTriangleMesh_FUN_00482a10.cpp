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
  int iVar2;
  float fVar3;
  CVector3i *pCVar4;
  float *extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  float *extraout_ECX_05;
  int iVar5;
  int iVar6;
  BADSPACEBASE *in_ESP;
  float *pfVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  double dVar11;
  int in_stack_00000018;
  int iStack_38;
  int local_34;
  int local_30;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int iVar12;
  
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
  iVar12 = this_ptr->face_count;
  g_PolygonCount = iVar12;
  if (source_triangle_count != 0) {
    core_dpart_cpp_CDemonPart_alloc_FUN_00482180(this_ptr);
    iVar12 = 0;
    if (0 < (int)triangle_data) {
      iVar5 = 0;
      iVar8 = 0;
      local_18 = 0;
      local_14 = 0;
      do {
        pfVar7 = (float *)(iVar12 * 0x38 + in_stack_00000018);
        pCVar4 = this_ptr->vertex_positions;
        fVar9 = (float10)256;
        fVar10 = (float10)*pfVar7 * fVar9;
        dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(iVar5,pCVar4));
        iVar12 = (int)ROUND(fVar10);
        *(int *)((int)&pCVar4->x + local_18) = iVar12;
        pCVar4 = this_ptr->vertex_positions;
        fVar10 = (float10)pfVar7[1] * fVar9;
        dVar11 = crt_math_c_round_FUN_005fe6b0
                           ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar11 >> 0x20),pCVar4));
        iVar2 = (int)ROUND(fVar10);
        *(int *)((int)&pCVar4->y + iStack_38) = iVar2;
        pCVar4 = this_ptr->vertex_positions;
        fVar10 = (float10)pfVar7[2] * fVar9;
        dVar11 = crt_math_c_round_FUN_005fe6b0
                           ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar11 >> 0x20),local_34));
        *(int *)((int)&pCVar4->z + local_34) = (int)ROUND(fVar10);
        fVar10 = (float10)*extraout_ECX * fVar9;
        dVar11 = crt_math_c_round_FUN_005fe6b0
                           ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar11 >> 0x20),
                                             this_ptr->vertex_positions));
        *(int *)(iVar12 + SUB84 /* extract 2-byte value */(dVar11,0)) = (int)ROUND(fVar10);
        pCVar4 = this_ptr->vertex_positions;
        fVar10 = (float10)*(float *)(extraout_ECX_00 + 4) * fVar9;
        dVar11 = crt_math_c_round_FUN_005fe6b0
                           ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar11 >> 0x20),pCVar4));
        iStack_38 = (int)ROUND(fVar10);
        *(int *)((int)&pCVar4->y + iVar2) = iStack_38;
        pCVar4 = this_ptr->vertex_positions;
        fVar9 = (float10)*(float *)(extraout_ECX_01 + 8) * fVar9;
        dVar11 = crt_math_c_round_FUN_005fe6b0
                           ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar11 >> 0x20),local_20));
        *(int *)((int)&pCVar4->z + local_20) = (int)ROUND(fVar9);
        local_34 = (iVar12 + 2) * 0xc;
        fVar9 = (float10)256;
        fVar10 = (float10)*(float *)(extraout_ECX_02 + 0xc) * fVar9;
        dVar11 = crt_math_c_round_FUN_005fe6b0
                           ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar11 >> 0x20),
                                             this_ptr->vertex_positions));
        *(int *)(local_34 + SUB84 /* extract 2-byte value */(dVar11,0)) = (int)ROUND(fVar10);
        pCVar4 = this_ptr->vertex_positions;
        fVar10 = (float10)*(float *)(extraout_ECX_03 + 0x10) * fVar9;
        dVar11 = crt_math_c_round_FUN_005fe6b0
                           ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar11 >> 0x20),pCVar4));
        *(int *)((int)&pCVar4->y + local_30) = (int)ROUND(fVar10);
        pCVar4 = this_ptr->vertex_positions;
        fVar9 = (float10)*(float *)(extraout_ECX_04 + 0x14) * fVar9;
        dVar11 = crt_math_c_round_FUN_005fe6b0
                           ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar11 >> 0x20),iVar12 + 2));
        iVar6 = (int)((ulonglong)dVar11 >> 0x20);
        *(int *)((int)&pCVar4->z + iVar12 + 2) = (int)ROUND(fVar9);
        *(uint *)((int)&this_ptr->face_data->material + iVar8) = 0xffffffff;
        *(uint *)((int)&this_ptr->face_data->vertex_index_1 + iVar8) = local_1c;
        *(int *)((int)&this_ptr->face_data->vertex_index_2 + iVar8) = iVar2;
        *(int *)((int)&this_ptr->face_data->vertex_index_3 + iVar8) = local_20;
        *(float *)((int)&g_LoadedVertices[0].vertex.x + local_14) = *pfVar7;
        *(float *)((int)&g_LoadedVertices[0].vertex.y + local_14) = pfVar7[1];
        *(float *)((int)&g_LoadedVertices[0].vertex.z + local_14) = pfVar7[2];
        g_LoadedVertices[iVar2].vertex.x = *extraout_ECX_05;
        g_LoadedVertices[iVar2].vertex.y = extraout_ECX_05[1];
        g_LoadedVertices[iVar2].vertex.z = extraout_ECX_05[2];
        iVar5 = iVar6 + 0x184;
        g_LoadedVertices[local_20].vertex.x = extraout_ECX_05[3];
        g_LoadedVertices[local_20].vertex.y = extraout_ECX_05[4];
        fVar3 = extraout_ECX_05[5];
        pcVar1 = g_ModelPolygonData[0].texture_name + iVar6 + -4;
        pcVar1[0] = '\x01';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
        g_LoadedVertices[local_20].vertex.z = fVar3;
        *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar6 + 8) = local_20;
        *(uint *)((int)g_ModelPolygonData[0].vertex_indices + iVar6 + -0x14) = 3;
        *(uint *)((int)g_ModelPolygonData[0].uv_u + iVar6) = 0;
        *(uint *)((int)g_ModelPolygonData[0].uv_v + iVar6) = 0;
        *(uint *)((int)g_ModelPolygonData[0].uv_u + iVar6 + 4) = 0;
        *(uint *)((int)g_ModelPolygonData[0].uv_v + iVar6 + 4) = 0;
        *(uint *)((int)g_ModelPolygonData[0].uv_u + iVar6 + 8) = 0;
        *(uint *)((int)g_ModelPolygonData[0].uv_v + iVar6 + 8) = 0;
        *(uint *)((int)g_ModelPolygonData[0].uv_v + iVar6 + 0x40) = 0;
        iVar8 = iVar8 + 0x20;
        *(uint *)((int)g_ModelPolygonData[0].vertex_indices + iVar6) = local_1c;
        *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar6 + 4) = iVar2;
        local_18 = local_18 + 0x24;
        g_ModelPolygonData[0].texture_name[iVar6] = '\0';
        g_ModelPolygonData[0].lightmap_name[iVar6] = '\0';
        local_14 = local_14 + 0x3c;
        iVar12 = (int)ROUND(fVar10) + 1;
      } while (iVar12 < (int)triangle_data);
    }
    core_dpart_cpp_CDemonPart_processAndFinalize_FUN_00482e40(this_ptr,1,1);
    iVar12 = 0;
    if (0 < this_ptr->face_count) {
      do {
        iVar12 = iVar12 + 1;
      } while (iVar12 < this_ptr->face_count);
    }
  }
  return iVar12;
}
