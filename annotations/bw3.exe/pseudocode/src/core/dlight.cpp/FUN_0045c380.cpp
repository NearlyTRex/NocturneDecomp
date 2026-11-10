// Name: core_dlight.cpp_FUN_0045c380
// Address: 0045c380
// Address Range: [[0045c380, 0045c3ff]]
// Convention: unknown
// Signature: void core_dlight_cpp_FUN_0045c380(CDemonLight *param_1)

#include "nocturne.h"

void core_dlight_cpp_FUN_0045c380(CDemonLight *param_1)

{
  if (param_1->shadow_depth_buffer != (ushort *)0x0) {
    FUN_005a3770(param_1->shadow_buffer_raw);
    param_1->shadow_depth_buffer = (ushort *)0x0;
    param_1->shadow_buffer_raw = (void *)0x0;
  }
  core_dlight_cpp_CDemonLight_freeMasterZBuffer_FUN_0045c500(param_1);
  if (param_1->lightmap_visibility_bits != (uchar *)0x0) {
    FUN_005a3770(param_1->lightmap_visibility_bits);
    param_1->lightmap_visibility_bits = (uchar *)0x0;
  }
  if (param_1->filter_buffer == (uchar *)0x0) {
    return;
  }
  FUN_005a3770(param_1->filter_buffer);
  param_1->filter_buffer = (uchar *)0x0;
  return;
}
