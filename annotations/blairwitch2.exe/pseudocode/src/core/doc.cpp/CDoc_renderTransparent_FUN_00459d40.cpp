// Name: core_doc.cpp_CDoc_renderTransparent_FUN_00459d40
// Address: 00459d40
// Address Range: [[00459d40, 00459da6]]
// Convention: __cdecl
// Signature: int __cdecl core_doc_cpp_CDoc_renderTransparent_FUN_00459d40(CDoc *this_ptr)

#include "nocturne.h"

int __cdecl core_doc_cpp_CDoc_renderTransparent_FUN_00459d40(CDoc *this_ptr)

{
  CWeapon *this_ptr_00;
  
  if (0.0 < this_ptr->lantern_tween_pct) {
    core_dlight_cpp_renderConeLightGeometry_FUN_0044d060
              (&this_ptr->lantern_light_position,&this_ptr->lantern_light_direction,32.0,5.0);
  }
  this_ptr_00 = this_ptr->weapon;
  if (this_ptr_00 != (CWeapon *)0x0) {
    (*((this_ptr_00->base).vtable._ub)->renderTransparent)(&this_ptr_00->base);
  }
  core_bwspart_cpp_CSimpleParticleSystem_render_FUN_005a8290
            ((this_ptr->base).base.base.particle_systems);
  return 1;
}
