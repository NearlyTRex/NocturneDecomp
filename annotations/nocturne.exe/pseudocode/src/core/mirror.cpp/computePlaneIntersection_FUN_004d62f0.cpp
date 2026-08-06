// Name: core_mirror.cpp_computePlaneIntersection_FUN_004d62f0
// Address: 004d62f0
// Address Range: [[004d62f0, 004d6403]]
// Convention: __cdecl
// Signature: void __cdecl core_mirror_cpp_computePlaneIntersection_FUN_004d62f0(SClipPlane *clip_plane,CVector3f *vertex_a,CVector3f *vertex_b,CVector3f *out_intersection)

#include "nocturne.h"

void __cdecl core_mirror_cpp_computePlaneIntersection_FUN_004d62f0(SClipPlane *clip_plane,CVector3f *vertex_a,CVector3f *vertex_b,CVector3f *out_intersection)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  CVector3f local_3c [3];
  float local_18;
  
  local_18 = (vertex_b->z - vertex_a->z) * (clip_plane->C).f +
             (vertex_b->x - vertex_a->x) * (clip_plane->A).f +
             (vertex_b->y - vertex_a->y) * (clip_plane->B).f;
  if (ABS(local_18) == 0.0) {
    g_CurrentFilename = "..\\core\\mirror.cpp";
    g_CurrentLineNumber = 66;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Bad clip!");
  }
  local_18 = -((clip_plane->C).f * vertex_a->z +
              (clip_plane->B).f * vertex_a->y + (clip_plane->A).f * vertex_a->x + (clip_plane->D).f)
             / local_18;
  fVar1 = vertex_b->y;
  fVar2 = vertex_a->y;
  fVar3 = vertex_b->z;
  fVar4 = vertex_a->z;
  fVar5 = vertex_a->y;
  fVar6 = vertex_a->z;
  if (out_intersection == local_3c) {
    return;
  }
  out_intersection->x = vertex_a->x + (vertex_b->x - vertex_a->x) * local_18;
  out_intersection->y = fVar5 + (fVar1 - fVar2) * local_18;
  out_intersection->z = fVar6 + (fVar3 - fVar4) * local_18;
  return;
}
