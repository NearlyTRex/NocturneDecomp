// Name: core_dlight.cpp_CDemonLight_allocMasterZBuffer_FUN_00462770
// Address: 00462770
// Address Range: [[00462770, 004627e7]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_allocMasterZBuffer_FUN_00462770(CDemonLight *this_ptr)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_allocMasterZBuffer_FUN_00462770(CDemonLight *this_ptr)

{
  void *pvVar1;
  
  if ((this_ptr->base).zbuffer_raw != (void *)0x0) {
    g_CurrentFilename = "..\\core\\dlight.cpp";
    g_CurrentLineNumber = 205;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CDemonLight::allocMasterZBuffer - We already have one!");
  }
  pvVar1 = core_dlight_cpp_getRestoreMemory_FUN_004626f0
                     (this_ptr->shadow_map_width * this_ptr->shadow_map_height);
  this_ptr->master_zbuffer = pvVar1;
  _memcpy
            (this_ptr->master_zbuffer,this_ptr->shadow_depth_buffer,
             this_ptr->shadow_map_width * this_ptr->shadow_map_height * 2);
  return;
}
