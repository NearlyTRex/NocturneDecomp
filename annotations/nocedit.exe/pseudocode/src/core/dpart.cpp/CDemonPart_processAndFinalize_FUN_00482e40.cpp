// Name: core_dpart.cpp_CDemonPart_processAndFinalize_FUN_00482e40
// Address: 00482e40
// Address Range: [[00482e40, 00482fa3]]
// Convention: __cdecl
// Signature: void core_dpart.cpp_CDemonPart_processAndFinalize_FUN_00482e40(CDemonPart * this_ptr, int enable_vertex_reduction, int enable_polygon_optimize)

#include "nocturne.h"

void __cdecl
core_dpart_cpp_CDemonPart_processAndFinalize_FUN_00482e40
          (CDemonPart *this_ptr,int enable_vertex_reduction,int enable_polygon_optimize)

{
  CVector3i *pCVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int iVar3;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int iVar4;
  float10 fVar5;
  double dVar6;
  int in_stack_00000014;
  
  shape_design_c_calculateVertexNormals_FUN_0045be40();
  if (enable_polygon_optimize != 0) {
    shape_design_c_vertexReducer_FUN_00467850(0.01,-1.0,-1);
  }
  if (in_stack_00000014 != 0) {
    shape_design_c_optimizePolygonMesh_FUN_004658e0(1.0,0,-1);
  }
  shape_design_c_calculateVertexNormals_FUN_0045be40();
  core_dpart_cpp_CDemonPart_free_FUN_004822b0(this_ptr);
  this_ptr->vertex_count = g_VertexCount;
  iVar4 = 0;
  this_ptr->face_count = g_PolygonCount;
  core_dpart_cpp_CDemonPart_alloc_FUN_00482180(this_ptr);
  if (0 < this_ptr->vertex_count) {
    fVar5 = (float10)256;
    iVar2 = 0;
    iVar3 = 0;
    do {
      pCVar1 = this_ptr->vertex_positions;
      dVar6 = crt_math_c_round_FUN_005fe6b0
                        ((double)((float10)*(float *)((int)&g_LoadedVertices[0].vertex.x + iVar2) *
                                 fVar5));
      *(int *)((int)&pCVar1->x + iVar3) = (int)ROUND(dVar6);
      pCVar1 = this_ptr->vertex_positions;
      dVar6 = crt_math_c_round_FUN_005fe6b0
                        ((double)((float10)*(float *)((int)&g_LoadedVertices[0].vertex.y +
                                                     extraout_ECX) * fVar5));
      *(int *)((int)&pCVar1->y + extraout_EDX) = (int)ROUND(dVar6);
      pCVar1 = this_ptr->vertex_positions;
      dVar6 = crt_math_c_round_FUN_005fe6b0
                        ((double)((float10)*(float *)((int)&g_LoadedVertices[0].vertex.z +
                                                     extraout_ECX_00) * fVar5));
      iVar2 = extraout_ECX_01 + 0x14;
      *(int *)((int)&pCVar1->z + extraout_EDX_00) = (int)ROUND(dVar6);
      iVar4 = iVar4 + 1;
      iVar3 = extraout_EDX_01 + 0xc;
    } while (iVar4 < this_ptr->vertex_count);
  }
  iVar4 = 0;
  if (0 < this_ptr->face_count) {
    iVar3 = 0;
    iVar2 = 0;
    do {
      *(uint *)((int)&this_ptr->face_data->vertex_index_1 + iVar2) =
           *(uint *)((int)g_ModelPolygonData[0].vertex_indices + iVar3);
      *(uint *)((int)&this_ptr->face_data->vertex_index_2 + iVar2) =
           *(uint *)((int)g_ModelPolygonData[0].vertex_indices + iVar3 + 4);
      *(uint *)((int)&this_ptr->face_data->vertex_index_3 + iVar2) =
           *(uint *)((int)g_ModelPolygonData[0].vertex_indices + iVar3 + 8);
      if (*(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar3 + -0x14) == 4) {
        *(uint *)((int)&this_ptr->face_data->material + iVar2) =
             *(uint *)((int)g_ModelPolygonData[0].vertex_indices + iVar3 + 0xc);
      }
      else {
        *(uint *)((int)&this_ptr->face_data->material + iVar2) = 0xffffffff;
      }
      iVar2 = iVar2 + 0x20;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x184;
    } while (iVar4 < this_ptr->face_count);
  }
  core_dpart_cpp_CDemonPart_calculateFaceNormals_FUN_004824f0(this_ptr);
  return;
}
