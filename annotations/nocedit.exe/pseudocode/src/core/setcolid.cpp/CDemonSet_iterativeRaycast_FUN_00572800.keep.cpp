// Name: core_setcolid.cpp_CDemonSet_iterativeRaycast_FUN_00572800
// Address: 00572800
// MANUAL RECONSTRUCTION
// Address Range: [[00572800, 00572a0d]]
// Convention: __cdecl
// Signature: float __cdecl core_setcolid_cpp_CDemonSet_iterativeRaycast_FUN_00572800(CDemonSet *this_ptr,CVector3f *start_pos,CVector3f *direction)

#include "nocturne.h"

float __cdecl core_setcolid_cpp_CDemonSet_iterativeRaycast_FUN_00572800(CDemonSet *this_ptr,CVector3f *start_pos,CVector3f *direction)

{
  float fVar1;
  int iVar1;
  CVector3f local_70;
  float local_58;
  float local_54;
  float local_50;
  CVector3f local_28;
  float local_14;
  
  local_70 = *start_pos;
  local_58 = direction->x;
  local_54 = direction->y;
  iVar1 = 0;
  local_50 = direction->z;
  local_14 = 0.0;
  do {
    local_28.x = local_70.x + local_58 * 0.1f + 0.005f * 0.0;
    local_28.y = local_70.y + local_54 * 0.1f + 0.005f * -32.0;
    local_28.z = local_70.z + local_50 * 0.1f + 0.005f * 0.0;
    fVar1 = core_setcolid_cpp_CDemonSet_raycast_FUN_00572530(this_ptr,&local_70,&local_28);
    if ((0.0 <= fVar1) && (fVar1 <= 1.0)) {
      return fVar1 * 0.1f + local_14;
    }
    local_70 = local_28;
    iVar1 = iVar1 + 1;
    local_14 = local_14 + 0.1;
    local_58 = local_58 + 0.0;
    local_54 = local_54 + -3.2;
    local_50 = local_50 + 0.0;
  } while (iVar1 < 100);
  return -1.0;
}
