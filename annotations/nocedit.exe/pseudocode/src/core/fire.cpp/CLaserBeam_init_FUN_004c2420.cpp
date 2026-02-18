// Name: core_fire.cpp_CLaserBeam_init_FUN_004c2420
// Address: 004c2420
// Address Range: [[004c2420, 004c24c0]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CLaserBeam_init_FUN_004c2420(CLaserBeam *this_ptr,CVector3f *origin,CVector3f *hit_position,float beam_width,float reticle_intensity,CVector3f *reflection_normal,int red,int green,int blue,float halo_spread,float cone_angle)

#include "nocturne.h"

void __cdecl core_fire_cpp_CLaserBeam_init_FUN_004c2420(CLaserBeam *this_ptr,CVector3f *origin,CVector3f *hit_position,float beam_width,float reticle_intensity,CVector3f *reflection_normal,int red,int green,int blue,float halo_spread,float cone_angle)

{
  if (this_ptr != (CLaserBeam *)origin) {
    (this_ptr->origin).x = origin->x;
    (this_ptr->origin).y = origin->y;
    (this_ptr->origin).z = origin->z;
  }
  if (&this_ptr->hit_position != hit_position) {
    (this_ptr->hit_position).x = hit_position->x;
    (this_ptr->hit_position).y = hit_position->y;
    (this_ptr->hit_position).z = hit_position->z;
  }
  this_ptr->beam_width = beam_width;
  this_ptr->reticle_intensity = reticle_intensity;
  if ((0.0 < this_ptr->reticle_intensity) && (&this_ptr->reflection_normal != reflection_normal)) {
    (this_ptr->reflection_normal).x = reflection_normal->x;
    (this_ptr->reflection_normal).y = reflection_normal->y;
    (this_ptr->reflection_normal).z = reflection_normal->z;
  }
  (this_ptr->color).r = red << 7;
  (this_ptr->color).g = green << 7;
  (this_ptr->color).b = blue << 7;
  this_ptr->halo_spread = halo_spread;
  this_ptr->cone_angle = cone_angle;
  return;
}
