// Name: core_fire.cpp_CLightningBolt_activateDirectional_FUN_0049f470
// Address: 0049f470
// Address Range: [[0049f470, 0049f4d4]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CLightningBolt_activateDirectional_FUN_0049f470(CLightningBolt *this_ptr,CVector3f *start_position,CVector3f *end_position,float end_width,float end_spread,int mode,float lifetime,int render_alpha)

#include "nocturne.h"

void __cdecl core_fire_cpp_CLightningBolt_activateDirectional_FUN_0049f470(CLightningBolt *this_ptr,CVector3f *start_position,CVector3f *end_position,float end_width,float end_spread,int mode,float lifetime,int render_alpha)

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
  this_ptr->lifetime = lifetime;
  this_ptr->end_width = end_width;
  this_ptr->end_spread = end_spread;
  this_ptr->mode = mode;
  this_ptr->render_alpha = render_alpha;
  return;
}
