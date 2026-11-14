// Name: core_fire.cpp_CTrail_activate_FUN_004b3c80
// Address: 004b3c80
// Address Range: [[004b3c80, 004b3cc4]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CTrail_activate_FUN_004b3c80(CTrail *this_ptr,CVector3f *position,float size,float alpha,float lifetime,SMRGLTextureBasic *texture_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CTrail_activate_FUN_004b3c80(CTrail *this_ptr,CVector3f *position,float size,float alpha,float lifetime,SMRGLTextureBasic *texture_ptr)

{
  if (this_ptr != (CTrail *)position) {
    (this_ptr->position).x = position->x;
    (this_ptr->position).y = position->y;
    (this_ptr->position).z = position->z;
  }
  this_ptr->size = size;
  this_ptr->current_alpha = alpha;
  this_ptr->lifetime = lifetime;
  this_ptr->initial_lifetime = lifetime;
  this_ptr->initial_alpha = alpha;
  this_ptr->texture_ptr = texture_ptr;
  return;
}
