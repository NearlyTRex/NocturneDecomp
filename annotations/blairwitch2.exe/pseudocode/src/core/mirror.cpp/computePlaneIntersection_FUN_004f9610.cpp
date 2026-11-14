// Name: core_mirror.cpp_computePlaneIntersection_FUN_004f9610
// Address: 004f9610
// Address Range: [[004f9610, 004f975b]]
// Convention: __cdecl
// Signature: void __cdecl core_mirror_cpp_computePlaneIntersection_FUN_004f9610(SClipPlane *clip_plane,CVector3f *vertex_a,CVector3f *vertex_b,CVector3f *out_intersection)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mirror_cpp_computePlaneIntersection_FUN_004f9610(SClipPlane *clip_plane,CVector3f *vertex_a,CVector3f *vertex_b,CVector3f *out_intersection)

{
  float fVar1;
  byte bVar2;
  float afStackY_1048 [1017];
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  CVector3f local_48;
  float local_3c;
  float local_38 [4];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar2 = 0;
  local_14 = (vertex_b->z - vertex_a->z) * (clip_plane->C).f +
             (vertex_b->x - vertex_a->x) * (clip_plane->A).f +
             (vertex_b->y - vertex_a->y) * (clip_plane->B).f;
  if (ABS(local_14) == 0.0) {
    _DAT_01d046a0 = "..\\core\\mirror.cpp";
    _DAT_01d046a4 = 0x42;
    core_main_c_FUN_004e4500("Bad clip!");
  }
  fVar1 = -((clip_plane->C).f * vertex_a->z +
           (clip_plane->B).f * vertex_a->y + (clip_plane->A).f * vertex_a->x + (clip_plane->D).f) /
          local_14;
  local_38[2] = vertex_b->x - vertex_a->x;
  local_38[3] = vertex_b->y - vertex_a->y;
  local_28 = vertex_b->z - vertex_a->z;
  local_60 = local_38[2];
  *(float *)((int)&stack0xffffffa4 + (uint)bVar2 * -8) = local_38[(uint)bVar2 * -2 + 3];
  *(float *)((int)&stack0xffffffa8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       local_38[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4];
  local_18 = fVar1;
  local_24 = local_60 * fVar1;
  local_20 = local_5c * fVar1;
  local_1c = local_58 * fVar1;
  local_3c = local_60 * fVar1;
  local_38[(uint)bVar2 * -2] = local_38[(uint)bVar2 * -2 + 6];
  local_38[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       local_38[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 7];
  local_54 = vertex_a->x + local_3c;
  local_50 = vertex_a->y + local_38[0];
  local_4c = vertex_a->z + local_38[1];
  local_48.x = local_54;
  *(uint *)((int)&local_48 + (uint)bVar2 * -8 + 4) =
       *(uint *)((int)&stack0xffffffb0 + (uint)bVar2 * -8);
  *(uint *)((int)&local_48 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       *(uint *)((int)&stack0xffffffb4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  if (out_intersection == &local_48) {
    return;
  }
  out_intersection->x = local_48.x;
  out_intersection->y = local_48.y;
  out_intersection->z = local_48.z;
  return;
}
