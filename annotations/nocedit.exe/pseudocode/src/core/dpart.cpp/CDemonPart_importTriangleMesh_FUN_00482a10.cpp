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
  int extraout_EAX;
  int iVar4;
  int extraout_EAX_00;
  float *extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  float *extraout_ECX_05;
  int extraout_EDX;
  BADSPACEBASE *in_ESP;
  float *pfVar5;
  int iVar6;
  float10 fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int unaff_retaddr;
  int in_stack_00000018;
  int local_24;
  int local_20;
  int local_18;
  int iVar11;
  
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
  iVar11 = this_ptr->face_count;
  g_PolygonCount = iVar11;
  if (source_triangle_count != 0) {
    core_dpart_cpp_CDemonPart_alloc_FUN_00482180(this_ptr);
    iVar11 = 0;
    if (0 < (int)triangle_data) {
      iVar6 = 0;
      local_18 = 0;
      do {
        pfVar5 = (float *)(iVar11 * 0x38 + in_stack_00000018);
        pCVar3 = this_ptr->vertex_positions;
        fVar7 = (float10)256;
        dVar8 = crt_math_c_round_FUN_005fe6b0((double)((float10)*pfVar5 * fVar7));
        in_stack_00000018 = (int)ROUND(dVar8);
        *(int *)((int)&pCVar3->x + local_18) = in_stack_00000018;
        pCVar3 = this_ptr->vertex_positions;
        dVar8 = crt_math_c_round_FUN_005fe6b0((double)((float10)pfVar5[1] * fVar7));
        *(int *)((int)&pCVar3->y + triangle_count) = (int)ROUND(dVar8);
        pCVar3 = this_ptr->vertex_positions;
        dVar9 = crt_math_c_round_FUN_005fe6b0((double)((float10)pfVar5[2] * fVar7));
        iVar11 = (int)ROUND(dVar9);
        *(int *)(this_ptr->format + (int)&pCVar3->z) = iVar11;
        dVar9 = crt_math_c_round_FUN_005fe6b0((double)((float10)*extraout_ECX * fVar7));
        *(int *)(triangle_count + extraout_EAX) = (int)ROUND(dVar9);
        pCVar3 = this_ptr->vertex_positions;
        dVar9 = crt_math_c_round_FUN_005fe6b0
                          ((double)((float10)*(float *)(extraout_ECX_00 + 4) * fVar7));
        *(int *)((int)&pCVar3->y + (int)this_ptr->format) = (int)ROUND(dVar9);
        pCVar3 = this_ptr->vertex_positions;
        dVar10 = crt_math_c_round_FUN_005fe6b0
                           ((double)((float10)*(float *)(extraout_ECX_01 + 8) * fVar7));
        *(int *)((int)&pCVar3->z + unaff_retaddr) = (int)ROUND(dVar10);
        iVar4 = (iVar11 + 2) * 0xc;
        fVar7 = (float10)256;
        dVar10 = crt_math_c_round_FUN_005fe6b0
                           ((double)((float10)*(float *)(extraout_ECX_02 + 0xc) * fVar7));
        unaff_retaddr = (int)ROUND(dVar10);
        *(int *)(iVar4 + extraout_EAX_00) = unaff_retaddr;
        pCVar3 = this_ptr->vertex_positions;
        dVar10 = crt_math_c_round_FUN_005fe6b0
                           ((double)((float10)*(float *)(extraout_ECX_03 + 0x10) * fVar7));
        *(int *)((int)&pCVar3->y + local_20) = (int)ROUND(dVar10);
        pCVar3 = this_ptr->vertex_positions;
        dVar10 = crt_math_c_round_FUN_005fe6b0
                           ((double)((float10)*(float *)(extraout_ECX_04 + 0x14) * fVar7));
        *(int *)((int)&pCVar3->z + local_24) = (int)ROUND(dVar10);
        *(uint *)((int)&this_ptr->face_data->material + iVar6) = 0xffffffff;
        *(int *)((int)&this_ptr->face_data->vertex_index_1 + iVar6) = iVar4;
        *(int *)((int)&this_ptr->face_data->vertex_index_2 + iVar6) = local_24;
        *(int *)((int)&this_ptr->face_data->vertex_index_3 + iVar6) = local_20;
        *(float *)((int)&g_LoadedVertices[0].vertex.x + iVar11 + 2) = *pfVar5;
        *(float *)((int)&g_LoadedVertices[0].vertex.y + iVar11 + 2) = pfVar5[1];
        *(float *)((int)&g_LoadedVertices[0].vertex.z + iVar11 + 2) = pfVar5[2];
        g_LoadedVertices[local_24].vertex.x = *extraout_ECX_05;
        g_LoadedVertices[local_24].vertex.y = extraout_ECX_05[1];
        g_LoadedVertices[local_24].vertex.z = extraout_ECX_05[2];
        g_LoadedVertices[local_20].vertex.x = extraout_ECX_05[3];
        g_LoadedVertices[local_20].vertex.y = extraout_ECX_05[4];
        fVar2 = extraout_ECX_05[5];
        pcVar1 = g_ModelPolygonData[0].texture_name + extraout_EDX + -4;
        pcVar1[0] = '\x01';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
        g_LoadedVertices[local_20].vertex.z = fVar2;
        *(int *)((int)g_ModelPolygonData[0].vertex_indices + extraout_EDX + 8) = local_20;
        *(uint *)((int)g_ModelPolygonData[0].vertex_indices + extraout_EDX + -0x14) = 3;
        *(uint *)((int)g_ModelPolygonData[0].uv_u + extraout_EDX) = 0;
        *(uint *)((int)g_ModelPolygonData[0].uv_v + extraout_EDX) = 0;
        *(uint *)((int)g_ModelPolygonData[0].uv_u + extraout_EDX + 4) = 0;
        *(uint *)((int)g_ModelPolygonData[0].uv_v + extraout_EDX + 4) = 0;
        *(uint *)((int)g_ModelPolygonData[0].uv_u + extraout_EDX + 8) = 0;
        *(uint *)((int)g_ModelPolygonData[0].uv_v + extraout_EDX + 8) = 0;
        *(uint *)((int)g_ModelPolygonData[0].uv_v + extraout_EDX + 0x40) = 0;
        iVar6 = iVar6 + 0x20;
        *(int *)((int)g_ModelPolygonData[0].vertex_indices + extraout_EDX) = iVar4;
        *(int *)((int)g_ModelPolygonData[0].vertex_indices + extraout_EDX + 4) = local_24;
        local_18 = (int)ROUND(dVar9) + 0x24;
        g_ModelPolygonData[0].texture_name[extraout_EDX] = '\0';
        g_ModelPolygonData[0].lightmap_name[extraout_EDX] = '\0';
        iVar11 = enable_alloc * 3 + 2;
      } while (iVar11 < (int)ROUND(dVar8));
    }
    core_dpart_cpp_CDemonPart_processAndFinalize_FUN_00482e40(this_ptr,1,1);
    iVar11 = 0;
    if (0 < this_ptr->face_count) {
      do {
        iVar11 = iVar11 + 1;
      } while (iVar11 < this_ptr->face_count);
    }
  }
  return iVar11;
}
