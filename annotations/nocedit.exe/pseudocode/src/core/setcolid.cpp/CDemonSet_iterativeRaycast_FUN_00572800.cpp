// Name: core_setcolid.cpp_CDemonSet_iterativeRaycast_FUN_00572800
// Address: 00572800
// Address Range: [[00572800, 00572a0d]]
// Convention: __cdecl
// Signature: float core_setcolid.cpp_CDemonSet_iterativeRaycast_FUN_00572800(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * direction)

#include "nocturne.h"

float __cdecl
core_setcolid_cpp_CDemonSet_iterativeRaycast_FUN_00572800
          (CDemonSet *this_ptr,CVector3f *start_pos,CVector3f *direction)

{
  int iVar1;
  CVector3f local_70;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  CVector3f local_28;
  float local_18;
  float local_14;
  float local_10;
  
  local_70.x = start_pos->x;
  local_70.y = start_pos->y;
  local_70.z = start_pos->z;
  local_58 = direction->x;
  local_54 = direction->y;
  iVar1 = 0;
  local_50 = direction->z;
  local_4c = 0.0;
  local_48 = -32.0;
  local_44 = 0.0;
  local_14 = 0.0;
  do {
    local_64 = local_4c * 0.005f;
    local_60 = local_48 * 0.005f;
    local_5c = local_44 * 0.005f;
    local_34 = local_58 * 0.1f;
    local_30 = local_54 * 0.1f;
    local_2c = local_50 * 0.1f;
    local_10 = 0.1;
    local_28.x = local_70.x + local_34 + local_64;
    local_28.y = local_70.y + local_30 + local_60;
    local_28.z = local_70.z + local_2c + local_5c;
    local_18 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530(this_ptr,&local_70,&local_28);
    if ((0.0 <= local_18) && (local_18 <= 1.0)) {
      return local_18 * 0.1f + local_14;
    }
    if (&local_70 != &local_28) {
      local_70.x = local_28.x;
      local_70.y = local_28.y;
      local_70.z = local_28.z;
    }
    local_40 = local_4c * local_10;
    local_3c = local_48 * local_10;
    local_38 = local_44 * local_10;
    iVar1 = iVar1 + 1;
    local_14 = local_14 + local_10;
    local_58 = local_58 + local_40;
    local_54 = local_54 + local_3c;
    local_50 = local_50 + local_38;
  } while (iVar1 < 100);
  return -1.0;
}
