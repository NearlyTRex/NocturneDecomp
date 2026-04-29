// Name: core_mirror.cpp_computePlaneFromTriangle_FUN_00520fe0
// Address: 00520fe0
// Address Range: [[00520fe0, 00521157]]
// Convention: __cdecl
// Signature: void __cdecl core_mirror_cpp_computePlaneFromTriangle_FUN_00520fe0(SClipPlane *out_plane,CVector3f *vertex_a,CVector3f *vertex_b,CVector3f *vertex_c)

#include "nocturne.h"

void __cdecl core_mirror_cpp_computePlaneFromTriangle_FUN_00520fe0(SClipPlane *out_plane,CVector3f *vertex_a,CVector3f *vertex_b,CVector3f *vertex_c)

{
  float fVar2;
  float local_54;
  float local_50;
  float local_4c;
  SClipPlane local_48;
  float local_38;
  float local_34;
  byte local_30 [12];
  float local_24 [5];
  float fVar1;
  
  if (&local_48.D != (UIntegerFloat *)local_30) {
    local_48.D.f = vertex_b->x - vertex_a->x;
    local_38 = vertex_b->y - vertex_a->y;
    local_34 = vertex_b->z - vertex_a->z;
  }
  if (&local_54 != local_24) {
    local_54 = vertex_c->x - vertex_b->x;
    local_50 = vertex_c->y - vertex_b->y;
    local_4c = vertex_c->z - vertex_b->z;
  }
  if (out_plane != &local_48) {
    (out_plane->A).f = local_38 * local_4c - local_34 * local_50;
    (out_plane->B).f = local_34 * local_54 - local_48.D.f * local_4c;
    (out_plane->C).f = local_48.D.f * local_50 - local_38 * local_54;
  }
  fVar1 = SQRT((out_plane->C).f * (out_plane->C).f +
               (out_plane->A).f * (out_plane->A).f + (out_plane->B).f * (out_plane->B).f);
  if (fVar1 <= 0.0) {
    (out_plane->C).i = 0;
    out_plane->B = out_plane->C;
    out_plane->A = out_plane->B;
  }
  else {
    fVar2 = 1.0 / fVar1;
    (out_plane->A).f = (out_plane->A).f * fVar2;
    (out_plane->B).f = (out_plane->B).f * fVar2;
    (out_plane->C).f = (out_plane->C).f * fVar2;
  }
  (out_plane->D).f =
       -((out_plane->C).f * vertex_a->z +
        (out_plane->A).f * vertex_a->x + (out_plane->B).f * vertex_a->y);
  return;
}
