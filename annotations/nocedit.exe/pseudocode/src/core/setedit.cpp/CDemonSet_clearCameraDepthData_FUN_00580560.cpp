// Name: core_setedit.cpp_CDemonSet_clearCameraDepthData_FUN_00580560
// Address: 00580560
// Address Range: [[00580560, 00580591]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_CDemonSet_clearCameraDepthData_FUN_00580560(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_clearCameraDepthData_FUN_00580560(CDemonSet *this_ptr)

{
  g_CurrentDebugFilename = "..\\core\\setedit.cpp";
  g_CurrentDebugLine = 0x1036;
  shape_memdbg_cpp_free_FUN_005fe659(g_CameraDepthData);
  g_CameraDepthData = (void *)0x0;
  return;
}
