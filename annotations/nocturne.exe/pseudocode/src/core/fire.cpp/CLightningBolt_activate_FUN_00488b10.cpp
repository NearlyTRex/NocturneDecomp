// Name: core_fire.cpp_CLightningBolt_activate_FUN_00488b10
// Address: 00488b10
// Address Range: [[00488b10, 00488b4e]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CLightningBolt_activate_FUN_00488b10(CLightningBolt *this_ptr,CVector3f *start_position,float start_width,float end_width )

#include "nocturne.h"

void __cdecl core_fire_cpp_CLightningBolt_activate_FUN_00488b10(CLightningBolt *this_ptr,CVector3f *start_position,float start_width,float end_width )

{
  if (&this_ptr->start_position != start_position) {
    (this_ptr->start_position).x = start_position->x;
    (this_ptr->start_position).y = start_position->y;
    (this_ptr->start_position).z = start_position->z;
  }
  this_ptr->lifetime = 0.25;
  this_ptr->mode = 0;
  this_ptr->start_width = start_width;
  this_ptr->end_width = end_width;
  return;
}
