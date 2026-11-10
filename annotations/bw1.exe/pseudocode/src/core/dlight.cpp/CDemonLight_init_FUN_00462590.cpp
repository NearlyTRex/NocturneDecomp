// Name: core_dlight.cpp_CDemonLight_init_FUN_00462590
// Address: 00462590
// Address Range: [[00462590, 00462665]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_init_FUN_00462590(CDemonLight *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_CDemonLight_init_FUN_00462590(CDemonLight *this_ptr)

{
  void *pvVar1;
  uchar *puVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  
  core_dlight_cpp_FUN_00462670(this_ptr);
  pvVar1 = FUN_005c08d0
                     (this_ptr->shadow_map_width * this_ptr->shadow_map_height * 2 + 0x210);
  this_ptr->shadow_buffer_raw = pvVar1;
  if (pvVar1 == (void *)0x0) {
    _DAT_01d1d400 = "..\\core\\dlight.cpp";
    _DAT_01d1d404 = 0x6c;
    core_main_c_FUN_005030e0("CDemonCamera::init - Unable to alloc frame buffer");
  }
  this_ptr->shadow_depth_buffer = (ushort *)((int)this_ptr->shadow_buffer_raw + 0x10U & 0xfffffff0);
  iVar3 = this_ptr->shadow_map_width * this_ptr->shadow_map_height;
  iVar4 = iVar3 >> 0x1f;
  puVar2 = FUN_005c08d0((int)((iVar3 + iVar4 * -8) - (uint)(iVar4 << 2 < 0)) >> 3);
  fVar5 = (float10)this_ptr->volumetric_intensity * (float10)_DAT_005d8f2c;
  this_ptr->lightmap_visibility_bits = puVar2;
  iVar3 = 0;
  round();
  core_dlight_cpp_CDemonLight_applyFilter_FUN_00463e30
            (this_ptr,(&g_GlobalFilters)[(int)ROUND(fVar5)],0,0,iVar3);
  return;
}
