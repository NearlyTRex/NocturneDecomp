// Name: core_water.cpp_CWater_ctor_FUN_005e9e10
// Address: 005e9e10
// Address Range: [[005e9e10, 005e9e28]]
// Convention: __cdecl
// Signature: CWater * core_water.cpp_CWater_ctor_FUN_005e9e10(CWater * this_ptr)
// Cross-references:
//   core_water.cpp_staticInit_FUN_005e9da0 (005e9da0) at 005e9da5 [UNCONDITIONAL_CALL]

#include "nocturne.h"

CWater * __cdecl core_water_cpp_CWater_ctor_FUN_005e9e10(CWater *this_ptr)

{
  this_ptr->tile_size = 32.0;
  this_ptr->wave_animation_enabled = 0;
  this_ptr->water_level_y = 0.0;
  return this_ptr;
}


// Assembly code:
// 005e9e10: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_water.cpp_CWater_ctor_FUN_005e9e10
//   XREF to: Stack[0x4] (READ)
// 005e9e14: MOV dword ptr [EAX + 0x8],0x42000000
// 005e9e1b: MOV dword ptr [EAX],0x0
// 005e9e21: MOV dword ptr [EAX + 0x4],0x0
// 005e9e28: RET
