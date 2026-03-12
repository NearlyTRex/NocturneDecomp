// Name: core_dpart.cpp_CDemonPart_processAndFinalize_FUN_00482e40
// Address: 00482e40
// Address Range: [[00482e40, 00482fa3]]
// Convention: __cdecl
// Signature: void __cdecl core_dpart_cpp_CDemonPart_processAndFinalize_FUN_00482e40(CDemonPart *this_ptr,int enable_vertex_reduction,int enable_polygon_optimize)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_dpart_cpp_CDemonPart_processAndFinalize_FUN_00482e40(CDemonPart *this_ptr,int enable_vertex_reduction,int enable_polygon_optimize)

{
  int iVar1;
  int iVar3;
  int iVar2;
  int iVar4;
  int iVar6;
  int iVar5;
  double dVar2;
  float *pfVar1;
  
  shape_design_c_calculateVertexNormals_FUN_0045be40();
  if (enable_vertex_reduction != 0) {
    shape_design_c_vertexReducer_FUN_00467850(0.01,-1.0,-1);
  }
  if (enable_polygon_optimize != 0) {
    shape_design_c_optimizePolygonMesh_FUN_004658e0(1.0,0,-1);
  }
  shape_design_c_calculateVertexNormals_FUN_0045be40();
  core_dpart_cpp_CDemonPart_free_FUN_004822b0(this_ptr);
  this_ptr->vertex_count = g_VertexCount;
  iVar5 = 0;
  this_ptr->face_count = g_PolygonCount;
  core_dpart_cpp_CDemonPart_alloc_FUN_00482180(this_ptr);
  dVar2 = 256;
  if (0 < this_ptr->vertex_count) {
    iVar3 = 0;
    iVar4 = 0;
    do {
      *(int *)((int)&this_ptr->vertex_positions->x + iVar4) =
           (int)ROUND(ROUND((double)*(float *)((int)&g_LoadedVertices[0].vertex.x + iVar3) * dVar2))
      ;
      *(int *)((int)&this_ptr->vertex_positions->y + iVar4) =
           (int)ROUND(ROUND((double)*(float *)((int)&g_LoadedVertices[0].vertex.y + iVar3) * dVar2))
      ;
      pfVar1 = (float *)((int)&g_LoadedVertices[0].vertex.z + iVar3);
      iVar3 = iVar3 + 0x14;
      *(int *)((int)&this_ptr->vertex_positions->z + iVar4) =
           (int)ROUND(ROUND((double)*pfVar1 * dVar2));
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar5 < this_ptr->vertex_count);
  }
  iVar2 = 0;
  if (0 < this_ptr->face_count) {
    iVar6 = 0;
    iVar1 = 0;
    do {
      *(uint *)((int)&this_ptr->face_data->vertex_index_1 + iVar1) =
           *(uint *)((int)g_ModelPolygonData[0].vertex_indices + iVar6);
      *(uint *)((int)&this_ptr->face_data->vertex_index_2 + iVar1) =
           *(uint *)((int)g_ModelPolygonData[0].vertex_indices + iVar6 + 4);
      *(uint *)((int)&this_ptr->face_data->vertex_index_3 + iVar1) =
           *(uint *)((int)g_ModelPolygonData[0].vertex_indices + iVar6 + 8);
      if (*(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar6 + -0x14) == 4) {
        *(uint *)((int)&this_ptr->face_data->vertex_index_4 + iVar1) =
             *(uint *)((int)g_ModelPolygonData[0].vertex_indices + iVar6 + 0xc);
      }
      else {
        *(uint *)((int)&this_ptr->face_data->vertex_index_4 + iVar1) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x20;
      iVar2 = iVar2 + 1;
      iVar6 = iVar6 + 0x184;
    } while (iVar2 < this_ptr->face_count);
  }
  core_dpart_cpp_CDemonPart_calculateFaceNormals_FUN_004824f0(this_ptr);
  return;
}
