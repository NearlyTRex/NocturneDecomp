// Name: core_mirror.cpp_computePlaneFromTriangle_FUN_00520fe0
// Address: 00520fe0
// Address Range: [[00520fe0, 00521157]]
// Convention: __cdecl
// Signature: void core_mirror.cpp_computePlaneFromTriangle_FUN_00520fe0(SClipPlane * out_plane, CVector3f * vertex_a, CVector3f * vertex_b, CVector3f * vertex_c)

#include "nocturne.h"

void __cdecl
core_mirror_cpp_computePlaneFromTriangle_FUN_00520fe0
          (SClipPlane *out_plane,CVector3f *vertex_a,CVector3f *vertex_b,CVector3f *vertex_c)

{
  float fVar1;
  BADSPACEBASE *in_ESP;
  float local_54;
  float local_50;
  float local_4c;
  SClipPlane local_48;
  float local_38;
  float local_34;
  uint local_30 [3];
  float local_24 [5];
  
  if (&local_48.D != local_30) {
    local_48.D = (int)(vertex_b->x - vertex_a->x);
    local_38 = vertex_b->y - vertex_a->y;
    local_34 = vertex_b->z - vertex_a->z;
  }
  if (&local_54 != local_24) {
    local_54 = vertex_c->x - vertex_b->x;
    local_50 = vertex_c->y - vertex_b->y;
    local_4c = vertex_c->z - vertex_b->z;
  }
  if (out_plane != &local_48) {
    out_plane->A = (int)(local_38 * local_4c - local_34 * local_50);
    out_plane->B = (int)(local_34 * local_54 - (float)local_48.D * local_4c);
    out_plane->C = (int)((float)local_48.D * local_50 - local_38 * local_54);
  }
  fVar1 = SQRT((float)out_plane->C * (float)out_plane->C +
               (float)out_plane->A * (float)out_plane->A + (float)out_plane->B * (float)out_plane->B
              );
  if (fVar1 <= 0.0) {
    out_plane->C = 0;
    out_plane->B = out_plane->C;
    out_plane->A = out_plane->B;
  }
  else {
    fVar1 = 1.0 / fVar1;
    out_plane->A = (int)((float)out_plane->A * fVar1);
    out_plane->B = (int)((float)out_plane->B * fVar1);
    out_plane->C = (int)((float)out_plane->C * fVar1);
  }
  out_plane->D = (int)-((float)out_plane->C * vertex_a->z +
                       (float)out_plane->A * vertex_a->x + (float)out_plane->B * vertex_a->y);
  return;
}
