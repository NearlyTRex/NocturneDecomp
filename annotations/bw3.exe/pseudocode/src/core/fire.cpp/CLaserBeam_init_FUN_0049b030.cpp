// Name: core_fire.cpp_CLaserBeam_init_FUN_0049b030
// Address: 0049b030
// Address Range: [[0049b030, 0049b0d0]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CLaserBeam_init_FUN_0049b030(CLaserBeam *this_ptr,CVector3f *origin,CVector3f *hit_position,float beam_width,float reticle_intensity,CVector3f *reflection_normal,int red,int green,int blue,float halo_spread,float cone_angle)

#include "nocturne.h"

void __cdecl core_fire_cpp_CLaserBeam_init_FUN_0049b030(CLaserBeam *this_ptr,CVector3f *origin,CVector3f *hit_position,float beam_width,float reticle_intensity,CVector3f *reflection_normal,int red,int green,int blue,float halo_spread,float cone_angle)

{
  if (this_ptr != (CLaserBeam *)origin) {
    *(uint *)this_ptr = *(uint *)origin;
    *(uint *)&this_ptr->field_0x4 = *(uint *)&origin->field_0x4;
    *(uint *)&this_ptr->field_0x8 = *(uint *)&origin->field_0x8;
  }
  if ((CVector3f *)&this_ptr->field_0xc != hit_position) {
    *(uint *)&this_ptr->field_0xc = *(uint *)hit_position;
    *(uint *)&this_ptr->field_0x10 = *(uint *)&hit_position->field_0x4;
    *(uint *)&this_ptr->field_0x14 = *(uint *)&hit_position->field_0x8;
  }
  *(float *)&this_ptr->field_0x18 = beam_width;
  *(float *)&this_ptr->field_0x1c = reticle_intensity;
  if ((0.0 < *(float *)&this_ptr->field_0x1c) &&
     ((CVector3f *)&this_ptr->field_0x20 != reflection_normal)) {
    *(uint *)&this_ptr->field_0x20 = *(uint *)reflection_normal;
    *(uint *)&this_ptr->field_0x24 = *(uint *)&reflection_normal->field_0x4;
    *(uint *)&this_ptr->field_0x28 = *(uint *)&reflection_normal->field_0x8;
  }
  *(int *)&this_ptr->field_0x2c = red << 7;
  *(int *)&this_ptr->field_0x30 = green << 7;
  *(int *)&this_ptr->field_0x34 = blue << 7;
  *(float *)&this_ptr->field_0x38 = halo_spread;
  *(float *)&this_ptr->field_0x3c = cone_angle;
  return;
}
