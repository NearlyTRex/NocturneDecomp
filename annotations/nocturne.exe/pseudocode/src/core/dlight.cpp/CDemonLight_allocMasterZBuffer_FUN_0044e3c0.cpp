// Name: core_dlight.cpp_CDemonLight_allocMasterZBuffer_FUN_0044e3c0
// Address: 0044e3c0
// Address Range: [[0044e3c0, 0044e437]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_allocMasterZBuffer_FUN_0044e3c0(CDemonLight *this_ptr)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_allocMasterZBuffer_FUN_0044e3c0(CDemonLight *this_ptr)

{
  void *pvVar1;
  
  if ((this_ptr->base).zbuffer_raw != (void *)0x0) {
    g_CHAR_PTR_01cc4800 = "..\\core\\dlight.cpp";
    g_INT_01cc4804 = 0xcd;
    core_main_c_FUN_004c8440("CDemonLight::allocMasterZBuffer - We already have one!");
  }
  pvVar1 = core_dlight_cpp_getRestoreMemory_FUN_0044e340
                     (this_ptr->shadow_map_width * this_ptr->shadow_map_height);
  this_ptr->master_zbuffer = pvVar1;
  _memcpy
            (this_ptr->master_zbuffer,this_ptr->shadow_depth_buffer,
             this_ptr->shadow_map_width * this_ptr->shadow_map_height * 2);
  return;
}
