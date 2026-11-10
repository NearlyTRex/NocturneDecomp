// Name: core_lantern.cpp_CLantern_renderTransparent_FUN_0059d040
// Address: 0059d040
// Address Range: [[0059d040, 0059d09f]]
// Convention: __cdecl
// Signature: int __cdecl core_lantern_cpp_CLantern_renderTransparent_FUN_0059d040(CLantern *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_lantern_cpp_CLantern_renderTransparent_FUN_0059d040(CLantern *this_ptr)

{
  float fVar1;
  
  if (*(float *)&this_ptr->field_0x700 <= 0.0) {
    return 0;
  }
  fVar1 = (float)_DAT_005ef7d9;
  *(float *)&this_ptr->field_0x6e8 = *(float *)&this_ptr->field_0x6e8 + _DAT_005ef7d1;
  core_dlight_cpp_renderConeLightGeometry_FUN_0044d060
            ((CVector3f *)&this_ptr->field_0x6d8,(CVector3f *)&this_ptr->field_0x6e4,
             *(float *)&this_ptr->field_0x6f4,*(float *)&this_ptr->field_0x6f0 * fVar1);
  return 1;
}
