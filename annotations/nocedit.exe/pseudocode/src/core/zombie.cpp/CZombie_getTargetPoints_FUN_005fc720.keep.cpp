// Name: core_zombie.cpp_CZombie_getTargetPoints_FUN_005fc720
// Address: 005fc720
// MANUAL RECONSTRUCTION
// Address Range: [[005fc720, 005fc916]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_CZombie_getTargetPoints_FUN_005fc720(CZombie *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

int __cdecl core_zombie_cpp_CZombie_getTargetPoints_FUN_005fc720(CZombie *this_ptr,CVector3f *out_points_array)

{
  CVector3f *pCVar3;
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  int iVar3;
  CVector3f local_60;
  CVector3f local_54;
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  int local_18;
  CDeformableModelInstance *this_ptr_00;
  int bone_index;
  
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
            (&(this_ptr->base).base.model,&local_30,this_ptr->bone_indices[9]);
  if (&local_30 != out_points_array) {
    *out_points_array = local_30;
  }
  iVar3 = 1;
  local_18 = 0;
  this_ptr_00 = &(this_ptr->base).base.model;
  do {
    switch((local_18 + (this_ptr->base).base.base.direction_hint) % 4) {
    case 0:
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[0]] != 0) {
        bone_index = this_ptr->bone_indices[5];
        pCVar3 = &local_24;
LAB_005fc7ac:
        pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                           (this_ptr_00,pCVar3,bone_index);
        if (&local_48 != pCVar3) {
          local_48 = *pCVar3;
        }
        local_48.y = local_30.y * (float)0.29999999999999999 + local_48.y * (float)0.69999999999999996;
        local_48.x = local_30.x * (float)0.5 + local_48.x * (float)0.5;
        pCVar3 = out_points_array + iVar3;
        if (pCVar3 != &local_48) {
          *pCVar3 = local_48;
        }
LAB_005fc82e:
        iVar3 = iVar3 + 1;
      }
      break;
    case 1:
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[2]] != 0) {
        bone_index = this_ptr->bone_indices[6];
        pCVar3 = &local_54;
        goto LAB_005fc7ac;
      }
      break;
    case 2:
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[6]] != 0) {
        pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                           (this_ptr_00,&local_3c,this_ptr->bone_indices[0]);
        pCVar2 = out_points_array + iVar3;
        if (pCVar2 != pCVar3) {
          *pCVar2 = *pCVar3;
        }
        goto LAB_005fc82e;
      }
      break;
    case 3:
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[5]] != 0) {
        pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                           (this_ptr_00,&local_60,this_ptr->bone_indices[10]);
        pCVar3 = out_points_array + iVar3;
        if (pCVar3 != pCVar1) {
          *pCVar3 = *pCVar1;
        }
        goto LAB_005fc82e;
      }
    }
    local_18 = local_18 + 1;
    if (3 < local_18) {
      return iVar3;
    }
  } while( true );
}
