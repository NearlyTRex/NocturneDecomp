// Name: core_dlight.cpp_CDemonLight_allocMasterZBuffer_FUN_004729d0
// Address: 004729d0
// Address Range: [[004729d0, 00472a47]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_allocMasterZBuffer_FUN_004729d0(CDemonLight *this_ptr)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_allocMasterZBuffer_FUN_004729d0(CDemonLight *this_ptr)

{
  int iVar1;
  
  if ((this_ptr->base).zbuffer_raw != (void *)0x0) {
    g_CurrentFilename = "..\\core\\dlight.cpp";
    g_CurrentLineNumber = 0xcd;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonLight::allocMasterZBuffer - We already have one!");
  }
  iVar1 = core_dlight_cpp_getRestoreMemory_FUN_00472950
                    (this_ptr->shadow_map_width * this_ptr->shadow_map_height);
  this_ptr->restore_memory_size = iVar1;
  core_event_cpp_FUN_004b1a78();
  return;
}
