// Name: core_dlight.cpp_CDemonLight_init_FUN_004727c0
// Address: 004727c0
// Address Range: [[004727c0, 004728a3]]
// Convention: __cdecl
// Signature: void core_dlight.cpp_CDemonLight_init_FUN_004727c0(CDemonLight * this_ptr)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_init_FUN_004727c0(CDemonLight *this_ptr)

{
  void *pvVar1;
  uchar *puVar2;
  int iVar3;
  int iVar4;
  uint extraout_EDX;
  float10 fVar5;
  int iStack00000008;
  
  core_dlight_cpp_CDemonLight_free_FUN_004728b0(this_ptr);
  pvVar1 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                     (this_ptr->shadow_map_width * this_ptr->shadow_map_height * 2 + 0x210,
                      "..\\core\\dlight.cpp",0x6b);
  this_ptr->shadow_buffer_raw = pvVar1;
  if (pvVar1 == (void *)0x0) {
    g_CurrentFilename = "..\\core\\dlight.cpp";
    g_CurrentLineNumber = 0x6c;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonCamera::init - Unable to alloc frame buffer");
  }
  this_ptr->shadow_depth_buffer = (ushort *)((int)this_ptr->shadow_buffer_raw + 0x10U & 0xfffffff0);
  iVar3 = this_ptr->shadow_map_width * this_ptr->shadow_map_height;
  iVar4 = iVar3 >> 0x1f;
  puVar2 = (uchar *)shape_memdbg_cpp_debugMalloc_FUN_0050f250
                              ((int)((iVar3 + iVar4 * -8) - (uint)(iVar4 << 2 < 0)) >> 3,
                               "..\\core\\dlight.cpp",0x71);
  fVar5 = (float10)this_ptr->volumetric_intensity * (float10)7;
  this_ptr->lightmap_visibility_bits = puVar2;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,puVar2));
  iStack00000008 = (int)ROUND(fVar5);
  core_dlight_cpp_CDemonLight_applyFilter_FUN_00474770
            (this_ptr,(&g_GlobalFilters)[iStack00000008],0,0,(int)this_ptr);
  return;
}
