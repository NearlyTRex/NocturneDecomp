// Name: core_dlight.cpp_FUN_00462670
// Address: 00462670
// Address Range: [[00462670, 004626ef]]
// Convention: unknown
// Signature: void core_dlight_cpp_FUN_00462670(CDemonLight *param_1)

#include "nocturne.h"

void core_dlight_cpp_FUN_00462670(CDemonLight *param_1)

{
  if (param_1->shadow_depth_buffer != (ushort *)0x0) {
    FUN_005c09f0(param_1->shadow_buffer_raw);
    param_1->shadow_depth_buffer = (ushort *)0x0;
    param_1->shadow_buffer_raw = (void *)0x0;
  }
  core_dlight_cpp_CDemonLight_freeMasterZBuffer_FUN_004627f0(param_1);
  if (param_1->lightmap_visibility_bits != (uchar *)0x0) {
    FUN_005c09f0(param_1->lightmap_visibility_bits);
    param_1->lightmap_visibility_bits = (uchar *)0x0;
  }
  if (param_1->filter_buffer == (uchar *)0x0) {
    return;
  }
  FUN_005c09f0(param_1->filter_buffer);
  param_1->filter_buffer = (uchar *)0x0;
  return;
}
