// Name: core_mirror.cpp_FUN_004f9460
// Address: 004f9460
// Address Range: [[004f9460, 004f9609]]
// Convention: __cdecl
// Signature: void __cdecl core_mirror_cpp_FUN_004f9460(SClipPlane *out_plane,CVector3f *vertex_a,CVector3f *vertex_b,CVector3f *vertex_c)

#include "nocturne.h"

void __cdecl core_mirror_cpp_FUN_004f9460(SClipPlane *out_plane,CVector3f *vertex_a,CVector3f *vertex_b,CVector3f *vertex_c)

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
    local_54 = *(float *)vertex_b - *(float *)vertex_a;
    local_50 = *(float *)&vertex_b->field_0x4 - *(float *)&vertex_a->field_0x4;
    local_4c = *(float *)&vertex_b->field_0x8 - *(float *)&vertex_a->field_0x8;
  }
  if (&local_48 != local_60) {
    local_48 = *(float *)vertex_c - *(float *)vertex_b;
    local_44 = *(float *)&vertex_c->field_0x4 - *(float *)&vertex_b->field_0x4;
    local_40 = *(float *)&vertex_c->field_0x8 - *(float *)&vertex_b->field_0x8;
  }
  if (out_plane != local_3c) {
    *(float *)out_plane = local_50 * local_40 - local_4c * local_44;
    *(float *)&out_plane->field_0x4 = local_4c * local_48 - local_54 * local_40;
    *(float *)&out_plane->field_0x8 = local_54 * local_44 - local_50 * local_48;
  }
  fVar1 = SQRT(*(float *)&out_plane->field_0x8 * *(float *)&out_plane->field_0x8 +
               *(float *)out_plane * *(float *)out_plane +
               *(float *)&out_plane->field_0x4 * *(float *)&out_plane->field_0x4);
  if (fVar1 <= 0.0) {
    *(uint *)&out_plane->field_0x8 = 0;
    *(uint *)&out_plane->field_0x4 = *(uint *)&out_plane->field_0x8;
    *(uint *)out_plane = *(uint *)&out_plane->field_0x4;
  }
  else {
    fVar1 = 1.0 / fVar1;
    *(float *)out_plane = *(float *)out_plane * fVar1;
    *(float *)&out_plane->field_0x4 = *(float *)&out_plane->field_0x4 * fVar1;
    *(float *)&out_plane->field_0x8 = *(float *)&out_plane->field_0x8 * fVar1;
  }
  *(float *)&out_plane->field_0xc =
       -(*(float *)&out_plane->field_0x8 * *(float *)&vertex_a->field_0x8 +
        *(float *)out_plane * *(float *)vertex_a +
        *(float *)&out_plane->field_0x4 * *(float *)&vertex_a->field_0x4);
  return;
}
