// Name: core_setcolid.cpp_CDemonSet_setRayType_FUN_0053ec90
// Address: 0053ec90
// Address Range: [[0053ec90, 0053ecc9]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(CDemonSet *this_ptr,int ray_type)

#include "nocturne.h"

void __cdecl core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(CDemonSet *this_ptr,int ray_type)

{
  (this_ptr->ray_query).ray_type = ray_type;
  if (ray_type != 3) {
    return;
  }
  g_CurrentFilename = "..\\core\\setcolid.cpp";
  g_CurrentLineNumber = 1178;
  core_main_c_displayErrorAndQuit_FUN_004e4330("CDemonSet::setRayType - use setRayTypeLaser");
  return;
}
