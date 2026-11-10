// Name: core_dlight.cpp_CDemonLight_allocMasterZBuffer_FUN_00462770
// Address: 00462770
// Address Range: [[00462770, 004627e7]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_allocMasterZBuffer_FUN_00462770(CDemonLight *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_CDemonLight_allocMasterZBuffer_FUN_00462770(CDemonLight *this_ptr)

{
  void *pvVar1;
  
  if ((this_ptr->base).zbuffer_raw != (void *)0x0) {
    _DAT_01d1d400 = "..\\core\\dlight.cpp";
    _DAT_01d1d404 = 0xcd;
    core_main_c_FUN_005030e0("CDemonLight::allocMasterZBuffer - We already have one!");
  }
  pvVar1 = core_dlight_cpp_getRestoreMemory_FUN_004626f0
                     (this_ptr->shadow_map_width * this_ptr->shadow_map_height);
  this_ptr->master_zbuffer = pvVar1;
  _memcpy(this_ptr->shadow_map_width * this_ptr->shadow_map_height * 2);
  return;
}
