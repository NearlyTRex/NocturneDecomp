// Name: core_lantern.cpp_CLantern_renderTransparent_FUN_0059d040
// Address: 0059d040
// Address Range: [[0059d040, 0059d09f]]
// Convention: __cdecl
// Signature: int __cdecl core_lantern_cpp_CLantern_renderTransparent_FUN_0059d040(CLantern *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_lantern_cpp_CLantern_renderTransparent_FUN_0059d040(CLantern *this_ptr)

{
  float fVar1;
  float fVar2;
  
  if (this_ptr->brightness <= 0.0) {
    return 0;
  }
  fVar1 = this_ptr->light_max_distance;
  fVar2 = (float)_DAT_005ef7d9;
  (this_ptr->light_rotation).y = (this_ptr->light_rotation).y + _DAT_005ef7d1;
  core_dlight_cpp_renderConeLightGeometry_FUN_0044d060
            (&this_ptr->light_position,&this_ptr->light_rotation,this_ptr->light_focal_length,
             fVar1 * fVar2);
  return 1;
}
