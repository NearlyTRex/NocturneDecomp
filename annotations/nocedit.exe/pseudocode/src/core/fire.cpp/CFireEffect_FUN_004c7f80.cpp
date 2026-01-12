// Name: core_fire.cpp_CFireEffect_FUN_004c7f80
// Address: 004c7f80
// Address Range: [[004c7f80, 004c81e9]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_FUN_004c7f80(CFireEffect * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_FUN_004c7f80(CFireEffect *this_ptr)

{
  BADSPACEBASE *in_ESP;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  float in_stack_0000001c;
  float local_88;
  float local_84;
  float local_80;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_14;
  
  local_80 = in_stack_0000001c;
  local_88 = in_stack_0000001c * 0.05f;
  if (local_88 < (float)0.050000000000000003) {
    local_88 = 0.05;
  }
  local_70 = *in_stack_00000008;
  local_6c = in_stack_00000008[1];
  local_68 = in_stack_00000008[2];
  local_28 = *in_stack_0000000c;
  local_24 = in_stack_0000000c[1];
  local_20 = in_stack_0000000c[2];
  while( true ) {
    local_84 = local_80;
    if (local_88 < local_80) {
      local_84 = local_88;
    }
    local_34 = local_28 * local_84;
    local_30 = local_24 * local_84;
    local_2c = local_20 * local_84;
    local_14 = local_84 * (float)0.5 * local_84;
    local_64 = local_14 * 0.0;
    local_60 = local_14 * -32.0;
    local_5c = local_14 * 0.0;
    local_80 = local_80 - local_84;
    local_58 = local_70 + local_34;
    local_54 = local_6c + local_30;
    local_50 = local_68 + local_2c;
    local_40 = local_58 + local_64;
    local_3c = local_54 + local_60;
    local_38 = local_50 + local_5c;
    if (local_80 <= 0.0) break;
    core_fire_cpp_CFireEffect_FUN_004c7eb0(this_ptr);
    if (&local_6c != &local_3c) {
      local_70 = local_40;
      local_6c = local_3c;
      local_68 = local_38;
    }
    local_4c = local_84 * 0.0;
    local_48 = local_84 * -32.0;
    local_44 = local_84 * 0.0;
    local_28 = local_28 + local_4c;
    local_24 = local_24 + local_48;
    local_20 = local_20 + local_44;
  }
  core_fire_cpp_CFireEffect_FUN_004c7eb0(this_ptr);
  return;
}
