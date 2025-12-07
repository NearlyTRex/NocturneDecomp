// Name: core_dlight.cpp_CDemonLight_init_FUN_004727c0
// Address: 004727c0
// Address Range: [[004727c0, 004728a3]]
// Convention: __cdecl
// Signature: void core_dlight.cpp_CDemonLight_init_FUN_004727c0(CDemonLight * this_ptr)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_init_FUN_004727c0(CDemonLight *this_ptr)

{
  float fVar1;
  void *pvVar2;
  uchar *puVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  
  core_dlight_cpp_CDemonLight_free_FUN_004728b0(this_ptr);
  pvVar2 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                     (this_ptr->shadow_map_width * this_ptr->shadow_map_height * 2 + 0x210,
                      "..\\core\\dlight.cpp",0x6b);
  this_ptr->shadow_buffer_raw = pvVar2;
  if (pvVar2 == (void *)0x0) {
    g_CurrentFilename = "..\\core\\dlight.cpp";
    g_CurrentLineNumber = 0x6c;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonCamera::init - Unable to alloc frame buffer");
  }
  this_ptr->shadow_depth_buffer = (ushort *)((int)this_ptr->shadow_buffer_raw + 0x10U & 0xfffffff0);
  iVar4 = this_ptr->shadow_map_width * this_ptr->shadow_map_height;
  iVar5 = iVar4 >> 0x1f;
  puVar3 = (uchar *)shape_memdbg_cpp_debugMalloc_FUN_0050f250
                              ((int)((iVar4 + iVar5 * -8) - (uint)(iVar5 << 2 < 0)) >> 3,
                               "..\\core\\dlight.cpp",0x71);
  fVar1 = (float)7;
  this_ptr->lightmap_visibility_bits = puVar3;
  iVar4 = 0x472857;
  dVar6 = crt_math_c_round_FUN_005fe6b0((double)(this_ptr->volumetric_intensity * fVar1));
  core_dlight_cpp_CDemonLight_applyFilter_FUN_00474770
            (this_ptr,(&g_GlobalFilters)[(int)ROUND(dVar6)],0,0,iVar4);
  return;
}
