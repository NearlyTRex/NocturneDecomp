// Name: core_water.cpp_CWater_ctor_FUN_00585db0
// Address: 00585db0
// Address Range: [[00585db0, 00585dc8]]
// Convention: __cdecl
// Signature: CWater * __cdecl core_water_cpp_CWater_ctor_FUN_00585db0(CWater *this_ptr)

#include "nocturne.h"

CWater * __cdecl core_water_cpp_CWater_ctor_FUN_00585db0(CWater *this_ptr)

{
  this_ptr->tile_size = 32.0;
  this_ptr->wave_animation_enabled = 0;
  this_ptr->water_level_y = 0.0;
  return this_ptr;
}
