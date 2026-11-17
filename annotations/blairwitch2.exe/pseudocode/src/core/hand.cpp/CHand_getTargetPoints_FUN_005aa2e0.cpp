// Name: core_hand.cpp_CHand_getTargetPoints_FUN_005aa2e0
// Address: 005aa2e0
// Address Range: [[005aa2e0, 005aa367]]
// Convention: __cdecl
// Signature: int __cdecl core_hand_cpp_CHand_getTargetPoints_FUN_005aa2e0(CHand *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_hand_cpp_CHand_getTargetPoints_FUN_005aa2e0(CHand *this_ptr,CVector3f *out_points_array)

{
  byte bVar1;
  float afStackY_1008 [1015];
  CVector3f CStack_20;
  CVector3f CStack_14;
  
  bVar1 = 0;
  if ((this_ptr->base).fade_val < (float)0.5) {
    return 0;
  }
  core_xform_cpp_transformVector3x4_FUN_00591530
            (&g_ZeroVector,
             (this_ptr->base).base.base.model.bone_transform.bone_model_matrices +
             this_ptr->hand_bone,&CStack_20);
  CStack_14.x = CStack_20.x;
  *(uint *)((int)&CStack_14 + (uint)bVar1 * -8 + 4) =
       *(uint *)((int)&CStack_20 + (uint)bVar1 * -8 + 4);
  *(uint *)((int)&CStack_14 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)((int)&CStack_20 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (out_points_array != &CStack_14) {
    out_points_array->x = CStack_14.x;
    out_points_array->y = CStack_14.y;
    out_points_array->z = CStack_14.z;
  }
  return 1;
}
