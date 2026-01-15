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
  int iVar5;
  int extraout_EAX;
  int iVar6;
  int extraout_EAX_00;
  float *extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  float *extraout_ECX_05;
  int extraout_EDX;
  int *piVar7;
  float *pfVar8;
  int iVar9;
  float10 fVar10;
  double dVar11;
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
    crt_stdio_c_sprintf_FUN_005fdbd0
              (local_134,"Too many! %d, %d",this_ptr->vertex_count,this_ptr->face_count);
    g_CurrentLineNumber = 0x267;
    g_CurrentFilename = "..\\core\\dpart.cpp";
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_134);
  }
  g_VertexCount = this_ptr->vertex_count;
  iVar9 = this_ptr->face_count;
  g_PolygonCount = iVar9;
  if (triangle_count != 0) {
    core_dpart_cpp_CDemonPart_alloc_FUN_00482180(this_ptr);
    local_18 = 0;
    if (0 < triangle_count) {
      iVar9 = 0;
      local_1c = 0xc;
      local_24 = 0;
      local_20 = 0;
      do {
        pfVar8 = (float *)(local_18 * 0x38 + enable_alloc);
        fVar10 = (float10)256;
        piVar7 = (int *)((int)&this_ptr->vertex_positions->x + local_24);
        dVar11 = crt_math_c_round_FUN_005fe6b0((double)((float10)*pfVar8 * fVar10));
        iVar4 = local_28;
        local_18 = (int)ROUND(dVar11);
        *piVar7 = local_18;
        pCVar3 = this_ptr->vertex_positions;
        dVar11 = crt_math_c_round_FUN_005fe6b0((double)((float10)pfVar8[1] * fVar10));
        iVar6 = local_2c;
        local_1c = (int)ROUND(dVar11);
        *(int *)((int)&pCVar3->y + iVar4) = local_1c;
        pCVar3 = this_ptr->vertex_positions;
        dVar11 = crt_math_c_round_FUN_005fe6b0((double)((float10)pfVar8[2] * fVar10));
        iVar5 = local_28;
        iStack_40 = (int)ROUND(dVar11);
        *(int *)((int)&pCVar3->z + iVar6) = iStack_40;
        local_34 = local_24 * 3;
        iStack_3c = local_34 + 1;
        dVar11 = crt_math_c_round_FUN_005fe6b0((double)((float10)*extraout_ECX * fVar10));
        iVar4 = local_2c;
        iStack_44 = (int)ROUND(dVar11);
        *(int *)(iVar5 + extraout_EAX) = iStack_44;
        pCVar3 = this_ptr->vertex_positions;
        dVar11 = crt_math_c_round_FUN_005fe6b0
                           ((double)((float10)*(float *)(extraout_ECX_00 + 4) * fVar10));
        iVar6 = local_30;
        iStack_48 = (int)ROUND(dVar11);
        *(int *)((int)&pCVar3->y + iVar4) = iStack_48;
        pCVar3 = this_ptr->vertex_positions;
        dVar11 = crt_math_c_round_FUN_005fe6b0
                           ((double)((float10)*(float *)(extraout_ECX_01 + 8) * fVar10));
        *(int *)((int)&pCVar3->z + iVar6) = (int)ROUND(dVar11);
        iStack_44 = iStack_40 + 2;
        iVar6 = iStack_44 * 0xc;
        fVar10 = (float10)256;
        iStack_4c = iVar6;
        dVar11 = crt_math_c_round_FUN_005fe6b0
                           ((double)((float10)*(float *)(extraout_ECX_02 + 0xc) * fVar10));
        iVar4 = iStack_50;
        local_30 = (int)ROUND(dVar11);
        *(int *)(iVar6 + extraout_EAX_00) = local_30;
        pCVar3 = this_ptr->vertex_positions;
        dVar11 = crt_math_c_round_FUN_005fe6b0
                           ((double)((float10)*(float *)(extraout_ECX_03 + 0x10) * fVar10));
        iVar6 = iStack_54;
        local_34 = (int)ROUND(dVar11);
        *(int *)((int)&pCVar3->y + iVar4) = local_34;
        pCVar3 = this_ptr->vertex_positions;
        local_134[0] = -0x6e;
        local_134[1] = ',';
        local_134[2] = 'H';
        local_134[3] = '\0';
        dVar11 = crt_math_c_round_FUN_005fe6b0
                           ((double)((float10)*(float *)(extraout_ECX_04 + 0x14) * fVar10));
        iStack_38 = (int)ROUND(dVar11);
        *(int *)((int)&pCVar3->z + iVar6) = iStack_38;
        *(uint *)((int)&this_ptr->face_data->material + iVar9) = 0xffffffff;
        *(int *)((int)&this_ptr->face_data->vertex_index_1 + iVar9) = iStack_4c;
        *(int *)((int)&this_ptr->face_data->vertex_index_2 + iVar9) = iStack_54;
        *(int *)((int)&this_ptr->face_data->vertex_index_3 + iVar9) = iStack_50;
        *(float *)((int)&g_LoadedVertices[0].vertex.x + iStack_44) = *pfVar8;
        *(float *)((int)&g_LoadedVertices[0].vertex.y + iStack_44) = pfVar8[1];
        *(float *)((int)&g_LoadedVertices[0].vertex.z + iStack_44) = pfVar8[2];
        g_LoadedVertices[iStack_54].vertex.x = *extraout_ECX_05;
        g_LoadedVertices[iStack_54].vertex.y = extraout_ECX_05[1];
        g_LoadedVertices[iStack_54].vertex.z = extraout_ECX_05[2];
        g_LoadedVertices[iStack_50].vertex.x = extraout_ECX_05[3];
        g_LoadedVertices[iStack_50].vertex.y = extraout_ECX_05[4];
        fVar2 = extraout_ECX_05[5];
        pcVar1 = g_ModelPolygonData[0].texture_name + extraout_EDX + -4;
        pcVar1[0] = '\x01';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
        g_LoadedVertices[iStack_50].vertex.z = fVar2;
        *(int *)((int)g_ModelPolygonData[0].vertex_indices + extraout_EDX + 8) = iStack_50;
        *(uint *)((int)g_ModelPolygonData[0].vertex_indices + extraout_EDX + -0x14) = 3;
        *(uint *)((int)g_ModelPolygonData[0].uv_u + extraout_EDX) = 0;
        *(uint *)((int)g_ModelPolygonData[0].uv_v + extraout_EDX) = 0;
        *(uint *)((int)g_ModelPolygonData[0].uv_u + extraout_EDX + 4) = 0;
        *(uint *)((int)g_ModelPolygonData[0].uv_v + extraout_EDX + 4) = 0;
        *(uint *)((int)g_ModelPolygonData[0].uv_u + extraout_EDX + 8) = 0;
        *(uint *)((int)g_ModelPolygonData[0].uv_v + extraout_EDX + 8) = 0;
        *(uint *)((int)g_ModelPolygonData[0].uv_v + extraout_EDX + 0x40) = 0;
        iVar9 = iVar9 + 0x20;
        *(int *)((int)g_ModelPolygonData[0].vertex_indices + extraout_EDX) = iStack_4c;
        *(int *)((int)g_ModelPolygonData[0].vertex_indices + extraout_EDX + 4) = iStack_54;
        iStack_48 = iStack_48 + 0x24;
        g_ModelPolygonData[0].texture_name[extraout_EDX] = '\0';
        g_ModelPolygonData[0].lightmap_name[extraout_EDX] = '\0';
        iStack_40 = iStack_40 + 0x24;
        iStack_44 = iStack_44 + 0x3c;
        iStack_3c = iStack_3c + 1;
      } while (iStack_3c < local_1c);
    }
    core_dpart_cpp_CDemonPart_processAndFinalize_FUN_00482e40(this_ptr,1,1);
    iVar9 = 0;
    if (0 < this_ptr->face_count) {
      do {
        iVar9 = iVar9 + 1;
      } while (iVar9 < this_ptr->face_count);
    }
  }
  return iVar9;
}
