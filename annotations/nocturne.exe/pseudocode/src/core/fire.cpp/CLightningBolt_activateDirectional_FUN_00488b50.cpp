// Name: core_fire.cpp_CLightningBolt_activateDirectional_FUN_00488b50
// Address: 00488b50
// Address Range: [[00488b50, 00488bad]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CLightningBolt_activateDirectional_FUN_00488b50(CLightningBolt *this_ptr,CVector3f *start_position,CVector3f *end_position,float end_width,float end_spread)

#include "nocturne.h"

void __cdecl core_fire_cpp_CLightningBolt_activateDirectional_FUN_00488b50(CLightningBolt *this_ptr,CVector3f *start_position,CVector3f *end_position,float end_width,float end_spread)

{
  if (&this_ptr->start_position != start_position) {
    (this_ptr->start_position).x = start_position->x;
    (this_ptr->start_position).y = start_position->y;
    (this_ptr->start_position).z = start_position->z;
  }
  if (&this_ptr->end_position != end_position) {
    (this_ptr->end_position).x = end_position->x;
    (this_ptr->end_position).y = end_position->y;
    (this_ptr->end_position).z = end_position->z;
  }
  this_ptr->mode = 1;
  this_ptr->lifetime = 0.25;
  this_ptr->end_width = end_width;
  this_ptr->end_spread = end_spread;
  return;
}
