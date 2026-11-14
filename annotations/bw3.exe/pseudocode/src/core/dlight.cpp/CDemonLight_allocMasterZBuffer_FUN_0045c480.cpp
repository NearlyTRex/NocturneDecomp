// Name: core_dlight.cpp_CDemonLight_allocMasterZBuffer_FUN_0045c480
// Address: 0045c480
// Address Range: [[0045c480, 0045c4f7]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_allocMasterZBuffer_FUN_0045c480(CDemonLight *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_CDemonLight_allocMasterZBuffer_FUN_0045c480(CDemonLight *this_ptr)

{
  void *pvVar1;
  
  if ((this_ptr->base).zbuffer_raw != (void *)0x0) {
    _DAT_01d71de0 = "..\\core\\dlight.cpp";
    _DAT_01d71de4 = 0xcd;
    core_main_c_FUN_004e4330("CDemonLight::allocMasterZBuffer - We already have one!");
  }
  pvVar1 = core_dlight_cpp_getRestoreMemory_FUN_0045c400
                     (this_ptr->shadow_map_width * this_ptr->shadow_map_height);
  this_ptr->master_zbuffer = pvVar1;
  _memcpy
            (this_ptr->master_zbuffer,this_ptr->shadow_depth_buffer,
             this_ptr->shadow_map_width * this_ptr->shadow_map_height * 2);
  return;
}
