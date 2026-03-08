// Name: shape_meshlod.cpp_CLodMesh_computePointToFaceDistance_FUN_0051a400
// Address: 0051a400
// Address Range: [[0051a400, 0051a690]]
// Convention: __cdecl
// Signature: double __cdecl shape_meshlod_cpp_CLodMesh_computePointToFaceDistance_FUN_0051a400(CLodMesh *this_ptr,SLodSamplePoint *sample_point,CLodFace *face)

#include "nocturne.h"

double __cdecl shape_meshlod_cpp_CLodMesh_computePointToFaceDistance_FUN_0051a400(CLodMesh *this_ptr,SLodSamplePoint *sample_point,CLodFace *face)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CVector3f *pCVar4;
  CLodVert *pCVar5;
  byte bVar6;
  CLodVert *edge_vertex_1;
  CVector3f local_98;
  CVector3f local_8c;
  CVector3f local_80;
  CVector3f local_74 [5];
  CLodVert *local_38;
  
  pCVar5 = this_ptr->vertex_data;
  edge_vertex_1 = pCVar5 + face->vertex_idx_0;
  local_38 = pCVar5 + face->vertex_idx_1;
  pCVar5 = pCVar5 + face->vertex_idx_2;
  bVar6 = face->edge_dot_products[0] <
          (sample_point->position).z * face->edge_perpendiculars[0].z +
          (sample_point->position).x * face->edge_perpendiculars[0].x +
          (sample_point->position).y * face->edge_perpendiculars[0].y;
  if (face->edge_dot_products[1] <
      (sample_point->position).z * face->edge_perpendiculars[1].z +
      (sample_point->position).x * face->edge_perpendiculars[1].x +
      (sample_point->position).y * face->edge_perpendiculars[1].y) {
    bVar6 = bVar6 | 2;
  }
  if (face->edge_dot_products[2] <
      (sample_point->position).z * face->edge_perpendiculars[2].z +
      (sample_point->position).x * face->edge_perpendiculars[2].x +
      (sample_point->position).y * face->edge_perpendiculars[2].y) {
    bVar6 = bVar6 | 4;
  }
  switch(bVar6) {
  case 0:
    fVar1 = face->plane_distance -
            ((sample_point->position).z * (face->normal).z +
            (sample_point->position).x * (face->normal).x +
            (sample_point->position).y * (face->normal).y);
    return (double)(fVar1 * fVar1);
  case 1:
    pCVar4 = shape_meshlod_cpp_computeClosestPointOnEdge_FUN_00514f90
                       (local_74,&sample_point->position,&edge_vertex_1->position,
                        &local_38->position);
    fVar1 = (sample_point->position).x - pCVar4->x;
    fVar3 = (sample_point->position).y - pCVar4->y;
    fVar2 = (sample_point->position).z - pCVar4->z;
    return (double)(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
  case 2:
    pCVar4 = shape_meshlod_cpp_computeClosestPointOnEdge_FUN_00514f90
                       (&local_8c,&sample_point->position,&local_38->position,&pCVar5->position);
    fVar1 = (sample_point->position).x - pCVar4->x;
    fVar3 = (sample_point->position).y - pCVar4->y;
    fVar2 = (sample_point->position).z - pCVar4->z;
    return (double)(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
  case 3:
    fVar1 = (sample_point->position).x - (local_38->position).x;
    fVar3 = (sample_point->position).y - (local_38->position).y;
    fVar2 = (sample_point->position).z - (local_38->position).z;
    return (double)(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
  case 4:
    pCVar4 = shape_meshlod_cpp_computeClosestPointOnEdge_FUN_00514f90
                       (&local_98,&sample_point->position,&pCVar5->position,&edge_vertex_1->position
                       );
    fVar1 = (sample_point->position).x - pCVar4->x;
    fVar3 = (sample_point->position).y - pCVar4->y;
    fVar2 = (sample_point->position).z - pCVar4->z;
    return (double)(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
  case 5:
    fVar1 = (sample_point->position).x - (edge_vertex_1->position).x;
    fVar3 = (sample_point->position).y - (edge_vertex_1->position).y;
    fVar2 = (sample_point->position).z - (edge_vertex_1->position).z;
    return (double)(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
  case 6:
    fVar1 = (sample_point->position).x - (pCVar5->position).x;
    fVar3 = (sample_point->position).y - (pCVar5->position).y;
    fVar2 = (sample_point->position).z - (pCVar5->position).z;
    return (double)(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
  default:
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0xec8;
    core_main_c_displayErrorAndQuit_FUN_00506f10("!");
    pCVar4 = shape_meshlod_cpp_CLodMesh_computeFaceCentroid_FUN_00518870(this_ptr,&local_80,face);
    fVar1 = (sample_point->position).x - pCVar4->x;
    fVar3 = (sample_point->position).y - pCVar4->y;
    fVar2 = (sample_point->position).z - pCVar4->z;
    return (double)(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
  }
}
