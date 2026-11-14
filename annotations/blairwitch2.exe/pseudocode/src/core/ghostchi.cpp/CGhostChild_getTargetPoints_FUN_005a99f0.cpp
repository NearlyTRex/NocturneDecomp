// Name: core_ghostchi.cpp_CGhostChild_getTargetPoints_FUN_005a99f0
// Address: 005a99f0
// Address Range: [[005a99f0, 005a9a77]]
// Convention: __cdecl
// Signature: int __cdecl core_ghostchi_cpp_CGhostChild_getTargetPoints_FUN_005a99f0(CGhostChild *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_ghostchi_cpp_CGhostChild_getTargetPoints_FUN_005a99f0(CGhostChild *this_ptr,CVector3f *out_points_array)

{
  byte bVar1;
  float afStackY_1008 [1015];
  float fStack_20;
  CVector3f CStack_14;
  
  bVar1 = 0;
  if ((this_ptr->base).fade_val < (float)_DAT_005f098f) {
    return 0;
  }
  core_xform_cpp_FUN_00591530
            (&DAT_0265370c,
             (this_ptr->base).base.base.model.bone_transform.bone_model_matrices +
             this_ptr->head_bone);
  CStack_14.x = fStack_20;
  *(uint *)((int)&CStack_14 + (uint)bVar1 * -8 + 4) =
       *(uint *)(&stack0xffffffe4 + (uint)bVar1 * -8);
  *(uint *)((int)&CStack_14 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)(&stack0xffffffe8 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (out_points_array != &CStack_14) {
    out_points_array->x = CStack_14.x;
    out_points_array->y = CStack_14.y;
    out_points_array->z = CStack_14.z;
  }
  return 1;
}
