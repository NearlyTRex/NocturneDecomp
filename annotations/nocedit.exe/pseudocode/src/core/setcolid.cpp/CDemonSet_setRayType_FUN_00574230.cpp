// Name: core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230
// Address: 00574230
// Address Range: [[00574230, 00574269]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(CDemonSet *this_ptr,int ray_type)

#include "nocturne.h"

void __cdecl core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(CDemonSet *this_ptr,int ray_type)

{
  this_ptr->ray_type = ray_type;
  if (ray_type != 3) {
    return;
  }
  g_CurrentFilename = "..\\core\\setcolid.cpp";
  g_CurrentLineNumber = 0x49a;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonSet::setRayType - use setRayTypeLaser");
  return;
}
