// Name: shape_meshlod.cpp_CLodMesh_computePointToFaceDistance_FUN_0051a400
// Address: 0051a400
// Address Range: [[0051a400, 0051a690]]
// Convention: __cdecl
// Signature: double shape_meshlod.cpp_CLodMesh_computePointToFaceDistance_FUN_0051a400(CLodMesh * this_ptr, SLodSamplePoint * sample_point, CLodFace * face)

#include "nocturne.h"

double __cdecl
shape_meshlod_cpp_CLodMesh_computePointToFaceDistance_FUN_0051a400
          (CLodMesh *this_ptr,SLodSamplePoint *sample_point,CLodFace *face)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CVector3f *pCVar4;
  CLodVert *pCVar5;
  byte bVar6;
  CLodVert *edge_vertex_1;
  CLodMesh *in_stack_00000004;
  CVector3f local_98;
  CVector3f local_8c;
  CVector3f local_80;
  CVector3f local_74 [5];
  CLodVert *local_38;
  
  pCVar5 = in_stack_00000004->vertex_data;
  edge_vertex_1 = pCVar5 + *(int *)&sample_point->distance_to_triangle;
  local_38 = pCVar5 + *(int *)((int)&sample_point->distance_to_triangle + 4);
  pCVar5 = pCVar5 + (int)sample_point->weight;
  bVar6 = sample_point[4].position.z <
          (float)this_ptr->tri_count * sample_point[3].position.z +
          (float)this_ptr->vertex_count * sample_point[3].position.x +
          (float)this_ptr->vertex_data * sample_point[3].position.y;
  if ((float)sample_point[4].closest_triangle_idx <
      (float)this_ptr->tri_count * *(float *)((int)&sample_point[3].distance_to_triangle + 4) +
      (float)this_ptr->vertex_count * (float)sample_point[3].closest_triangle_idx +
      (float)this_ptr->vertex_data * *(float *)&sample_point[3].distance_to_triangle) {
    bVar6 = bVar6 | 2;
  }
  if (*(float *)&sample_point[4].distance_to_triangle <
      (float)this_ptr->tri_count * sample_point[4].position.y +
      (float)this_ptr->vertex_count * sample_point[3].weight +
      (float)this_ptr->vertex_data * sample_point[4].position.x) {
    bVar6 = bVar6 | 4;
  }
  switch(bVar6) {
  case 0:
    fVar1 = sample_point[2].weight -
            ((float)this_ptr->tri_count * *(float *)((int)&sample_point[2].distance_to_triangle + 4)
            + (float)this_ptr->vertex_count * (float)sample_point[2].closest_triangle_idx +
              (float)this_ptr->vertex_data * *(float *)&sample_point[2].distance_to_triangle);
    return (double)(fVar1 * fVar1);
  case 1:
    pCVar4 = shape_meshlod_cpp_computeClosestPointOnEdge_FUN_00514f90
                       (local_74,(CVector3f *)this_ptr,&edge_vertex_1->position,&local_38->position)
    ;
    fVar1 = (float)this_ptr->vertex_count - pCVar4->x;
    fVar3 = (float)this_ptr->vertex_data - pCVar4->y;
    fVar2 = (float)this_ptr->tri_count - pCVar4->z;
    return (double)(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
  case 2:
    pCVar4 = shape_meshlod_cpp_computeClosestPointOnEdge_FUN_00514f90
                       (&local_8c,(CVector3f *)this_ptr,&local_38->position,&pCVar5->position);
    fVar1 = (float)this_ptr->vertex_count - pCVar4->x;
    fVar3 = (float)this_ptr->vertex_data - pCVar4->y;
    fVar2 = (float)this_ptr->tri_count - pCVar4->z;
    return (double)(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
  case 3:
    fVar1 = (float)this_ptr->vertex_count - (local_38->position).x;
    fVar3 = (float)this_ptr->vertex_data - (local_38->position).y;
    fVar2 = (float)this_ptr->tri_count - (local_38->position).z;
    return (double)(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
  case 4:
    pCVar4 = shape_meshlod_cpp_computeClosestPointOnEdge_FUN_00514f90
                       (&local_98,(CVector3f *)this_ptr,&pCVar5->position,&edge_vertex_1->position);
    fVar1 = (float)this_ptr->vertex_count - pCVar4->x;
    fVar3 = (float)this_ptr->vertex_data - pCVar4->y;
    fVar2 = (float)this_ptr->tri_count - pCVar4->z;
    return (double)(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
  case 5:
    fVar1 = (float)this_ptr->vertex_count - (edge_vertex_1->position).x;
    fVar3 = (float)this_ptr->vertex_data - (edge_vertex_1->position).y;
    fVar2 = (float)this_ptr->tri_count - (edge_vertex_1->position).z;
    return (double)(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
  case 6:
    fVar1 = (float)this_ptr->vertex_count - (pCVar5->position).x;
    fVar3 = (float)this_ptr->vertex_data - (pCVar5->position).y;
    fVar2 = (float)this_ptr->tri_count - (pCVar5->position).z;
    return (double)(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
  default:
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0xec8;
    core_main_c_displayErrorAndQuit_FUN_00506f10("!");
    pCVar4 = shape_meshlod_cpp_CLodMesh_computeFaceCentroid_FUN_00518870
                       (in_stack_00000004,&local_80,(CLodFace *)sample_point);
    fVar1 = (float)this_ptr->vertex_count - pCVar4->x;
    fVar3 = (float)this_ptr->vertex_data - pCVar4->y;
    fVar2 = (float)this_ptr->tri_count - pCVar4->z;
    return (double)(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
  }
}
