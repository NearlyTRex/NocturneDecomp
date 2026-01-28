// Name: core_dlight.cpp_CDemonLight_ctor_FUN_004726a0
// Address: 004726a0
// Address Range: [[004726a0, 00472754]]
// Convention: __cdecl
// Signature: CDemonLight * __cdecl core_dlight_cpp_CDemonLight_ctor_FUN_004726a0(CDemonLight *this_ptr)

#include "nocturne.h"

CDemonLight * __cdecl core_dlight_cpp_CDemonLight_ctor_FUN_004726a0(CDemonLight *this_ptr)

{
  CDemonLight *pCVar1;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  pCVar1 = (CDemonLight *)core_dcamera_cpp_CDemonCamera_ctor_FUN_0044c030(&this_ptr->base);
  (pCVar1->base).base.vtable = &g_CDemonLightVTable;
  pCVar1->light_enabled_flag = 1;
  pCVar1->shadow_bounds_mode = 1;
  pCVar1->shadow_depth_buffer = (ushort *)0x0;
  pCVar1->shadow_buffer_raw = (void *)0x0;
  pCVar1->restore_memory_size = 0;
  (pCVar1->base).zbuffer_raw = (void *)0x0;
  (pCVar1->base).max_distance = 255.0;
  pCVar1->lightmap_visibility_bits = (uchar *)0x0;
  pCVar1->filter_buffer = (uchar *)0x0;
  pCVar1->precomputed_lighting_textures = (uchar *)0x0;
  pCVar1->transform_scale_factor = 0x10000;
  pCVar1->volumetric_intensity = 1.0;
  pCVar1->unk2 = 0;
  pCVar1->antialiasing_enabled = 1;
  pCVar1->shadow_map_width = in_stack_00000008;
  pCVar1->shadow_map_height = in_stack_0000000c;
  return pCVar1;
}
