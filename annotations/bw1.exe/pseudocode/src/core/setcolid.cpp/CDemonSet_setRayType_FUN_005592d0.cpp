// Name: core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0
// Address: 005592d0
// Address Range: [[005592d0, 00559309]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_setRayType_FUN_005592d0(CDemonSet *this_ptr,int ray_type)

#include "nocturne.h"

void __cdecl core_setcolid_cpp_CDemonSet_setRayType_FUN_005592d0(CDemonSet *this_ptr,int ray_type)

{
  (this_ptr->ray_query).ray_type = ray_type;
  if (ray_type != 3) {
    return;
  }
  g_CurrentFilename = "..\\core\\setcolid.cpp";
  g_CurrentLineNumber = 1178;
  core_main_c_displayErrorAndQuit_FUN_005030e0("CDemonSet::setRayType - use setRayTypeLaser");
  return;
}
