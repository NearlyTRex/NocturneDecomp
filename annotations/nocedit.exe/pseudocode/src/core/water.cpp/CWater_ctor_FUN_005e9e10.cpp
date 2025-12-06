// Name: core_water.cpp_CWater_ctor_FUN_005e9e10
// Address: 005e9e10
// Address Range: [[005e9e10, 005e9e28]]
// Convention: __cdecl
// Signature: CWater * core_water.cpp_CWater_ctor_FUN_005e9e10(CWater * this_ptr)

#include "nocturne.h"

CWater * __cdecl core_water_cpp_CWater_ctor_FUN_005e9e10(CWater *this_ptr)

{
  this_ptr->tile_size = 32.0;
  this_ptr->wave_animation_enabled = 0;
  this_ptr->water_level_y = 0.0;
  return this_ptr;
}
