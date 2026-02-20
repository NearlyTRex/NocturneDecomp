// Name: core_ghoul.cpp_CGhoul_getTargetPoints_FUN_004e8bc0
// Address: 004e8bc0
// Address Range: [[004e8bc0, 004e8db6]]
// Convention: __cdecl
// Signature: int __cdecl core_ghoul_cpp_CGhoul_getTargetPoints_FUN_004e8bc0(CGhoul *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_ghoul_cpp_CGhoul_getTargetPoints_FUN_004e8bc0(CGhoul *this_ptr,CVector3f *out_points_array)

{
  CDeformableModelInstance *this_ptr_00;
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  int iVar3;
  int bone_index;
  CVector3f local_60;
  CVector3f local_54;
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  int local_18;
  
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
            (&(this_ptr->base).base.model,&local_30,INT_02d83320);
  if (&local_30 != out_points_array) {
    out_points_array->x = local_30.x;
    out_points_array->y = local_30.y;
    out_points_array->z = local_30.z;
  }
  iVar3 = 1;
  local_18 = 0;
  this_ptr_00 = &(this_ptr->base).base.model;
  do {
    switch((local_18 + (this_ptr->base).base.base.direction_hint) % 4) {
    case 0:
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_r_upper_arm] != 0) {
        pCVar1 = &local_24;
        bone_index = INT_02d83310;
LAB_004e8c4c:
        pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                           (this_ptr_00,pCVar1,bone_index);
        if (&local_48 != pCVar1) {
          local_48.x = pCVar1->x;
          local_48.y = pCVar1->y;
          local_48.z = pCVar1->z;
        }
        local_48.y = local_30.y * (float)0.29999999999999999 + local_48.y * (float)0.69999999999999996;
        local_48.x = local_30.x * (float)0.5 + local_48.x * (float)0.5;
        pCVar1 = out_points_array + iVar3;
        if (pCVar1 != &local_48) {
          pCVar1->x = local_48.x;
          pCVar1->y = local_48.y;
          pCVar1->z = local_48.z;
        }
LAB_004e8cce:
        iVar3 = iVar3 + 1;
      }
      break;
    case 1:
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_l_upper_arm] != 0) {
        pCVar1 = &local_54;
        bone_index = INT_02d83314;
        goto LAB_004e8c4c;
      }
      break;
    case 2:
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_head] != 0) {
        pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                           (this_ptr_00,&local_3c,INT_02d832fc);
        pCVar2 = out_points_array + iVar3;
        if (pCVar2 != pCVar1) {
          pCVar2->x = pCVar1->x;
          pCVar2->y = pCVar1->y;
          pCVar2->z = pCVar1->z;
        }
        goto LAB_004e8cce;
      }
      break;
    case 3:
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_upper_torso] != 0) {
        pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                           (this_ptr_00,&local_60,INT_02d83324);
        pCVar2 = out_points_array + iVar3;
        if (pCVar2 != pCVar1) {
          pCVar2->x = pCVar1->x;
          pCVar2->y = pCVar1->y;
          pCVar2->z = pCVar1->z;
        }
        goto LAB_004e8cce;
      }
    }
    local_18 = local_18 + 1;
    if (3 < local_18) {
      return iVar3;
    }
  } while( true );
}
