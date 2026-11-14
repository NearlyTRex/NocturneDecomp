// Name: core_water.cpp_CWater_ctor_FUN_005a99e0
// Address: 005a99e0
// Address Range: [[005a99e0, 005a99f8]]
// Convention: __cdecl
// Signature: CWater * __cdecl core_water_cpp_CWater_ctor_FUN_005a99e0(CWater *this_ptr)

#include "nocturne.h"

CWater * __cdecl core_water_cpp_CWater_ctor_FUN_005a99e0(CWater *this_ptr)

{
  this_ptr->tile_size = 32.0;
  this_ptr->wave_animation_enabled = 0;
  this_ptr->water_level_y = 0.0;
  return this_ptr;
}
