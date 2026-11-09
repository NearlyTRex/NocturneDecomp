// Name: core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0
// Address: 005592d0
// Address Range: [[005592d0, 00559309]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_setRayType_FUN_005592d0(CDemonSet *this_ptr,int ray_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setcolid_cpp_CDemonSet_setRayType_FUN_005592d0(CDemonSet *this_ptr,int ray_type)

{
  *(int *)&this_ptr->field_0x15f698 = ray_type;
  if (ray_type != 3) {
    return;
  }
  _DAT_01d1d400 = "..\\core\\setcolid.cpp";
  _DAT_01d1d404 = 0x49a;
  core_main_c_FUN_005030e0("CDemonSet::setRayType - use setRayTypeLaser");
  return;
}
