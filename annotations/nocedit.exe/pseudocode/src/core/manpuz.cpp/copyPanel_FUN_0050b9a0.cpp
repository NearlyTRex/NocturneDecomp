// Name: core_manpuz.cpp_copyPanel_FUN_0050b9a0
// Address: 0050b9a0
// Address Range: [[0050b9a0, 0050ba60]]
// Convention: __cdecl
// Signature: SPanel * __cdecl core_manpuz_cpp_copyPanel_FUN_0050b9a0(SPanel *dest,SPanel *src)

#include "nocturne.h"

SPanel * __cdecl core_manpuz_cpp_copyPanel_FUN_0050b9a0(SPanel *dest,SPanel *src)

{
  dest->exists = src->exists;
  dest->anim_progress = src->anim_progress;
  dest->anim_speed = src->anim_speed;
  if (&dest->local_position != &src->local_position) {
    (dest->local_position).x = (src->local_position).x;
    (dest->local_position).y = (src->local_position).y;
    (dest->local_position).z = (src->local_position).z;
  }
  if (&dest->rotation != &src->rotation) {
    (dest->rotation).x = (src->rotation).x;
    (dest->rotation).y = (src->rotation).y;
    (dest->rotation).z = (src->rotation).z;
  }
  (dest->rotation_matrix).m[0].x = (src->rotation_matrix).m[0].x;
  (dest->rotation_matrix).m[0].y = (src->rotation_matrix).m[0].y;
  (dest->rotation_matrix).m[0].z = (src->rotation_matrix).m[0].z;
  (dest->rotation_matrix).m[1].x = (src->rotation_matrix).m[1].x;
  (dest->rotation_matrix).m[1].y = (src->rotation_matrix).m[1].y;
  (dest->rotation_matrix).m[1].z = (src->rotation_matrix).m[1].z;
  (dest->rotation_matrix).m[2].x = (src->rotation_matrix).m[2].x;
  (dest->rotation_matrix).m[2].y = (src->rotation_matrix).m[2].y;
  (dest->rotation_matrix).m[2].z = (src->rotation_matrix).m[2].z;
  dest->dead = src->dead;
  (dest->color).r = (src->color).r;
  (dest->color).g = (src->color).g;
  (dest->color).b = (src->color).b;
  if (&dest->world_position == &src->world_position) {
    return dest;
  }
  (dest->world_position).x = (src->world_position).x;
  (dest->world_position).y = (src->world_position).y;
  (dest->world_position).z = (src->world_position).z;
  return dest;
}
