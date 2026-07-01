// Name: shape_meshlod.cpp_CLodMesh_computeClosestPointOnTriangle_FUN_0051a6b0
// Address: 0051a6b0
// Address Range: [[0051a6b0, 0051a8bd]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl shape_meshlod_cpp_CLodMesh_computeClosestPointOnTriangle_FUN_0051a6b0(CLodMesh *this_ptr,CVector3f *output_point,CVector3f *target_point,CLodFace *triangle_ptr )

#include "nocturne.h"

CVector3f * __cdecl shape_meshlod_cpp_CLodMesh_computeClosestPointOnTriangle_FUN_0051a6b0(CLodMesh *this_ptr,CVector3f *output_point,CVector3f *target_point,CLodFace *triangle_ptr )

{
  CLodVert *edge_vertex_0_00;
  CLodVert *pCVar1;
  byte bVar4;
  CLodVert *edge_vertex_1;
  CLodVert *pCVar5;
  CLodVert *edge_vertex_0;
  float fVar1;
  float fVar2;
  float fVar3;
  
  pCVar1 = this_ptr->vertex_data;
  edge_vertex_1 = pCVar1 + triangle_ptr->vertex_idx_0;
  edge_vertex_0_00 = pCVar1 + triangle_ptr->vertex_idx_1;
  pCVar5 = pCVar1 + triangle_ptr->vertex_idx_2;
  bVar4 = triangle_ptr->edge_dot_products[0] <
          target_point->z * triangle_ptr->edge_perpendiculars[0].z +
          target_point->x * triangle_ptr->edge_perpendiculars[0].x +
          target_point->y * triangle_ptr->edge_perpendiculars[0].y;
  if (triangle_ptr->edge_dot_products[1] <
      target_point->z * triangle_ptr->edge_perpendiculars[1].z +
      target_point->x * triangle_ptr->edge_perpendiculars[1].x +
      target_point->y * triangle_ptr->edge_perpendiculars[1].y) {
    bVar4 = bVar4 | 2;
  }
  if (triangle_ptr->edge_dot_products[2] <
      target_point->z * triangle_ptr->edge_perpendiculars[2].z +
      target_point->x * triangle_ptr->edge_perpendiculars[2].x +
      target_point->y * triangle_ptr->edge_perpendiculars[2].y) {
    bVar4 = bVar4 | 4;
  }
  switch(bVar4) {
  case 0:
    fVar3 = triangle_ptr->plane_distance -
            (target_point->z * (triangle_ptr->normal).z +
            target_point->x * (triangle_ptr->normal).x + target_point->y * (triangle_ptr->normal).y)
    ;
    fVar1 = (triangle_ptr->normal).y;
    fVar2 = (triangle_ptr->normal).z;
    output_point->x = target_point->x - (triangle_ptr->normal).x * fVar3;
    output_point->y = target_point->y - fVar1 * fVar3;
    output_point->z = target_point->z - fVar2 * fVar3;
    return output_point;
  case 1:
    shape_meshlod_cpp_computeClosestPointOnEdge_FUN_00514f90
              (output_point,target_point,&edge_vertex_1->position,&edge_vertex_0_00->position);
    return output_point;
  case 2:
    shape_meshlod_cpp_computeClosestPointOnEdge_FUN_00514f90
              (output_point,target_point,&edge_vertex_0_00->position,&pCVar5->position);
    return output_point;
  case 3:
    output_point->x = (edge_vertex_0_00->position).x;
    output_point->y = (edge_vertex_0_00->position).y;
    output_point->z = (edge_vertex_0_00->position).z;
    return output_point;
  case 4:
    shape_meshlod_cpp_computeClosestPointOnEdge_FUN_00514f90
              (output_point,target_point,&pCVar5->position,&edge_vertex_1->position);
    return output_point;
  case 5:
    output_point->x = (edge_vertex_1->position).x;
    output_point->y = (edge_vertex_1->position).y;
    output_point->z = (edge_vertex_1->position).z;
    return output_point;
  case 6:
    output_point->x = (pCVar5->position).x;
    output_point->y = (pCVar5->position).y;
    output_point->z = (pCVar5->position).z;
    return output_point;
  default:
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 3874;
    core_main_c_displayErrorAndQuit_FUN_00506f10("!");
    shape_meshlod_cpp_CLodMesh_computeFaceCentroid_FUN_00518870(this_ptr,output_point,triangle_ptr);
    return output_point;
  }
}
