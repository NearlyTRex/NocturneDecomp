// Name: core_setcolid.cpp_CDemonSet_setRayType_FUN_00511800
// Address: 00511800
// Address Range: [[00511800, 00511839]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_setRayType_FUN_00511800(CDemonSet *this_ptr,int ray_type)

#include "nocturne.h"

void __cdecl core_setcolid_cpp_CDemonSet_setRayType_FUN_00511800(CDemonSet *this_ptr,int ray_type)

{
  (this_ptr->ray_query).ray_type = ray_type;
  if (ray_type != 3) {
    return;
  }
  g_CurrentFilename = "..\\core\\setcolid.cpp";
  g_CurrentLineNumber = 1178;
  core_main_c_displayErrorAndQuit_FUN_004c8440("CDemonSet::setRayType - use setRayTypeLaser");
  return;
}
