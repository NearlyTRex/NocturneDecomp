// Name: core_set.cpp_FUN_0052bca0
// Address: 0052bca0
// Address Range: [[0052bca0, 0052bd12]]
// Convention: unknown
// Signature: void core_set_cpp_FUN_0052bca0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_set_cpp_FUN_0052bca0(int param_1)

{
  int light_scale;
  int color_scale;
  int fog_scale;
  
  color_scale = *(int *)(param_1 + 0x10c);
  fog_scale = *(int *)(param_1 + 0x110);
  light_scale = *(int *)(param_1 + 0x108);
  if (param_1 == _DAT_0200a3a4) {
    light_scale = (light_scale * 3) / 2;
    color_scale = (color_scale * 3) / 2;
    fog_scale = (fog_scale * 3) / 2;
  }
  core_set_cpp_CDemonSet_setFlatColor_FUN_005344c0(g_CDemonSetPtr,light_scale,color_scale,fog_scale)
  ;
  return;
}
