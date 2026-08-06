// Name: core_dlight.cpp_CDemonLight_init_FUN_0044e1e0
// Address: 0044e1e0
// Address Range: [[0044e1e0, 0044e2b5]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_init_FUN_0044e1e0(CDemonLight *this_ptr)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_init_FUN_0044e1e0(CDemonLight *this_ptr)

{
  float fVar1;
  void *pvVar2;
  uchar *puVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  
  core_dlight_cpp_CDemonLight_FUN_0044e2c0(this_ptr);
  pvVar2 = malloc
                     (this_ptr->shadow_map_width * this_ptr->shadow_map_height * 2 + 0x210);
  this_ptr->shadow_buffer_raw = pvVar2;
  if (pvVar2 == (void *)0x0) {
    g_CurrentFilename = "..\\core\\dlight.cpp";
    g_CurrentLineNumber = 108;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CDemonCamera::init - Unable to alloc frame buffer");
  }
  this_ptr->shadow_depth_buffer = (ushort *)((int)this_ptr->shadow_buffer_raw + 0x10U & 0xfffffff0);
  iVar4 = this_ptr->shadow_map_width * this_ptr->shadow_map_height;
  iVar5 = iVar4 >> 0x1f;
  puVar3 = (uchar *)malloc
                     ((int)((iVar4 + iVar5 * -8) - (uint)(iVar5 << 2 < 0)) >> 3);
  fVar1 = (float)7;
  this_ptr->lightmap_visibility_bits = puVar3;
  iVar4 = 0x44e269;
  dVar6 = round((double)(this_ptr->volumetric_intensity * fVar1));
  core_dlight_cpp_CDemonLight_applyFilter_FUN_004501c0
            (this_ptr,(CDemonFilter *)(&DAT_005ad51c)[(int)ROUND(dVar6)],0,0,iVar4);
  return;
}
