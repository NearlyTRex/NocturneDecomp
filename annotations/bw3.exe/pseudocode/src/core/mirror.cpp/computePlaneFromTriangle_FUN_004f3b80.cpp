// Name: core_mirror.cpp_computePlaneFromTriangle_FUN_004f3b80
// Address: 004f3b80
// Address Range: [[004f3b80, 004f3d29]]
// Convention: __cdecl
// Signature: void __cdecl core_mirror_cpp_computePlaneFromTriangle_FUN_004f3b80(SClipPlane *out_plane,CVector3f *vertex_a,CVector3f *vertex_b,CVector3f *vertex_c)

#include "nocturne.h"

void __cdecl core_mirror_cpp_computePlaneFromTriangle_FUN_004f3b80(SClipPlane *out_plane,CVector3f *vertex_a,CVector3f *vertex_b,CVector3f *vertex_c)

{
  float fVar1;
  float local_78 [6];
  float local_60 [3];
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  SClipPlane local_3c [2];
  
  if (&local_54 != local_78) {
    local_54 = vertex_b->x - vertex_a->x;
    local_50 = vertex_b->y - vertex_a->y;
    local_4c = vertex_b->z - vertex_a->z;
  }
  if (&local_48 != local_60) {
    local_48 = vertex_c->x - vertex_b->x;
    local_44 = vertex_c->y - vertex_b->y;
    local_40 = vertex_c->z - vertex_b->z;
  }
  if (out_plane != local_3c) {
    (out_plane->A).f = local_50 * local_40 - local_4c * local_44;
    (out_plane->B).f = local_4c * local_48 - local_54 * local_40;
    (out_plane->C).f = local_54 * local_44 - local_50 * local_48;
  }
  fVar1 = SQRT((out_plane->C).f * (out_plane->C).f +
               (out_plane->A).f * (out_plane->A).f + (out_plane->B).f * (out_plane->B).f);
  if (fVar1 <= 0.0) {
    (out_plane->C).i = 0;
    out_plane->B = out_plane->C;
    out_plane->A = out_plane->B;
  }
  else {
    fVar1 = 1.0 / fVar1;
    (out_plane->A).f = (out_plane->A).f * fVar1;
    (out_plane->B).f = (out_plane->B).f * fVar1;
    (out_plane->C).f = (out_plane->C).f * fVar1;
  }
  (out_plane->D).f =
       -((out_plane->C).f * vertex_a->z +
        (out_plane->A).f * vertex_a->x + (out_plane->B).f * vertex_a->y);
  return;
}
