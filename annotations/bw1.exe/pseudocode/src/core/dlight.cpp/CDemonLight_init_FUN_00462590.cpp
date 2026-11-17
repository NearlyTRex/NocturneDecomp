// Name: core_dlight.cpp_CDemonLight_init_FUN_00462590
// Address: 00462590
// Address Range: [[00462590, 00462665]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_init_FUN_00462590(CDemonLight *this_ptr)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_init_FUN_00462590(CDemonLight *this_ptr)

{
  float fVar1;
  void *pvVar2;
  uchar *puVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  
  core_dlight_cpp_CDemonLight_free_FUN_00462670(this_ptr);
  pvVar2 = malloc
                     (this_ptr->shadow_map_width * this_ptr->shadow_map_height * 2 + 0x210);
  this_ptr->shadow_buffer_raw = pvVar2;
  if (pvVar2 == (void *)0x0) {
    g_CHAR_PTR_01d1d400 = "..\\core\\dlight.cpp";
    g_INT_01d1d404 = 0x6c;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CDemonCamera::init - Unable to alloc frame buffer");
  }
  this_ptr->shadow_depth_buffer = (ushort *)((int)this_ptr->shadow_buffer_raw + 0x10U & 0xfffffff0);
  iVar4 = this_ptr->shadow_map_width * this_ptr->shadow_map_height;
  iVar5 = iVar4 >> 0x1f;
  puVar3 = (uchar *)malloc
                     ((int)((iVar4 + iVar5 * -8) - (uint)(iVar5 << 2 < 0)) >> 3);
  fVar1 = (float)7;
  this_ptr->lightmap_visibility_bits = puVar3;
  iVar4 = 0x462619;
  dVar6 = round((double)(this_ptr->volumetric_intensity * fVar1));
  core_dlight_cpp_CDemonLight_applyFilter_FUN_00463e30
            (this_ptr,(&g_GlobalFilters)[(int)ROUND(dVar6)],0,0,iVar4);
  return;
}
