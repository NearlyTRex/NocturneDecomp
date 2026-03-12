// Name: core_mirror.cpp_computePlaneIntersection_FUN_00521160
// Address: 00521160
// Address Range: [[00521160, 00521273]]
// Convention: __cdecl
// Signature: void __cdecl core_mirror_cpp_computePlaneIntersection_FUN_00521160(SClipPlane *clip_plane,CVector3f *vertex_a,CVector3f *vertex_b,CVector3f *out_intersection)

#include "nocturne.h"

void __cdecl core_mirror_cpp_computePlaneIntersection_FUN_00521160(SClipPlane *clip_plane,CVector3f *vertex_a,CVector3f *vertex_b,CVector3f *out_intersection)

{
  float fVar7;
  CVector3f local_3c [3];
  float local_18;
  float fVar4;
  float fVar3;
  float fVar2;
  float fVar1;
  float fVar6;
  float fVar5;
  
  fVar7 = (vertex_b->z - vertex_a->z) * (float)clip_plane->C +
          (vertex_b->x - vertex_a->x) * (float)clip_plane->A +
          (vertex_b->y - vertex_a->y) * (float)clip_plane->B;
  if (ABS(fVar7) == 0.0) {
    g_CurrentFilename = "..\\core\\mirror.cpp";
    g_CurrentLineNumber = 0x42;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Bad clip!");
  }
  fVar7 = -((float)clip_plane->C * vertex_a->z +
           (float)clip_plane->B * vertex_a->y +
           (float)clip_plane->A * vertex_a->x + (float)clip_plane->D) / fVar7;
  fVar1 = vertex_b->y;
  fVar2 = vertex_a->y;
  fVar3 = vertex_b->z;
  fVar4 = vertex_a->z;
  fVar5 = vertex_a->y;
  fVar6 = vertex_a->z;
  if (out_intersection == local_3c) {
    return;
  }
  out_intersection->x = vertex_a->x + (vertex_b->x - vertex_a->x) * fVar7;
  out_intersection->y = fVar5 + (fVar1 - fVar2) * fVar7;
  out_intersection->z = fVar6 + (fVar3 - fVar4) * fVar7;
  return;
}
