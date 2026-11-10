// Name: core_setcolid.cpp_CDemonSet_setRayType_FUN_0053ec90
// Address: 0053ec90
// Address Range: [[0053ec90, 0053ecc9]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(CDemonSet *this_ptr,int ray_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setcolid_cpp_CDemonSet_setRayType_FUN_0053ec90(CDemonSet *this_ptr,int ray_type)

{
  *(int *)&this_ptr->ray_query = ray_type;
  if (ray_type != 3) {
    return;
  }
  _DAT_01d71de0 = "..\\core\\setcolid.cpp";
  _DAT_01d71de4 = 0x49a;
  core_main_c_FUN_004e4330("CDemonSet::setRayType - use setRayTypeLaser");
  return;
}
