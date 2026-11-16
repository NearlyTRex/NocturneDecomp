// Name: core_shadow.cpp_CShadow_scaleDamageByHitBone_FUN_0053e9a0
// Address: 0053e9a0
// Address Range: [[0053e9a0, 0053e9fc]]
// Convention: __cdecl
// Signature: void __cdecl core_shadow_cpp_CShadow_scaleDamageByHitBone_FUN_0053e9a0(CShadow *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_shadow_cpp_CShadow_scaleDamageByHitBone_FUN_0053e9a0(CShadow *this_ptr,SDamageInfo *damage_info)

{
  int iVar1;
  
  iVar1 = damage_info->hit_part_index;
  if (iVar1 == this_ptr->bone_indices[6]) {
    damage_info->damage_amount = damage_info->damage_amount;
    return;
  }
  if ((iVar1 != this_ptr->bone_indices[4]) && (iVar1 != this_ptr->bone_indices[5])) {
    damage_info->damage_amount = damage_info->damage_amount * (float)_DAT_005e6785;
    return;
  }
  damage_info->damage_amount = damage_info->damage_amount * (float)_DAT_005e678d;
  return;
}
